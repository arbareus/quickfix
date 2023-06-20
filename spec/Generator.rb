require 'Processor'
require 'Aggregator'
require "GeneratorCPP"

def versionXML( type, major, minor, sp )
  dir = "../src"
  xml = "#{type}#{major}#{minor}.xml"
  if( sp != 0 )
    xml = "#{type}#{major}#{minor}SP#{sp}.xml"
  end
  return xml	
end

def aggregateFields( type, major, minor, sp, aggregator )
  xml = versionXML( type, major, minor, sp )
  Processor.new(xml, [aggregator]).processFields
end

def generateVersion( type, major, minor, sp, verid, aggregator )
  dir = "../src"
  xml = versionXML( type, major, minor, sp )
  cpp = GeneratorCPP.new(type, major.to_s, minor.to_s, sp.to_s, verid.to_s, "#{dir}/quickfix")
  processor = Processor.new(xml, [cpp]).process( aggregator )
end

aggregator = Aggregator.new
aggregateFields( "FIXT", 1, 1, 0, aggregator )
(0..4).each { |i| aggregateFields( "FIX", 4, i, 0, aggregator ) }
(0..2).each { |i| aggregateFields( "FIX", 5, 0, i, aggregator ) }

generateVersion( "FIXT", 1, 1, 0, 0, aggregator )
(0..4).each { |i| generateVersion( "FIX", 4, i, 0, 0, aggregator ) }
(0..0).each { |i| generateVersion( "FIX", 4, i, 0, 0, aggregator ) }
(0..2).each { |i| generateVersion( "FIX", 5, 0, i, i + 7, aggregator ) }

Processor.new("FIX44.bitstamp.xml", [aggregator]).processFields
bitstampCpp = GeneratorCPP.new("FIX", 4.to_s, 4.to_s, 0.to_s, 0.to_s, "../src/quickfix", "bitstamp")
Processor.new("FIX44.bitstamp.xml", [bitstampCpp]).process( aggregator )
