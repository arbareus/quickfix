/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#pragma once

#undef Yield
#undef DUPLICATE
#undef STRICT
#undef DIFFERENCE
#include "Field.h"
#include "DeprecatedFields.h"

namespace QuickFix
{
  
  public __gc class Account : public StringField
  {
  public:
  static const int FIELD = 1;
  Account() : StringField(1) {}
    Account(String* data) : StringField(1, data) {}
    
  };
  
  public __gc class AdvId : public StringField
  {
  public:
  static const int FIELD = 2;
  AdvId() : StringField(2) {}
    AdvId(String* data) : StringField(2, data) {}
    
  };
  
  public __gc class AdvRefID : public StringField
  {
  public:
  static const int FIELD = 3;
  AdvRefID() : StringField(3) {}
    AdvRefID(String* data) : StringField(3, data) {}
    
  };
  
  public __gc class AdvSide : public CharField
  {
  public:
  static const int FIELD = 4;
  static const __wchar_t BUY = 'B';
  static const __wchar_t SELL = 'S';
  static const __wchar_t CROSS = 'X';
  static const __wchar_t TRADE = 'T';
  AdvSide() : CharField(4) {}
    AdvSide(__wchar_t data) : CharField(4, data) {}
    
  };
  
  public __gc class AdvTransType : public StringField
  {
  public:
  static const int FIELD = 5;
  static const String* NEW = "N";
  static const String* CANCEL = "C";
  static const String* REPLACE = "R";
  AdvTransType() : StringField(5) {}
    AdvTransType(String* data) : StringField(5, data) {}
    
  };
  
  public __gc class AvgPx : public DoubleField
  {
  public:
  static const int FIELD = 6;
  AvgPx() : DoubleField(6) {}
    AvgPx(double data) : DoubleField(6, data) {}
    AvgPx(double data, int decimalPadding) : DoubleField(6, data, decimalPadding) {}
    
  };
  
  public __gc class ClOrdID : public StringField
  {
  public:
  static const int FIELD = 11;
  ClOrdID() : StringField(11) {}
    ClOrdID(String* data) : StringField(11, data) {}
    
  };
  
  public __gc class Commission : public DoubleField
  {
  public:
  static const int FIELD = 12;
  Commission() : DoubleField(12) {}
    Commission(double data) : DoubleField(12, data) {}
    Commission(double data, int decimalPadding) : DoubleField(12, data, decimalPadding) {}
    
  };
  
  public __gc class CommType : public CharField
  {
  public:
  static const int FIELD = 13;
  static const __wchar_t PER_UNIT = '1';
  static const __wchar_t PERCENTAGE = '2';
  static const __wchar_t ABSOLUTE = '3';
  static const __wchar_t PERCENTAGE_WAIVED_CASH_DISCOUNT = '4';
  static const __wchar_t PERCENTAGE_WAIVED_ENHANCED_UNITS = '5';
  static const __wchar_t POINTS_PER_BOND_OR_OR_CONTRACT = '6';
  CommType() : CharField(13) {}
    CommType(__wchar_t data) : CharField(13, data) {}
    
  };
  
  public __gc class CumQty : public DoubleField
  {
  public:
  static const int FIELD = 14;
  CumQty() : DoubleField(14) {}
    CumQty(double data) : DoubleField(14, data) {}
    CumQty(double data, int decimalPadding) : DoubleField(14, data, decimalPadding) {}
    
  };
  
  public __gc class Currency : public StringField
  {
  public:
  static const int FIELD = 15;
  Currency() : StringField(15) {}
    Currency(String* data) : StringField(15, data) {}
    
  };
  
  public __gc class ExecID : public StringField
  {
  public:
  static const int FIELD = 17;
  ExecID() : StringField(17) {}
    ExecID(String* data) : StringField(17, data) {}
    
  };
  
  public __gc class ExecInst : public StringField
  {
  public:
  static const int FIELD = 18;
  static const __wchar_t STAY_ON_OFFERSIDE = '0';
  static const __wchar_t NOT_HELD = '1';
  static const __wchar_t WORK = '2';
  static const __wchar_t GO_ALONG = '3';
  static const __wchar_t OVER_THE_DAY = '4';
  static const __wchar_t HELD = '5';
  static const __wchar_t PARTICIPATE_DONT_INITIATE = '6';
  static const __wchar_t STRICT_SCALE = '7';
  static const __wchar_t TRY_TO_SCALE = '8';
  static const __wchar_t STAY_ON_BIDSIDE = '9';
  static const __wchar_t NO_CROSS = 'A';
  static const __wchar_t OK_TO_CROSS = 'B';
  static const __wchar_t CALL_FIRST = 'C';
  static const __wchar_t PERCENT_OF_VOLUME = 'D';
  static const __wchar_t DO_NOT_INCREASE = 'E';
  static const __wchar_t DO_NOT_REDUCE = 'F';
  static const __wchar_t ALL_OR_NONE = 'G';
  static const __wchar_t REINSTATE_ON_SYSTEM_FAILURE = 'H';
  static const __wchar_t INSTITUTIONS_ONLY = 'I';
  static const __wchar_t REINSTATE_ON_TRADING_HALT = 'J';
  static const __wchar_t CANCEL_ON_TRADING_HALT = 'K';
  static const __wchar_t LAST_PEG = 'L';
  static const __wchar_t MID_PRICE = 'M';
  static const __wchar_t NON_NEGOTIABLE = 'N';
  static const __wchar_t OPENING_PEG = 'O';
  static const __wchar_t MARKET_PEG = 'P';
  static const __wchar_t CANCEL_ON_SYSTEM_FAILURE = 'Q';
  static const __wchar_t PRIMARY_PEG = 'R';
  static const __wchar_t SUSPEND = 'S';
  static const __wchar_t FIXED_PEG_TO_LOCAL_BEST_BID_OR_OFFER_AT_TIME_OF_ORDER = 'T';
  static const __wchar_t CUSTOMER_DISPLAY_INSTRUCTION = 'U';
  static const __wchar_t NETTING = 'V';
  static const __wchar_t PEG_TO_VWAP = 'W';
  static const __wchar_t TRADE_ALONG = 'X';
  static const __wchar_t TRY_TO_STOP = 'Y';
  static const __wchar_t CANCEL_IF_NOT_BEST = 'Z';
  static const __wchar_t TRAILING_STOP_PEG = 'a';
  static const __wchar_t STRICT_LIMIT = 'b';
  static const __wchar_t IGNORE_PRICE_VALIDITY_CHECKS = 'c';
  static const __wchar_t PEG_TO_LIMIT_PRICE = 'd';
  static const __wchar_t WORK_TO_TARGET_STRATEGY = 'e';
  static const __wchar_t INTERMARKET_SWEEP = 'f';
  static const __wchar_t EXTERNAL_ROUTING_ALLOWED = 'g';
  static const __wchar_t EXTERNAL_ROUTING_NOT_ALLOWED = 'h';
  static const __wchar_t IMBALANCE_ONLY = 'i';
  static const __wchar_t SINGLE_EXECUTION_REQUESTED_FOR_BLOCK_TRADE = 'j';
  static const __wchar_t BEST_EXECUTION = 'k';
  ExecInst() : StringField(18) {}
    ExecInst(String* data) : StringField(18, data) {}
    
  };
  
  public __gc class ExecRefID : public StringField
  {
  public:
  static const int FIELD = 19;
  ExecRefID() : StringField(19) {}
    ExecRefID(String* data) : StringField(19, data) {}
    
  };
  
  public __gc class ExecTransType : public CharField
  {
  public:
  static const int FIELD = 20;
  static const __wchar_t NEW = '0';
  static const __wchar_t CANCEL = '1';
  static const __wchar_t CORRECT = '2';
  static const __wchar_t STATUS = '3';
  ExecTransType() : CharField(20) {}
    ExecTransType(__wchar_t data) : CharField(20, data) {}
    
  };
  
  public __gc class HandlInst : public CharField
  {
  public:
  static const int FIELD = 21;
  static const __wchar_t AUTOMATED_EXECUTION_ORDER_PRIVATE = '1';
  static const __wchar_t AUTOMATED_EXECUTION_ORDER_PUBLIC = '2';
  static const __wchar_t MANUAL_ORDER = '3';
  HandlInst() : CharField(21) {}
    HandlInst(__wchar_t data) : CharField(21, data) {}
    
  };
  
  public __gc class SecurityIDSource : public StringField
  {
  public:
  static const int FIELD = 22;
  static const String* CUSIP = "1";
  static const String* SEDOL = "2";
  static const String* QUIK = "3";
  static const String* ISIN_NUMBER = "4";
  static const String* RIC_CODE = "5";
  static const String* ISO_CURRENCY_CODE = "6";
  static const String* ISO_COUNTRY_CODE = "7";
  static const String* EXCHANGE_SYMBOL = "8";
  static const String* CONSOLIDATED_TAPE_ASSOCIATION = "9";
  static const String* BLOOMBERG_SYMBOL = "A";
  static const String* WERTPAPIER = "B";
  static const String* DUTCH = "C";
  static const String* VALOREN = "D";
  static const String* SICOVAM = "E";
  static const String* BELGIAN = "F";
  static const String* COMMON = "G";
  static const String* CLEARING_HOUSE_CLEARING_ORGANIZATION = "H";
  static const String* ISDA_FPML_PRODUCT_SPECIFICATION = "I";
  static const String* OPTIONS_PRICE_REPORTING_AUTHORITY = "J";
  static const String* ISDA_FPML_PRODUCT_URL = "K";
  static const String* LETTER_OF_CREDIT = "L";
  SecurityIDSource() : StringField(22) {}
    SecurityIDSource(String* data) : StringField(22, data) {}
    
  };
  
  public __gc class IOIid : public StringField
  {
  public:
  static const int FIELD = 23;
  IOIid() : StringField(23) {}
    IOIid(String* data) : StringField(23, data) {}
    
  };
  
  public __gc class IOIQltyInd : public CharField
  {
  public:
  static const int FIELD = 25;
  static const __wchar_t LOW = 'L';
  static const __wchar_t MEDIUM = 'M';
  static const __wchar_t HIGH = 'H';
  IOIQltyInd() : CharField(25) {}
    IOIQltyInd(__wchar_t data) : CharField(25, data) {}
    
  };
  
  public __gc class IOIRefID : public StringField
  {
  public:
  static const int FIELD = 26;
  IOIRefID() : StringField(26) {}
    IOIRefID(String* data) : StringField(26, data) {}
    
  };
  
  public __gc class IOIQty : public StringField
  {
  public:
  static const int FIELD = 27;
  static const String* _1000000000 = "0";
  static const String* SMALL = "S";
  static const String* MEDIUM = "M";
  static const String* LARGE = "L";
  static const String* UNDISCLOSED_QUANTITY = "U";
  IOIQty() : StringField(27) {}
    IOIQty(String* data) : StringField(27, data) {}
    
  };
  
  public __gc class IOITransType : public CharField
  {
  public:
  static const int FIELD = 28;
  static const __wchar_t NEW = 'N';
  static const __wchar_t CANCEL = 'C';
  static const __wchar_t REPLACE = 'R';
  IOITransType() : CharField(28) {}
    IOITransType(__wchar_t data) : CharField(28, data) {}
    
  };
  
  public __gc class LastCapacity : public CharField
  {
  public:
  static const int FIELD = 29;
  static const __wchar_t AGENT = '1';
  static const __wchar_t CROSS_AS_AGENT = '2';
  static const __wchar_t CROSS_AS_PRINCIPAL = '3';
  static const __wchar_t PRINCIPAL = '4';
  LastCapacity() : CharField(29) {}
    LastCapacity(__wchar_t data) : CharField(29, data) {}
    
  };
  
  public __gc class LastMkt : public StringField
  {
  public:
  static const int FIELD = 30;
  LastMkt() : StringField(30) {}
    LastMkt(String* data) : StringField(30, data) {}
    
  };
  
  public __gc class LastPx : public DoubleField
  {
  public:
  static const int FIELD = 31;
  LastPx() : DoubleField(31) {}
    LastPx(double data) : DoubleField(31, data) {}
    LastPx(double data, int decimalPadding) : DoubleField(31, data, decimalPadding) {}
    
  };
  
  public __gc class LastQty : public DoubleField
  {
  public:
  static const int FIELD = 32;
  LastQty() : DoubleField(32) {}
    LastQty(double data) : DoubleField(32, data) {}
    LastQty(double data, int decimalPadding) : DoubleField(32, data, decimalPadding) {}
    
  };
  
  public __gc class NoLinesOfText : public IntField
  {
  public:
  static const int FIELD = 33;
  NoLinesOfText() : IntField(33) {}
    NoLinesOfText(int data) : IntField(33, data) {}
    
  };
  
  public __gc class OrderID : public StringField
  {
  public:
  static const int FIELD = 37;
  OrderID() : StringField(37) {}
    OrderID(String* data) : StringField(37, data) {}
    
  };
  
  public __gc class OrderQty : public DoubleField
  {
  public:
  static const int FIELD = 38;
  OrderQty() : DoubleField(38) {}
    OrderQty(double data) : DoubleField(38, data) {}
    OrderQty(double data, int decimalPadding) : DoubleField(38, data, decimalPadding) {}
    
  };
  
  public __gc class OrdStatus : public CharField
  {
  public:
  static const int FIELD = 39;
  static const __wchar_t NEW = '0';
  static const __wchar_t PARTIALLY_FILLED = '1';
  static const __wchar_t FILLED = '2';
  static const __wchar_t DONE_FOR_DAY = '3';
  static const __wchar_t CANCELED = '4';
  static const __wchar_t REPLACED = '5';
  static const __wchar_t PENDING_CANCEL = '6';
  static const __wchar_t STOPPED = '7';
  static const __wchar_t REJECTED = '8';
  static const __wchar_t SUSPENDED = '9';
  static const __wchar_t PENDING_NEW = 'A';
  static const __wchar_t CALCULATED = 'B';
  static const __wchar_t EXPIRED = 'C';
  static const __wchar_t ACCEPTED_FOR_BIDDING = 'D';
  static const __wchar_t PENDING_REPLACE = 'E';
  OrdStatus() : CharField(39) {}
    OrdStatus(__wchar_t data) : CharField(39, data) {}
    
  };
  
  public __gc class OrdType : public CharField
  {
  public:
  static const int FIELD = 40;
  static const __wchar_t MARKET = '1';
  static const __wchar_t LIMIT = '2';
  static const __wchar_t STOP = '3';
  static const __wchar_t STOP_LIMIT = '4';
  static const __wchar_t MARKET_ON_CLOSE = '5';
  static const __wchar_t WITH_OR_WITHOUT = '6';
  static const __wchar_t LIMIT_OR_BETTER = '7';
  static const __wchar_t LIMIT_WITH_OR_WITHOUT = '8';
  static const __wchar_t ON_BASIS = '9';
  static const __wchar_t ON_CLOSE = 'A';
  static const __wchar_t LIMIT_ON_CLOSE = 'B';
  static const __wchar_t FOREX_MARKET = 'C';
  static const __wchar_t PREVIOUSLY_QUOTED = 'D';
  static const __wchar_t PREVIOUSLY_INDICATED = 'E';
  static const __wchar_t FOREX_LIMIT = 'F';
  static const __wchar_t FOREX_SWAP = 'G';
  static const __wchar_t FOREX_PREVIOUSLY_QUOTED = 'H';
  static const __wchar_t FUNARI = 'I';
  static const __wchar_t MARKET_IF_TOUCHED = 'J';
  static const __wchar_t MARKET_WITH_LEFTOVER_AS_LIMIT = 'K';
  static const __wchar_t PREVIOUS_FUND_VALUATION_POINT = 'L';
  static const __wchar_t NEXT_FUND_VALUATION_POINT = 'M';
  static const __wchar_t PEGGED = 'P';
  static const __wchar_t COUNTER_ORDER_SELECTION = 'Q';
  OrdType() : CharField(40) {}
    OrdType(__wchar_t data) : CharField(40, data) {}
    
  };
  
  public __gc class OrigClOrdID : public StringField
  {
  public:
  static const int FIELD = 41;
  OrigClOrdID() : StringField(41) {}
    OrigClOrdID(String* data) : StringField(41, data) {}
    
  };
  
  public __gc class OrigTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 42;
  OrigTime() : UtcTimeStampField(42) {}
    OrigTime(DateTime data) : UtcTimeStampField(42, data) {}
    OrigTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(42, data, showMilliseconds) {}
    
  };
  
  public __gc class Price : public DoubleField
  {
  public:
  static const int FIELD = 44;
  Price() : DoubleField(44) {}
    Price(double data) : DoubleField(44, data) {}
    Price(double data, int decimalPadding) : DoubleField(44, data, decimalPadding) {}
    
  };
  
  public __gc class SecurityID : public StringField
  {
  public:
  static const int FIELD = 48;
  SecurityID() : StringField(48) {}
    SecurityID(String* data) : StringField(48, data) {}
    
  };
  
  public __gc class Quantity : public DoubleField
  {
  public:
  static const int FIELD = 53;
  Quantity() : DoubleField(53) {}
    Quantity(double data) : DoubleField(53, data) {}
    Quantity(double data, int decimalPadding) : DoubleField(53, data, decimalPadding) {}
    
  };
  
  public __gc class Side : public CharField
  {
  public:
  static const int FIELD = 54;
  static const __wchar_t BUY = '1';
  static const __wchar_t SELL = '2';
  static const __wchar_t BUY_MINUS = '3';
  static const __wchar_t SELL_PLUS = '4';
  static const __wchar_t SELL_SHORT = '5';
  static const __wchar_t SELL_SHORT_EXEMPT = '6';
  static const __wchar_t UNDISCLOSED = '7';
  static const __wchar_t CROSS = '8';
  static const __wchar_t CROSS_SHORT = '9';
  static const __wchar_t CROSS_SHORT_EXEMPT = 'A';
  static const __wchar_t AS_DEFINED = 'B';
  static const __wchar_t OPPOSITE = 'C';
  static const __wchar_t SUBSCRIBE = 'D';
  static const __wchar_t REDEEM = 'E';
  static const __wchar_t LEND = 'F';
  static const __wchar_t BORROW = 'G';
  Side() : CharField(54) {}
    Side(__wchar_t data) : CharField(54, data) {}
    
  };
  
  public __gc class Symbol : public StringField
  {
  public:
  static const int FIELD = 55;
  Symbol() : StringField(55) {}
    Symbol(String* data) : StringField(55, data) {}
    
  };
  
  public __gc class TimeInForce : public CharField
  {
  public:
  static const int FIELD = 59;
  static const __wchar_t DAY = '0';
  static const __wchar_t GOOD_TILL_CANCEL = '1';
  static const __wchar_t AT_THE_OPENING = '2';
  static const __wchar_t IMMEDIATE_OR_CANCEL = '3';
  static const __wchar_t FILL_OR_KILL = '4';
  static const __wchar_t GOOD_TILL_CROSSING = '5';
  static const __wchar_t GOOD_TILL_DATE = '6';
  static const __wchar_t AT_THE_CLOSE = '7';
  TimeInForce() : CharField(59) {}
    TimeInForce(__wchar_t data) : CharField(59, data) {}
    
  };
  
  public __gc class TransactTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 60;
  TransactTime() : UtcTimeStampField(60) {}
    TransactTime(DateTime data) : UtcTimeStampField(60, data) {}
    TransactTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(60, data, showMilliseconds) {}
    
  };
  
  public __gc class Urgency : public CharField
  {
  public:
  static const int FIELD = 61;
  static const __wchar_t NORMAL = '0';
  static const __wchar_t FLASH = '1';
  static const __wchar_t BACKGROUND = '2';
  Urgency() : CharField(61) {}
    Urgency(__wchar_t data) : CharField(61, data) {}
    
  };
  
  public __gc class ValidUntilTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 62;
  ValidUntilTime() : UtcTimeStampField(62) {}
    ValidUntilTime(DateTime data) : UtcTimeStampField(62, data) {}
    ValidUntilTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(62, data, showMilliseconds) {}
    
  };
  
  public __gc class SettlType : public StringField
  {
  public:
  static const int FIELD = 63;
  static const String* REGULAR = "0";
  static const String* CASH = "1";
  static const String* NEXT_DAY = "2";
  static const String* T_PLUS_2 = "3";
  static const String* T_PLUS_3 = "4";
  static const String* T_PLUS_4 = "5";
  static const String* FUTURE = "6";
  static const String* WHEN_AND_IF_ISSUED = "7";
  static const String* SELLERS_OPTION = "8";
  static const String* T_PLUS_5 = "9";
  static const String* FX_SPOT_NEXT_SETTLEMENT = "C";
  static const String* BROKEN_DATE = "B";
  SettlType() : StringField(63) {}
    SettlType(String* data) : StringField(63, data) {}
    
  };
  
  public __gc class SettlDate : public StringField
  {
  public:
  static const int FIELD = 64;
  SettlDate() : StringField(64) {}
    SettlDate(String* data) : StringField(64, data) {}
    
  };
  
  public __gc class SymbolSfx : public StringField
  {
  public:
  static const int FIELD = 65;
  static const String* WHEN_ISSUED = "WI";
  static const String* A_EUCP_WITH_LUMP_SUM_INTEREST = "CD";
  SymbolSfx() : StringField(65) {}
    SymbolSfx(String* data) : StringField(65, data) {}
    
  };
  
  public __gc class ListID : public StringField
  {
  public:
  static const int FIELD = 66;
  ListID() : StringField(66) {}
    ListID(String* data) : StringField(66, data) {}
    
  };
  
  public __gc class ListSeqNo : public IntField
  {
  public:
  static const int FIELD = 67;
  ListSeqNo() : IntField(67) {}
    ListSeqNo(int data) : IntField(67, data) {}
    
  };
  
  public __gc class TotNoOrders : public IntField
  {
  public:
  static const int FIELD = 68;
  TotNoOrders() : IntField(68) {}
    TotNoOrders(int data) : IntField(68, data) {}
    
  };
  
  public __gc class ListNoOrds : public IntField
  {
  public:
	static int FIELD = 68;
    ListNoOrds() : IntField(68) {}
    ListNoOrds(int data) : IntField(68, data) {}
  };
  
  public __gc class ListExecInst : public StringField
  {
  public:
  static const int FIELD = 69;
  ListExecInst() : StringField(69) {}
    ListExecInst(String* data) : StringField(69, data) {}
    
  };
  
  public __gc class AllocID : public StringField
  {
  public:
  static const int FIELD = 70;
  AllocID() : StringField(70) {}
    AllocID(String* data) : StringField(70, data) {}
    
  };
  
  public __gc class AllocTransType : public CharField
  {
  public:
  static const int FIELD = 71;
  static const __wchar_t NEW = '0';
  static const __wchar_t REPLACE = '1';
  static const __wchar_t CANCEL = '2';
  static const __wchar_t PRELIMINARY = '3';
  static const __wchar_t CALCULATED = '4';
  static const __wchar_t CALCULATED_WITHOUT_PRELIMINARY = '5';
  static const __wchar_t REVERSAL = '6';
  AllocTransType() : CharField(71) {}
    AllocTransType(__wchar_t data) : CharField(71, data) {}
    
  };
  
  public __gc class RefAllocID : public StringField
  {
  public:
  static const int FIELD = 72;
  RefAllocID() : StringField(72) {}
    RefAllocID(String* data) : StringField(72, data) {}
    
  };
  
  public __gc class NoOrders : public IntField
  {
  public:
  static const int FIELD = 73;
  NoOrders() : IntField(73) {}
    NoOrders(int data) : IntField(73, data) {}
    
  };
  
  public __gc class AvgPxPrecision : public IntField
  {
  public:
  static const int FIELD = 74;
  AvgPxPrecision() : IntField(74) {}
    AvgPxPrecision(int data) : IntField(74, data) {}
    
  };
  
  public __gc class TradeDate : public StringField
  {
  public:
  static const int FIELD = 75;
  TradeDate() : StringField(75) {}
    TradeDate(String* data) : StringField(75, data) {}
    
  };
  
  public __gc class ExecBroker : public StringField
  {
  public:
  static const int FIELD = 76;
  ExecBroker() : StringField(76) {}
    ExecBroker(String* data) : StringField(76, data) {}
    
  };
  
  public __gc class PositionEffect : public CharField
  {
  public:
  static const int FIELD = 77;
  static const __wchar_t OPEN = 'O';
  static const __wchar_t CLOSE = 'C';
  static const __wchar_t ROLLED = 'R';
  static const __wchar_t FIFO = 'F';
  PositionEffect() : CharField(77) {}
    PositionEffect(__wchar_t data) : CharField(77, data) {}
    
  };
  
  public __gc class NoAllocs : public IntField
  {
  public:
  static const int FIELD = 78;
  NoAllocs() : IntField(78) {}
    NoAllocs(int data) : IntField(78, data) {}
    
  };
  
  public __gc class AllocAccount : public StringField
  {
  public:
  static const int FIELD = 79;
  AllocAccount() : StringField(79) {}
    AllocAccount(String* data) : StringField(79, data) {}
    
  };
  
  public __gc class AllocQty : public DoubleField
  {
  public:
  static const int FIELD = 80;
  AllocQty() : DoubleField(80) {}
    AllocQty(double data) : DoubleField(80, data) {}
    AllocQty(double data, int decimalPadding) : DoubleField(80, data, decimalPadding) {}
    
  };
  
  public __gc class ProcessCode : public CharField
  {
  public:
  static const int FIELD = 81;
  static const __wchar_t REGULAR = '0';
  static const __wchar_t SOFT_DOLLAR = '1';
  static const __wchar_t STEP_IN = '2';
  static const __wchar_t STEP_OUT = '3';
  static const __wchar_t SOFT_DOLLAR_STEP_IN = '4';
  static const __wchar_t SOFT_DOLLAR_STEP_OUT = '5';
  static const __wchar_t PLAN_SPONSOR = '6';
  ProcessCode() : CharField(81) {}
    ProcessCode(__wchar_t data) : CharField(81, data) {}
    
  };
  
  public __gc class NoRpts : public IntField
  {
  public:
  static const int FIELD = 82;
  NoRpts() : IntField(82) {}
    NoRpts(int data) : IntField(82, data) {}
    
  };
  
  public __gc class RptSeq : public IntField
  {
  public:
  static const int FIELD = 83;
  RptSeq() : IntField(83) {}
    RptSeq(int data) : IntField(83, data) {}
    
  };
  
  public __gc class CxlQty : public DoubleField
  {
  public:
  static const int FIELD = 84;
  CxlQty() : DoubleField(84) {}
    CxlQty(double data) : DoubleField(84, data) {}
    CxlQty(double data, int decimalPadding) : DoubleField(84, data, decimalPadding) {}
    
  };
  
  public __gc class NoDlvyInst : public IntField
  {
  public:
  static const int FIELD = 85;
  NoDlvyInst() : IntField(85) {}
    NoDlvyInst(int data) : IntField(85, data) {}
    
  };
  
  public __gc class DlvyInst : public StringField
  {
  public:
  static const int FIELD = 86;
  DlvyInst() : StringField(86) {}
    DlvyInst(String* data) : StringField(86, data) {}
    
  };
  
  public __gc class AllocStatus : public IntField
  {
  public:
  static const int FIELD = 87;
  static const int ACCEPTED = 0;
  static const int BLOCK_LEVEL_REJECT = 1;
  static const int ACCOUNT_LEVEL_REJECT = 2;
  static const int RECEIVED = 3;
  static const int INCOMPLETE = 4;
  static const int REJECTED_BY_INTERMEDIARY = 5;
  static const int ALLOCATION_PENDING = 6;
  static const int REVERSED = 7;
  AllocStatus() : IntField(87) {}
    AllocStatus(int data) : IntField(87, data) {}
    
  };
  
  public __gc class AllocRejCode : public IntField
  {
  public:
  static const int FIELD = 88;
  static const int UNKNOWN_ACCOUNT = 0;
  static const int INCORRECT_QUANTITY = 1;
  static const int INCORRECT_AVERAGE_PRICE = 2;
  static const int UNKNOWN_EXECUTING_BROKER_MNEMONIC = 3;
  static const int COMMISSION_DIFFERENCE = 4;
  static const int UNKNOWN_ORDERID = 5;
  static const int UNKNOWN_LISTID = 6;
  static const int OTHER = 7;
  static const int INCORRECT_ALLOCATED_QUANTITY = 8;
  static const int CALCULATION_DIFFERENCE = 9;
  static const int UNKNOWN_OR_STALE_EXEC_ID = 10;
  static const int MISMATCHED_DATA_VALUE = 11;
  static const int UNKNOWN_CLORDID = 12;
  static const int WAREHOUSE_REQUEST_REJECTED = 13;
  AllocRejCode() : IntField(88) {}
    AllocRejCode(int data) : IntField(88, data) {}
    
  };
  
  public __gc class BrokerOfCredit : public StringField
  {
  public:
  static const int FIELD = 92;
  BrokerOfCredit() : StringField(92) {}
    BrokerOfCredit(String* data) : StringField(92, data) {}
    
  };
  
  public __gc class EmailType : public CharField
  {
  public:
  static const int FIELD = 94;
  static const __wchar_t NEW = '0';
  static const __wchar_t REPLY = '1';
  static const __wchar_t ADMIN_REPLY = '2';
  EmailType() : CharField(94) {}
    EmailType(__wchar_t data) : CharField(94, data) {}
    
  };
  
  public __gc class StopPx : public DoubleField
  {
  public:
  static const int FIELD = 99;
  StopPx() : DoubleField(99) {}
    StopPx(double data) : DoubleField(99, data) {}
    StopPx(double data, int decimalPadding) : DoubleField(99, data, decimalPadding) {}
    
  };
  
  public __gc class ExDestination : public StringField
  {
  public:
  static const int FIELD = 100;
  ExDestination() : StringField(100) {}
    ExDestination(String* data) : StringField(100, data) {}
    
  };
  
  public __gc class CxlRejReason : public IntField
  {
  public:
  static const int FIELD = 102;
  static const int TOO_LATE_TO_CANCEL = 0;
  static const int UNKNOWN_ORDER = 1;
  static const int BROKER_EXCHANGE_OPTION = 2;
  static const int ORDER_ALREADY_IN_PENDING_CANCEL_OR_PENDING_REPLACE_STATUS = 3;
  static const int UNABLE_TO_PROCESS_ORDER_MASS_CANCEL_REQUEST = 4;
  static const int ORIGORDMODTIME_DID_NOT_MATCH_LAST_TRANSACTTIME_OF_ORDER = 5;
  static const int DUPLICATE_CLORDID_RECEIVED = 6;
  static const int INVALID_PRICE_INCREMENT = 18;
  static const int OTHER = 99;
  CxlRejReason() : IntField(102) {}
    CxlRejReason(int data) : IntField(102, data) {}
    
  };
  
  public __gc class OrdRejReason : public IntField
  {
  public:
  static const int FIELD = 103;
  static const int BROKER_EXCHANGE_OPTION = 0;
  static const int UNKNOWN_SYMBOL = 1;
  static const int EXCHANGE_CLOSED = 2;
  static const int ORDER_EXCEEDS_LIMIT = 3;
  static const int TOO_LATE_TO_ENTER = 4;
  static const int UNKNOWN_ORDER = 5;
  static const int DUPLICATE_ORDER = 6;
  static const int DUPLICATE_OF_A_VERBALLY_COMMUNICATED_ORDER = 7;
  static const int STALE_ORDER = 8;
  static const int TRADE_ALONG_REQUIRED = 9;
  static const int INVALID_INVESTOR_ID = 10;
  static const int UNSUPPORTED_ORDER_CHARACTERISTIC = 11;
  static const int SURVEILLENCE_OPTION = 12;
  static const int INCORRECT_QUANTITY = 13;
  static const int INCORRECT_ALLOCATED_QUANTITY = 14;
  static const int UNKNOWN_ACCOUNT = 15;
  static const int INVALID_PRICE_INCREMENT = 18;
  static const int OTHER = 99;
  OrdRejReason() : IntField(103) {}
    OrdRejReason(int data) : IntField(103, data) {}
    
  };
  
  public __gc class IOIQualifier : public CharField
  {
  public:
  static const int FIELD = 104;
  static const __wchar_t ALL_OR_NONE = 'A';
  static const __wchar_t MARKET_ON_CLOSE = 'B';
  static const __wchar_t AT_THE_CLOSE = 'C';
  static const __wchar_t VWAP = 'D';
  static const __wchar_t IN_TOUCH_WITH = 'I';
  static const __wchar_t LIMIT = 'L';
  static const __wchar_t MORE_BEHIND = 'M';
  static const __wchar_t AT_THE_OPEN = 'O';
  static const __wchar_t TAKING_A_POSITION = 'P';
  static const __wchar_t AT_THE_MARKET = 'Q';
  static const __wchar_t READY_TO_TRADE = 'R';
  static const __wchar_t PORTFOLIO_SHOWN = 'S';
  static const __wchar_t THROUGH_THE_DAY = 'T';
  static const __wchar_t VERSUS = 'V';
  static const __wchar_t INDICATION_WORKING_AWAY = 'W';
  static const __wchar_t CROSSING_OPPORTUNITY = 'X';
  static const __wchar_t AT_THE_MIDPOINT = 'Y';
  static const __wchar_t PRE_OPEN = 'Z';
  IOIQualifier() : CharField(104) {}
    IOIQualifier(__wchar_t data) : CharField(104, data) {}
    
  };
  
  public __gc class WaveNo : public StringField
  {
  public:
  static const int FIELD = 105;
  WaveNo() : StringField(105) {}
    WaveNo(String* data) : StringField(105, data) {}
    
  };
  
  public __gc class Issuer : public StringField
  {
  public:
  static const int FIELD = 106;
  Issuer() : StringField(106) {}
    Issuer(String* data) : StringField(106, data) {}
    
  };
  
  public __gc class SecurityDesc : public StringField
  {
  public:
  static const int FIELD = 107;
  SecurityDesc() : StringField(107) {}
    SecurityDesc(String* data) : StringField(107, data) {}
    
  };
  
  public __gc class ClientID : public StringField
  {
  public:
  static const int FIELD = 109;
  ClientID() : StringField(109) {}
    ClientID(String* data) : StringField(109, data) {}
    
  };
  
  public __gc class MinQty : public DoubleField
  {
  public:
  static const int FIELD = 110;
  MinQty() : DoubleField(110) {}
    MinQty(double data) : DoubleField(110, data) {}
    MinQty(double data, int decimalPadding) : DoubleField(110, data, decimalPadding) {}
    
  };
  
  public __gc class MaxFloor : public DoubleField
  {
  public:
  static const int FIELD = 111;
  MaxFloor() : DoubleField(111) {}
    MaxFloor(double data) : DoubleField(111, data) {}
    MaxFloor(double data, int decimalPadding) : DoubleField(111, data, decimalPadding) {}
    
  };
  
  public __gc class ReportToExch : public BooleanField
  {
  public:
  static const int FIELD = 113;
  ReportToExch() : BooleanField(113) {}
    ReportToExch(bool data) : BooleanField(113, data) {}
    
  };
  
  public __gc class LocateReqd : public BooleanField
  {
  public:
  static const int FIELD = 114;
  LocateReqd() : BooleanField(114) {}
    LocateReqd(bool data) : BooleanField(114, data) {}
    
  };
  
  public __gc class QuoteID : public StringField
  {
  public:
  static const int FIELD = 117;
  QuoteID() : StringField(117) {}
    QuoteID(String* data) : StringField(117, data) {}
    
  };
  
  public __gc class NetMoney : public DoubleField
  {
  public:
  static const int FIELD = 118;
  NetMoney() : DoubleField(118) {}
    NetMoney(double data) : DoubleField(118, data) {}
    NetMoney(double data, int decimalPadding) : DoubleField(118, data, decimalPadding) {}
    
  };
  
  public __gc class SettlCurrAmt : public DoubleField
  {
  public:
  static const int FIELD = 119;
  SettlCurrAmt() : DoubleField(119) {}
    SettlCurrAmt(double data) : DoubleField(119, data) {}
    SettlCurrAmt(double data, int decimalPadding) : DoubleField(119, data, decimalPadding) {}
    
  };
  
  public __gc class SettlCurrency : public StringField
  {
  public:
  static const int FIELD = 120;
  SettlCurrency() : StringField(120) {}
    SettlCurrency(String* data) : StringField(120, data) {}
    
  };
  
  public __gc class ForexReq : public BooleanField
  {
  public:
  static const int FIELD = 121;
  ForexReq() : BooleanField(121) {}
    ForexReq(bool data) : BooleanField(121, data) {}
    
  };
  
  public __gc class NoExecs : public IntField
  {
  public:
  static const int FIELD = 124;
  NoExecs() : IntField(124) {}
    NoExecs(int data) : IntField(124, data) {}
    
  };
  
  public __gc class CxlType : public CharField
  {
  public:
  static const int FIELD = 125;
  static const __wchar_t PARTIAL_CANCEL = 'P';
  static const __wchar_t FULL_REMAINING_QUANTITY = 'F';
  CxlType() : CharField(125) {}
    CxlType(__wchar_t data) : CharField(125, data) {}
    
  };
  
  public __gc class ExpireTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 126;
  ExpireTime() : UtcTimeStampField(126) {}
    ExpireTime(DateTime data) : UtcTimeStampField(126, data) {}
    ExpireTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(126, data, showMilliseconds) {}
    
  };
  
  public __gc class DKReason : public CharField
  {
  public:
  static const int FIELD = 127;
  static const __wchar_t UNKNOWN_SYMBOL = 'A';
  static const __wchar_t WRONG_SIDE = 'B';
  static const __wchar_t QUANTITY_EXCEEDS_ORDER = 'C';
  static const __wchar_t NO_MATCHING_ORDER = 'D';
  static const __wchar_t PRICE_EXCEEDS_LIMIT = 'E';
  static const __wchar_t CALCULATION_DIFFERENCE = 'F';
  static const __wchar_t OTHER = 'Z';
  DKReason() : CharField(127) {}
    DKReason(__wchar_t data) : CharField(127, data) {}
    
  };
  
  public __gc class IOINaturalFlag : public BooleanField
  {
  public:
  static const int FIELD = 130;
  IOINaturalFlag() : BooleanField(130) {}
    IOINaturalFlag(bool data) : BooleanField(130, data) {}
    
  };
  
  public __gc class QuoteReqID : public StringField
  {
  public:
  static const int FIELD = 131;
  QuoteReqID() : StringField(131) {}
    QuoteReqID(String* data) : StringField(131, data) {}
    
  };
  
  public __gc class BidPx : public DoubleField
  {
  public:
  static const int FIELD = 132;
  BidPx() : DoubleField(132) {}
    BidPx(double data) : DoubleField(132, data) {}
    BidPx(double data, int decimalPadding) : DoubleField(132, data, decimalPadding) {}
    
  };
  
  public __gc class OfferPx : public DoubleField
  {
  public:
  static const int FIELD = 133;
  OfferPx() : DoubleField(133) {}
    OfferPx(double data) : DoubleField(133, data) {}
    OfferPx(double data, int decimalPadding) : DoubleField(133, data, decimalPadding) {}
    
  };
  
  public __gc class BidSize : public DoubleField
  {
  public:
  static const int FIELD = 134;
  BidSize() : DoubleField(134) {}
    BidSize(double data) : DoubleField(134, data) {}
    BidSize(double data, int decimalPadding) : DoubleField(134, data, decimalPadding) {}
    
  };
  
  public __gc class OfferSize : public DoubleField
  {
  public:
  static const int FIELD = 135;
  OfferSize() : DoubleField(135) {}
    OfferSize(double data) : DoubleField(135, data) {}
    OfferSize(double data, int decimalPadding) : DoubleField(135, data, decimalPadding) {}
    
  };
  
  public __gc class NoMiscFees : public IntField
  {
  public:
  static const int FIELD = 136;
  NoMiscFees() : IntField(136) {}
    NoMiscFees(int data) : IntField(136, data) {}
    
  };
  
  public __gc class MiscFeeAmt : public DoubleField
  {
  public:
  static const int FIELD = 137;
  MiscFeeAmt() : DoubleField(137) {}
    MiscFeeAmt(double data) : DoubleField(137, data) {}
    MiscFeeAmt(double data, int decimalPadding) : DoubleField(137, data, decimalPadding) {}
    
  };
  
  public __gc class MiscFeeCurr : public StringField
  {
  public:
  static const int FIELD = 138;
  MiscFeeCurr() : StringField(138) {}
    MiscFeeCurr(String* data) : StringField(138, data) {}
    
  };
  
  public __gc class MiscFeeType : public StringField
  {
  public:
  static const int FIELD = 139;
  static const String* REGULATORY = "1";
  static const String* TAX = "2";
  static const String* LOCAL_COMMISSION = "3";
  static const String* EXCHANGE_FEES = "4";
  static const String* STAMP = "5";
  static const String* LEVY = "6";
  static const String* OTHER = "7";
  static const String* MARKUP = "8";
  static const String* CONSUMPTION_TAX = "9";
  static const String* PER_TRANSACTION = "10";
  static const String* CONVERSION = "11";
  static const String* AGENT = "12";
  static const String* TRANSFER_FEE = "13";
  static const String* SECURITY_LENDING = "14";
  MiscFeeType() : StringField(139) {}
    MiscFeeType(String* data) : StringField(139, data) {}
    
  };
  
  public __gc class PrevClosePx : public DoubleField
  {
  public:
  static const int FIELD = 140;
  PrevClosePx() : DoubleField(140) {}
    PrevClosePx(double data) : DoubleField(140, data) {}
    PrevClosePx(double data, int decimalPadding) : DoubleField(140, data, decimalPadding) {}
    
  };
  
  public __gc class NoRelatedSym : public IntField
  {
  public:
  static const int FIELD = 146;
  NoRelatedSym() : IntField(146) {}
    NoRelatedSym(int data) : IntField(146, data) {}
    
  };
  
  public __gc class Subject : public StringField
  {
  public:
  static const int FIELD = 147;
  Subject() : StringField(147) {}
    Subject(String* data) : StringField(147, data) {}
    
  };
  
  public __gc class Headline : public StringField
  {
  public:
  static const int FIELD = 148;
  Headline() : StringField(148) {}
    Headline(String* data) : StringField(148, data) {}
    
  };
  
  public __gc class URLLink : public StringField
  {
  public:
  static const int FIELD = 149;
  URLLink() : StringField(149) {}
    URLLink(String* data) : StringField(149, data) {}
    
  };
  
  public __gc class ExecType : public CharField
  {
  public:
  static const int FIELD = 150;
  static const __wchar_t NEW = '0';
  static const __wchar_t PARTIAL_FILL = '1';
  static const __wchar_t FILL = '2';
  static const __wchar_t DONE_FOR_DAY = '3';
  static const __wchar_t CANCELED = '4';
  static const __wchar_t REPLACE = '5';
  static const __wchar_t PENDING_CANCEL = '6';
  static const __wchar_t STOPPED = '7';
  static const __wchar_t REJECTED = '8';
  static const __wchar_t SUSPENDED = '9';
  static const __wchar_t PENDING_NEW = 'A';
  static const __wchar_t CALCULATED = 'B';
  static const __wchar_t EXPIRED = 'C';
  static const __wchar_t RESTATED = 'D';
  static const __wchar_t PENDING_REPLACE = 'E';
  static const __wchar_t TRADE = 'F';
  static const __wchar_t TRADE_CORRECT = 'G';
  static const __wchar_t TRADE_CANCEL = 'H';
  static const __wchar_t ORDER_STATUS = 'I';
  static const __wchar_t TRADE_IN_A_CLEARING_HOLD = 'J';
  static const __wchar_t TRADE_HAS_BEEN_RELEASED_TO_CLEARING = 'K';
  static const __wchar_t TRIGGERED_OR_ACTIVATED_BY_SYSTEM = 'L';
  ExecType() : CharField(150) {}
    ExecType(__wchar_t data) : CharField(150, data) {}
    
  };
  
  public __gc class LeavesQty : public DoubleField
  {
  public:
  static const int FIELD = 151;
  LeavesQty() : DoubleField(151) {}
    LeavesQty(double data) : DoubleField(151, data) {}
    LeavesQty(double data, int decimalPadding) : DoubleField(151, data, decimalPadding) {}
    
  };
  
  public __gc class CashOrderQty : public DoubleField
  {
  public:
  static const int FIELD = 152;
  CashOrderQty() : DoubleField(152) {}
    CashOrderQty(double data) : DoubleField(152, data) {}
    CashOrderQty(double data, int decimalPadding) : DoubleField(152, data, decimalPadding) {}
    
  };
  
  public __gc class AllocAvgPx : public DoubleField
  {
  public:
  static const int FIELD = 153;
  AllocAvgPx() : DoubleField(153) {}
    AllocAvgPx(double data) : DoubleField(153, data) {}
    AllocAvgPx(double data, int decimalPadding) : DoubleField(153, data, decimalPadding) {}
    
  };
  
  public __gc class AllocNetMoney : public DoubleField
  {
  public:
  static const int FIELD = 154;
  AllocNetMoney() : DoubleField(154) {}
    AllocNetMoney(double data) : DoubleField(154, data) {}
    AllocNetMoney(double data, int decimalPadding) : DoubleField(154, data, decimalPadding) {}
    
  };
  
  public __gc class SettlCurrFxRate : public DoubleField
  {
  public:
  static const int FIELD = 155;
  SettlCurrFxRate() : DoubleField(155) {}
    SettlCurrFxRate(double data) : DoubleField(155, data) {}
    SettlCurrFxRate(double data, int decimalPadding) : DoubleField(155, data, decimalPadding) {}
    
  };
  
  public __gc class SettlCurrFxRateCalc : public CharField
  {
  public:
  static const int FIELD = 156;
  static const __wchar_t MULTIPLY = 'M';
  static const __wchar_t DIVIDE = 'D';
  SettlCurrFxRateCalc() : CharField(156) {}
    SettlCurrFxRateCalc(__wchar_t data) : CharField(156, data) {}
    
  };
  
  public __gc class NumDaysInterest : public IntField
  {
  public:
  static const int FIELD = 157;
  NumDaysInterest() : IntField(157) {}
    NumDaysInterest(int data) : IntField(157, data) {}
    
  };
  
  public __gc class AccruedInterestRate : public DoubleField
  {
  public:
  static const int FIELD = 158;
  AccruedInterestRate() : DoubleField(158) {}
    AccruedInterestRate(double data) : DoubleField(158, data) {}
    AccruedInterestRate(double data, int decimalPadding) : DoubleField(158, data, decimalPadding) {}
    
  };
  
  public __gc class AccruedInterestAmt : public DoubleField
  {
  public:
  static const int FIELD = 159;
  AccruedInterestAmt() : DoubleField(159) {}
    AccruedInterestAmt(double data) : DoubleField(159, data) {}
    AccruedInterestAmt(double data, int decimalPadding) : DoubleField(159, data, decimalPadding) {}
    
  };
  
  public __gc class SettlInstMode : public CharField
  {
  public:
  static const int FIELD = 160;
  static const __wchar_t DEFAULT = '0';
  static const __wchar_t STANDING_INSTRUCTIONS_PROVIDED = '1';
  static const __wchar_t SPECIFIC_ALLOCATION_ACCOUNT_OVERRIDING = '2';
  static const __wchar_t SPECIFIC_ALLOCATION_ACCOUNT_STANDING = '3';
  static const __wchar_t SPECIFIC_ORDER_FOR_A_SINGLE_ACCOUNT = '4';
  static const __wchar_t REQUEST_REJECT = '5';
  SettlInstMode() : CharField(160) {}
    SettlInstMode(__wchar_t data) : CharField(160, data) {}
    
  };
  
  public __gc class AllocText : public StringField
  {
  public:
  static const int FIELD = 161;
  AllocText() : StringField(161) {}
    AllocText(String* data) : StringField(161, data) {}
    
  };
  
  public __gc class SettlInstID : public StringField
  {
  public:
  static const int FIELD = 162;
  SettlInstID() : StringField(162) {}
    SettlInstID(String* data) : StringField(162, data) {}
    
  };
  
  public __gc class SettlInstTransType : public CharField
  {
  public:
  static const int FIELD = 163;
  static const __wchar_t NEW = 'N';
  static const __wchar_t CANCEL = 'C';
  static const __wchar_t REPLACE = 'R';
  static const __wchar_t RESTATE = 'T';
  SettlInstTransType() : CharField(163) {}
    SettlInstTransType(__wchar_t data) : CharField(163, data) {}
    
  };
  
  public __gc class EmailThreadID : public StringField
  {
  public:
  static const int FIELD = 164;
  EmailThreadID() : StringField(164) {}
    EmailThreadID(String* data) : StringField(164, data) {}
    
  };
  
  public __gc class SettlInstSource : public CharField
  {
  public:
  static const int FIELD = 165;
  static const __wchar_t BROKERS_INSTRUCTIONS = '1';
  static const __wchar_t INSTITUTIONS_INSTRUCTIONS = '2';
  static const __wchar_t INVESTOR = '3';
  SettlInstSource() : CharField(165) {}
    SettlInstSource(__wchar_t data) : CharField(165, data) {}
    
  };
  
  public __gc class SettlLocation : public StringField
  {
  public:
  static const int FIELD = 166;
  static const String* CEDEL = "CED";
  static const String* DEPOSITORY_TRUST_COMPANY = "DTC";
  static const String* EUROCLEAR = "EUR";
  static const String* FEDERAL_BOOK_ENTRY = "FED";
  static const String* LOCAL_MARKET_SETTLE_LOCATION = "ISO";
  static const String* PHYSICAL = "PNY";
  static const String* PARTICIPANT_TRUST_COMPANY = "PTC";
  SettlLocation() : StringField(166) {}
    SettlLocation(String* data) : StringField(166, data) {}
    
  };
  
  public __gc class SecurityType : public StringField
  {
  public:
  static const int FIELD = 167;
  static const String* WILDCARD = "?";
  static const String* ASSET_BACKED_SECURITIES = "ABS";
  static const String* AMENDED_AND_RESTATED = "AMENDED";
  static const String* OTHER_ANTICIPATION_NOTES = "AN";
  static const String* BANKERS_ACCEPTANCE = "BA";
  static const String* BANK_NOTES = "BN";
  static const String* BILL_OF_EXCHANGES = "BOX";
  static const String* BRADY_BOND = "BRADY";
  static const String* BRIDGE_LOAN = "BRIDGE";
  static const String* BUY_SELLBACK = "BUYSELL";
  static const String* CONVERTIBLE_BOND = "CB";
  static const String* CERTIFICATE_OF_DEPOSIT = "CD";
  static const String* CALL_LOANS = "CL";
  static const String* CORP_MORTGAGE_BACKED_SECURITIES = "CMBS";
  static const String* COLLATERALIZED_MORTGAGE_OBLIGATION = "CMO";
  static const String* CERTIFICATE_OF_OBLIGATION = "COFO";
  static const String* CERTIFICATE_OF_PARTICIPATION = "COFP";
  static const String* CORPORATE_BOND = "CORP";
  static const String* COMMERCIAL_PAPER = "CP";
  static const String* CORPORATE_PRIVATE_PLACEMENT = "CPP";
  static const String* COMMON_STOCK = "CS";
  static const String* DEFAULTED = "DEFLTED";
  static const String* DEBTOR_IN_POSSESSION = "DINP";
  static const String* DEPOSIT_NOTES = "DN";
  static const String* DUAL_CURRENCY = "DUAL";
  static const String* EURO_CERTIFICATE_OF_DEPOSIT = "EUCD";
  static const String* EURO_CORPORATE_BOND = "EUCORP";
  static const String* EURO_COMMERCIAL_PAPER = "EUCP";
  static const String* EURO_SOVEREIGNS = "EUSOV";
  static const String* EURO_SUPRANATIONAL_COUPONS = "EUSUPRA";
  static const String* FEDERAL_AGENCY_COUPON = "FAC";
  static const String* FEDERAL_AGENCY_DISCOUNT_NOTE = "FADN";
  static const String* FOREIGN_EXCHANGE_CONTRACT = "FOR";
  static const String* FORWARD = "FORWARD";
  static const String* FUTURE = "FUT";
  static const String* GENERAL_OBLIGATION_BONDS = "GO";
  static const String* IOETTE_MORTGAGE = "IET";
  static const String* LETTER_OF_CREDIT = "LOFC";
  static const String* LIQUIDITY_NOTE = "LQN";
  static const String* MATURED = "MATURED";
  static const String* MORTGAGE_BACKED_SECURITIES = "MBS";
  static const String* MUTUAL_FUND = "MF";
  static const String* MORTGAGE_INTEREST_ONLY = "MIO";
  static const String* MULTI_LEG_INSTRUMENT = "MLEG";
  static const String* MORTGAGE_PRINCIPAL_ONLY = "MPO";
  static const String* MORTGAGE_PRIVATE_PLACEMENT = "MPP";
  static const String* MISCELLANEOUS_PASS_THROUGH = "MPT";
  static const String* MANDATORY_TENDER = "MT";
  static const String* MEDIUM_TERM_NOTES = "MTN";
  static const String* NO_SECURITY_TYPE = "NONE";
  static const String* OVERNIGHT = "ONITE";
  static const String* OPTION = "OPT";
  static const String* PRIVATE_EXPORT_FUNDING = "PEF";
  static const String* PFANDBRIEFE = "PFAND";
  static const String* PROMISSORY_NOTE = "PN";
  static const String* PREFERRED_STOCK = "PS";
  static const String* PLAZOS_FIJOS = "PZFJ";
  static const String* REVENUE_ANTICIPATION_NOTE = "RAN";
  static const String* REPLACED = "REPLACD";
  static const String* REPURCHASE = "REPO";
  static const String* RETIRED = "RETIRED";
  static const String* REVENUE_BONDS = "REV";
  static const String* REVOLVER_LOAN = "RVLV";
  static const String* REVOLVER_TERM_LOAN = "RVLVTRM";
  static const String* SECURITIES_LOAN = "SECLOAN";
  static const String* SECURITIES_PLEDGE = "SECPLEDGE";
  static const String* SPECIAL_ASSESSMENT = "SPCLA";
  static const String* SPECIAL_OBLIGATION = "SPCLO";
  static const String* SPECIAL_TAX = "SPCLT";
  static const String* SHORT_TERM_LOAN_NOTE = "STN";
  static const String* STRUCTURED_NOTES = "STRUCT";
  static const String* USD_SUPRANATIONAL_COUPONS = "SUPRA";
  static const String* SWING_LINE_FACILITY = "SWING";
  static const String* TAX_ANTICIPATION_NOTE = "TAN";
  static const String* TAX_ALLOCATION = "TAXA";
  static const String* TO_BE_ANNOUNCED = "TBA";
  static const String* US_TREASURY_BILL = "TBILL";
  static const String* US_TREASURY_BOND = "TBOND";
  static const String* PRINCIPAL_STRIP_OF_A_CALLABLE_BOND_OR_NOTE = "TCAL";
  static const String* TIME_DEPOSIT = "TD";
  static const String* TAX_EXEMPT_COMMERCIAL_PAPER = "TECP";
  static const String* TERM_LOAN = "TERM";
  static const String* INTEREST_STRIP_FROM_ANY_BOND_OR_NOTE = "TINT";
  static const String* TREASURY_INFLATION_PROTECTED_SECURITIES = "TIPS";
  static const String* US_TREASURY_NOTE = "TNOTE";
  static const String* PRINCIPAL_STRIP_FROM_A_NON_CALLABLE_BOND_OR_NOTE = "TPRN";
  static const String* TAX_AND_REVENUE_ANTICIPATION_NOTE = "TRAN";
  static const String* US_TREASURY_NOTE2 = "UST";
  static const String* US_TREASURY_BILL2 = "USTB";
  static const String* VARIABLE_RATE_DEMAND_NOTE = "VRDN";
  static const String* WARRANT = "WAR";
  static const String* WITHDRAWN = "WITHDRN";
  static const String* _UNKNOWN = "WLD";
  static const String* EXTENDED_COMM_NOTE = "XCN";
  static const String* INDEXED_LINKED = "XLINKD";
  static const String* YANKEE_CORPORATE_BOND = "YANK";
  static const String* YANKEE_CERTIFICATE_OF_DEPOSIT = "YCD";
  static const String* OPTIONS_ON_PHYSICAL = "OOP";
  static const String* OPTIONS_ON_FUTURES = "OOF";
  static const String* CASH = "CASH";
  SecurityType() : StringField(167) {}
    SecurityType(String* data) : StringField(167, data) {}
    
  };
  
  public __gc class EffectiveTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 168;
  EffectiveTime() : UtcTimeStampField(168) {}
    EffectiveTime(DateTime data) : UtcTimeStampField(168, data) {}
    EffectiveTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(168, data, showMilliseconds) {}
    
  };
  
  public __gc class StandInstDbType : public IntField
  {
  public:
  static const int FIELD = 169;
  static const int OTHER = 0;
  static const int DTC_SID = 1;
  static const int THOMSON_ALERT = 2;
  static const int A_GLOBAL_CUSTODIAN = 3;
  static const int ACCOUNTNET = 4;
  StandInstDbType() : IntField(169) {}
    StandInstDbType(int data) : IntField(169, data) {}
    
  };
  
  public __gc class StandInstDbName : public StringField
  {
  public:
  static const int FIELD = 170;
  StandInstDbName() : StringField(170) {}
    StandInstDbName(String* data) : StringField(170, data) {}
    
  };
  
  public __gc class StandInstDbID : public StringField
  {
  public:
  static const int FIELD = 171;
  StandInstDbID() : StringField(171) {}
    StandInstDbID(String* data) : StringField(171, data) {}
    
  };
  
  public __gc class SettlDeliveryType : public IntField
  {
  public:
  static const int FIELD = 172;
  static const int VERSUS_PAYMENT = 0;
  static const int FREE = 1;
  static const int TRI_PARTY = 2;
  static const int HOLD_IN_CUSTODY = 3;
  SettlDeliveryType() : IntField(172) {}
    SettlDeliveryType(int data) : IntField(172, data) {}
    
  };
  
  public __gc class SettlDepositoryCode : public StringField
  {
  public:
  static const int FIELD = 173;
  SettlDepositoryCode() : StringField(173) {}
    SettlDepositoryCode(String* data) : StringField(173, data) {}
    
  };
  
  public __gc class SettlBrkrCode : public StringField
  {
  public:
  static const int FIELD = 174;
  SettlBrkrCode() : StringField(174) {}
    SettlBrkrCode(String* data) : StringField(174, data) {}
    
  };
  
  public __gc class SettlInstCode : public StringField
  {
  public:
  static const int FIELD = 175;
  SettlInstCode() : StringField(175) {}
    SettlInstCode(String* data) : StringField(175, data) {}
    
  };
  
  public __gc class SecuritySettlAgentName : public StringField
  {
  public:
  static const int FIELD = 176;
  SecuritySettlAgentName() : StringField(176) {}
    SecuritySettlAgentName(String* data) : StringField(176, data) {}
    
  };
  
  public __gc class SecuritySettlAgentCode : public StringField
  {
  public:
  static const int FIELD = 177;
  SecuritySettlAgentCode() : StringField(177) {}
    SecuritySettlAgentCode(String* data) : StringField(177, data) {}
    
  };
  
  public __gc class SecuritySettlAgentAcctNum : public StringField
  {
  public:
  static const int FIELD = 178;
  SecuritySettlAgentAcctNum() : StringField(178) {}
    SecuritySettlAgentAcctNum(String* data) : StringField(178, data) {}
    
  };
  
  public __gc class SecuritySettlAgentAcctName : public StringField
  {
  public:
  static const int FIELD = 179;
  SecuritySettlAgentAcctName() : StringField(179) {}
    SecuritySettlAgentAcctName(String* data) : StringField(179, data) {}
    
  };
  
  public __gc class SecuritySettlAgentContactName : public StringField
  {
  public:
  static const int FIELD = 180;
  SecuritySettlAgentContactName() : StringField(180) {}
    SecuritySettlAgentContactName(String* data) : StringField(180, data) {}
    
  };
  
  public __gc class SecuritySettlAgentContactPhone : public StringField
  {
  public:
  static const int FIELD = 181;
  SecuritySettlAgentContactPhone() : StringField(181) {}
    SecuritySettlAgentContactPhone(String* data) : StringField(181, data) {}
    
  };
  
  public __gc class CashSettlAgentName : public StringField
  {
  public:
  static const int FIELD = 182;
  CashSettlAgentName() : StringField(182) {}
    CashSettlAgentName(String* data) : StringField(182, data) {}
    
  };
  
  public __gc class CashSettlAgentCode : public StringField
  {
  public:
  static const int FIELD = 183;
  CashSettlAgentCode() : StringField(183) {}
    CashSettlAgentCode(String* data) : StringField(183, data) {}
    
  };
  
  public __gc class CashSettlAgentAcctNum : public StringField
  {
  public:
  static const int FIELD = 184;
  CashSettlAgentAcctNum() : StringField(184) {}
    CashSettlAgentAcctNum(String* data) : StringField(184, data) {}
    
  };
  
  public __gc class CashSettlAgentAcctName : public StringField
  {
  public:
  static const int FIELD = 185;
  CashSettlAgentAcctName() : StringField(185) {}
    CashSettlAgentAcctName(String* data) : StringField(185, data) {}
    
  };
  
  public __gc class CashSettlAgentContactName : public StringField
  {
  public:
  static const int FIELD = 186;
  CashSettlAgentContactName() : StringField(186) {}
    CashSettlAgentContactName(String* data) : StringField(186, data) {}
    
  };
  
  public __gc class CashSettlAgentContactPhone : public StringField
  {
  public:
  static const int FIELD = 187;
  CashSettlAgentContactPhone() : StringField(187) {}
    CashSettlAgentContactPhone(String* data) : StringField(187, data) {}
    
  };
  
  public __gc class BidSpotRate : public DoubleField
  {
  public:
  static const int FIELD = 188;
  BidSpotRate() : DoubleField(188) {}
    BidSpotRate(double data) : DoubleField(188, data) {}
    BidSpotRate(double data, int decimalPadding) : DoubleField(188, data, decimalPadding) {}
    
  };
  
  public __gc class BidForwardPoints : public DoubleField
  {
  public:
  static const int FIELD = 189;
  BidForwardPoints() : DoubleField(189) {}
    BidForwardPoints(double data) : DoubleField(189, data) {}
    BidForwardPoints(double data, int decimalPadding) : DoubleField(189, data, decimalPadding) {}
    
  };
  
  public __gc class OfferSpotRate : public DoubleField
  {
  public:
  static const int FIELD = 190;
  OfferSpotRate() : DoubleField(190) {}
    OfferSpotRate(double data) : DoubleField(190, data) {}
    OfferSpotRate(double data, int decimalPadding) : DoubleField(190, data, decimalPadding) {}
    
  };
  
  public __gc class OfferForwardPoints : public DoubleField
  {
  public:
  static const int FIELD = 191;
  OfferForwardPoints() : DoubleField(191) {}
    OfferForwardPoints(double data) : DoubleField(191, data) {}
    OfferForwardPoints(double data, int decimalPadding) : DoubleField(191, data, decimalPadding) {}
    
  };
  
  public __gc class OrderQty2 : public DoubleField
  {
  public:
  static const int FIELD = 192;
  OrderQty2() : DoubleField(192) {}
    OrderQty2(double data) : DoubleField(192, data) {}
    OrderQty2(double data, int decimalPadding) : DoubleField(192, data, decimalPadding) {}
    
  };
  
  public __gc class SettlDate2 : public StringField
  {
  public:
  static const int FIELD = 193;
  SettlDate2() : StringField(193) {}
    SettlDate2(String* data) : StringField(193, data) {}
    
  };
  
  public __gc class LastSpotRate : public DoubleField
  {
  public:
  static const int FIELD = 194;
  LastSpotRate() : DoubleField(194) {}
    LastSpotRate(double data) : DoubleField(194, data) {}
    LastSpotRate(double data, int decimalPadding) : DoubleField(194, data, decimalPadding) {}
    
  };
  
  public __gc class LastForwardPoints : public DoubleField
  {
  public:
  static const int FIELD = 195;
  LastForwardPoints() : DoubleField(195) {}
    LastForwardPoints(double data) : DoubleField(195, data) {}
    LastForwardPoints(double data, int decimalPadding) : DoubleField(195, data, decimalPadding) {}
    
  };
  
  public __gc class AllocLinkID : public StringField
  {
  public:
  static const int FIELD = 196;
  AllocLinkID() : StringField(196) {}
    AllocLinkID(String* data) : StringField(196, data) {}
    
  };
  
  public __gc class AllocLinkType : public IntField
  {
  public:
  static const int FIELD = 197;
  static const int F_X_NETTING = 0;
  static const int F_X_SWAP = 1;
  AllocLinkType() : IntField(197) {}
    AllocLinkType(int data) : IntField(197, data) {}
    
  };
  
  public __gc class SecondaryOrderID : public StringField
  {
  public:
  static const int FIELD = 198;
  SecondaryOrderID() : StringField(198) {}
    SecondaryOrderID(String* data) : StringField(198, data) {}
    
  };
  
  public __gc class NoIOIQualifiers : public IntField
  {
  public:
  static const int FIELD = 199;
  NoIOIQualifiers() : IntField(199) {}
    NoIOIQualifiers(int data) : IntField(199, data) {}
    
  };
  
  public __gc class MaturityMonthYear : public StringField
  {
  public:
  static const int FIELD = 200;
  MaturityMonthYear() : StringField(200) {}
    MaturityMonthYear(String* data) : StringField(200, data) {}
    
  };
  
  public __gc class PutOrCall : public IntField
  {
  public:
  static const int FIELD = 201;
  static const int PUT = 0;
  static const int CALL = 1;
  PutOrCall() : IntField(201) {}
    PutOrCall(int data) : IntField(201, data) {}
    
  };
  
  public __gc class StrikePrice : public DoubleField
  {
  public:
  static const int FIELD = 202;
  StrikePrice() : DoubleField(202) {}
    StrikePrice(double data) : DoubleField(202, data) {}
    StrikePrice(double data, int decimalPadding) : DoubleField(202, data, decimalPadding) {}
    
  };
  
  public __gc class CoveredOrUncovered : public IntField
  {
  public:
  static const int FIELD = 203;
  static const int COVERED = 0;
  static const int UNCOVERED = 1;
  CoveredOrUncovered() : IntField(203) {}
    CoveredOrUncovered(int data) : IntField(203, data) {}
    
  };
  
  public __gc class CustomerOrFirm : public IntField
  {
  public:
  static const int FIELD = 204;
  static const int CUSTOMER = 0;
  static const int FIRM = 1;
  CustomerOrFirm() : IntField(204) {}
    CustomerOrFirm(int data) : IntField(204, data) {}
    
  };
  
  public __gc class MaturityDay : public StringField
  {
  public:
  static const int FIELD = 205;
  MaturityDay() : StringField(205) {}
    MaturityDay(String* data) : StringField(205, data) {}
    
  };
  
  public __gc class OptAttribute : public CharField
  {
  public:
  static const int FIELD = 206;
  OptAttribute() : CharField(206) {}
    OptAttribute(__wchar_t data) : CharField(206, data) {}
    
  };
  
  public __gc class SecurityExchange : public StringField
  {
  public:
  static const int FIELD = 207;
  SecurityExchange() : StringField(207) {}
    SecurityExchange(String* data) : StringField(207, data) {}
    
  };
  
  public __gc class NotifyBrokerOfCredit : public BooleanField
  {
  public:
  static const int FIELD = 208;
  NotifyBrokerOfCredit() : BooleanField(208) {}
    NotifyBrokerOfCredit(bool data) : BooleanField(208, data) {}
    
  };
  
  public __gc class AllocHandlInst : public IntField
  {
  public:
  static const int FIELD = 209;
  static const int MATCH = 1;
  static const int FORWARD = 2;
  static const int FORWARD_AND_MATCH = 3;
  AllocHandlInst() : IntField(209) {}
    AllocHandlInst(int data) : IntField(209, data) {}
    
  };
  
  public __gc class MaxShow : public DoubleField
  {
  public:
  static const int FIELD = 210;
  MaxShow() : DoubleField(210) {}
    MaxShow(double data) : DoubleField(210, data) {}
    MaxShow(double data, int decimalPadding) : DoubleField(210, data, decimalPadding) {}
    
  };
  
  public __gc class PegOffsetValue : public DoubleField
  {
  public:
  static const int FIELD = 211;
  PegOffsetValue() : DoubleField(211) {}
    PegOffsetValue(double data) : DoubleField(211, data) {}
    PegOffsetValue(double data, int decimalPadding) : DoubleField(211, data, decimalPadding) {}
    
  };
  
  public __gc class SettlInstRefID : public StringField
  {
  public:
  static const int FIELD = 214;
  SettlInstRefID() : StringField(214) {}
    SettlInstRefID(String* data) : StringField(214, data) {}
    
  };
  
  public __gc class NoRoutingIDs : public IntField
  {
  public:
  static const int FIELD = 215;
  NoRoutingIDs() : IntField(215) {}
    NoRoutingIDs(int data) : IntField(215, data) {}
    
  };
  
  public __gc class RoutingType : public IntField
  {
  public:
  static const int FIELD = 216;
  static const int TARGET_FIRM = 1;
  static const int TARGET_LIST = 2;
  static const int BLOCK_FIRM = 3;
  static const int BLOCK_LIST = 4;
  RoutingType() : IntField(216) {}
    RoutingType(int data) : IntField(216, data) {}
    
  };
  
  public __gc class RoutingID : public StringField
  {
  public:
  static const int FIELD = 217;
  RoutingID() : StringField(217) {}
    RoutingID(String* data) : StringField(217, data) {}
    
  };
  
  public __gc class Spread : public DoubleField
  {
  public:
  static const int FIELD = 218;
  Spread() : DoubleField(218) {}
    Spread(double data) : DoubleField(218, data) {}
    Spread(double data, int decimalPadding) : DoubleField(218, data, decimalPadding) {}
    
  };
  
  public __gc class Benchmark : public CharField
  {
  public:
  static const int FIELD = 219;
  static const __wchar_t CURVE = '1';
  static const __wchar_t FIVEYR = '2';
  static const __wchar_t OLD5 = '3';
  static const __wchar_t TENYR = '4';
  static const __wchar_t OLD10 = '5';
  static const __wchar_t THIRTYYR = '6';
  static const __wchar_t OLD30 = '7';
  static const __wchar_t THREEMOLIBOR = '8';
  static const __wchar_t SIXMOLIBOR = '9';
  Benchmark() : CharField(219) {}
    Benchmark(__wchar_t data) : CharField(219, data) {}
    
  };
  
  public __gc class BenchmarkCurveCurrency : public StringField
  {
  public:
  static const int FIELD = 220;
  BenchmarkCurveCurrency() : StringField(220) {}
    BenchmarkCurveCurrency(String* data) : StringField(220, data) {}
    
  };
  
  public __gc class BenchmarkCurveName : public StringField
  {
  public:
  static const int FIELD = 221;
  static const String* EONIA = "EONIA";
  static const String* EUREPO = "EUREPO";
  static const String* EURIBOR = "Euribor";
  static const String* FUTURESWAP = "FutureSWAP";
  static const String* LIBID = "LIBID";
  static const String* LIBOR = "LIBOR";
  static const String* MUNIAAA = "MuniAAA";
  static const String* OTHER = "OTHER";
  static const String* PFANDBRIEFE = "Pfandbriefe";
  static const String* SONIA = "SONIA";
  static const String* SWAP = "SWAP";
  static const String* TREASURY = "Treasury";
  BenchmarkCurveName() : StringField(221) {}
    BenchmarkCurveName(String* data) : StringField(221, data) {}
    
  };
  
  public __gc class BenchmarkCurvePoint : public StringField
  {
  public:
  static const int FIELD = 222;
  BenchmarkCurvePoint() : StringField(222) {}
    BenchmarkCurvePoint(String* data) : StringField(222, data) {}
    
  };
  
  public __gc class CouponRate : public DoubleField
  {
  public:
  static const int FIELD = 223;
  CouponRate() : DoubleField(223) {}
    CouponRate(double data) : DoubleField(223, data) {}
    CouponRate(double data, int decimalPadding) : DoubleField(223, data, decimalPadding) {}
    
  };
  
  public __gc class CouponPaymentDate : public StringField
  {
  public:
  static const int FIELD = 224;
  CouponPaymentDate() : StringField(224) {}
    CouponPaymentDate(String* data) : StringField(224, data) {}
    
  };
  
  public __gc class IssueDate : public StringField
  {
  public:
  static const int FIELD = 225;
  IssueDate() : StringField(225) {}
    IssueDate(String* data) : StringField(225, data) {}
    
  };
  
  public __gc class RepurchaseTerm : public IntField
  {
  public:
  static const int FIELD = 226;
  RepurchaseTerm() : IntField(226) {}
    RepurchaseTerm(int data) : IntField(226, data) {}
    
  };
  
  public __gc class RepurchaseRate : public DoubleField
  {
  public:
  static const int FIELD = 227;
  RepurchaseRate() : DoubleField(227) {}
    RepurchaseRate(double data) : DoubleField(227, data) {}
    RepurchaseRate(double data, int decimalPadding) : DoubleField(227, data, decimalPadding) {}
    
  };
  
  public __gc class Factor : public DoubleField
  {
  public:
  static const int FIELD = 228;
  Factor() : DoubleField(228) {}
    Factor(double data) : DoubleField(228, data) {}
    Factor(double data, int decimalPadding) : DoubleField(228, data, decimalPadding) {}
    
  };
  
  public __gc class TradeOriginationDate : public StringField
  {
  public:
  static const int FIELD = 229;
  TradeOriginationDate() : StringField(229) {}
    TradeOriginationDate(String* data) : StringField(229, data) {}
    
  };
  
  public __gc class ExDate : public StringField
  {
  public:
  static const int FIELD = 230;
  ExDate() : StringField(230) {}
    ExDate(String* data) : StringField(230, data) {}
    
  };
  
  public __gc class ContractMultiplier : public DoubleField
  {
  public:
  static const int FIELD = 231;
  ContractMultiplier() : DoubleField(231) {}
    ContractMultiplier(double data) : DoubleField(231, data) {}
    ContractMultiplier(double data, int decimalPadding) : DoubleField(231, data, decimalPadding) {}
    
  };
  
  public __gc class NoStipulations : public IntField
  {
  public:
  static const int FIELD = 232;
  NoStipulations() : IntField(232) {}
    NoStipulations(int data) : IntField(232, data) {}
    
  };
  
  public __gc class StipulationType : public StringField
  {
  public:
  static const int FIELD = 233;
  static const String* ABSOLUTE_PREPAYMENT_SPEED = "ABS";
  static const String* AMT = "AMT";
  static const String* AUTO_REINVESTMENT_AT_OR_BETTER = "AUTOREINV";
  static const String* BANK_QUALIFIED = "BANKQUAL";
  static const String* BARGAIN_CONDITIONS = "BGNCON";
  static const String* COUPON_RANGE = "COUPON";
  static const String* CONSTANT_PREPAYMENT_PENALTY = "CPP";
  static const String* CONSTANT_PREPAYMENT_RATE = "CPR";
  static const String* CONSTANT_PREPAYMENT_YIELD = "CPY";
  static const String* ISO_CURRENCY_CODE = "CURRENCY";
  static const String* CUSTOM_START_END_DATE = "CUSTOMDATE";
  static const String* GEOGRAPHICS_AND_PERCENT_RANGE = "GEOG";
  static const String* VALUATION_DISCOUNT = "HAIRCUT";
  static const String* FINAL_CPR_OF_HOME_EQUITY_PREPAYMENT_CURVE = "HEP";
  static const String* INSURED = "INSURED";
  static const String* YEAR_OR_YEAR_MONTH_OF_ISSUE = "ISSUE";
  static const String* ISSUERS_TICKER = "ISSUER";
  static const String* ISSUE_SIZE_RANGE = "ISSUESIZE";
  static const String* LOOKBACK_DAYS = "LOOKBACK";
  static const String* EXPLICIT_LOT_IDENTIFIER = "LOT";
  static const String* LOT_VARIANCE = "LOTVAR";
  static const String* MATURITY_YEAR_AND_MONTH = "MAT";
  static const String* MATURITY_RANGE = "MATURITY";
  static const String* MAXIMUM_SUBSTITUTIONS = "MAXSUBS";
  static const String* PERCENT_OF_MANUFACTURED_HOUSING_PREPAYMENT_CURVE = "MHP";
  static const String* MINIMUM_DENOMINATION = "MINDNOM";
  static const String* MINIMUM_INCREMENT = "MININCR";
  static const String* MINIMUM_QUANTITY = "MINQTY";
  static const String* MONTHLY_PREPAYMENT_RATE = "MPR";
  static const String* PAYMENT_FREQUENCY_CALENDAR = "PAYFREQ";
  static const String* NUMBER_OF_PIECES = "PIECES";
  static const String* POOLS_MAXIMUM = "PMAX";
  static const String* PERCENT_OF_PROSPECTUS_PREPAYMENT_CURVE = "PPC";
  static const String* POOLS_PER_LOT = "PPL";
  static const String* POOLS_PER_MILLION = "PPM";
  static const String* POOLS_PER_TRADE = "PPT";
  static const String* PRICE_RANGE = "PRICE";
  static const String* PRICING_FREQUENCY = "PRICEFREQ";
  static const String* PRODUCTION_YEAR = "PROD";
  static const String* CALL_PROTECTION = "PROTECT";
  static const String* PERCENT_OF_BMA_PREPAYMENT_CURVE = "PSA";
  static const String* PURPOSE = "PURPOSE";
  static const String* BENCHMARK_PRICE_SOURCE = "PXSOURCE";
  static const String* RATING_SOURCE_AND_RANGE = "RATING";
  static const String* TYPE_OF_REDEMPTION = "REDEMPTION";
  static const String* RESTRICTED = "RESTRICTED";
  static const String* MARKET_SECTOR = "SECTOR";
  static const String* SECURITYTYPE_INCLUDED_OR_EXCLUDED = "SECTYPE";
  static const String* SINGLE_MONTHLY_MORTALITY = "SMM";
  static const String* STRUCTURE = "STRUCT";
  static const String* SUBSTITUTIONS_FREQUENCY = "SUBSFREQ";
  static const String* SUBSTITUTIONS_LEFT = "SUBSLEFT";
  static const String* FREEFORM_TEXT = "TEXT";
  static const String* TRADE_VARIANCE = "TRDVAR";
  static const String* WEIGHTED_AVERAGE_COUPON = "WAC";
  static const String* WEIGHTED_AVERAGE_LIFE_COUPON = "WAL";
  static const String* WEIGHTED_AVERAGE_LOAN_AGE = "WALA";
  static const String* WEIGHTED_AVERAGE_MATURITY = "WAM";
  static const String* WHOLE_POOL = "WHOLE";
  static const String* YIELD_RANGE = "YIELD";
  StipulationType() : StringField(233) {}
    StipulationType(String* data) : StringField(233, data) {}
    
  };
  
  public __gc class StipulationValue : public StringField
  {
  public:
  static const int FIELD = 234;
  static const String* SPECIAL_CUM_DIVIDEND = "CD";
  static const String* SPECIAL_EX_DIVIDEND = "XD";
  static const String* SPECIAL_CUM_COUPON = "CC";
  static const String* SPECIAL_EX_COUPON = "XC";
  static const String* SPECIAL_CUM_BONUS = "CB";
  static const String* SPECIAL_EX_BONUS = "XB";
  static const String* SPECIAL_CUM_RIGHTS = "CR";
  static const String* SPECIAL_EX_RIGHTS = "XR";
  static const String* SPECIAL_CUM_CAPITAL_REPAYMENTS = "CP";
  static const String* SPECIAL_EX_CAPITAL_REPAYMENTS = "XP";
  static const String* CASH_SETTLEMENT = "CS";
  static const String* SPECIAL_PRICE = "SP";
  static const String* REPORT_FOR_EUROPEAN_EQUITY_MARKET_SECURITIES = "TR";
  static const String* GUARANTEED_DELIVERY = "GD";
  StipulationValue() : StringField(234) {}
    StipulationValue(String* data) : StringField(234, data) {}
    
  };
  
  public __gc class YieldType : public StringField
  {
  public:
  static const int FIELD = 235;
  static const String* AFTER_TAX_YIELD = "AFTERTAX";
  static const String* ANNUAL_YIELD = "ANNUAL";
  static const String* YIELD_AT_ISSUE = "ATISSUE";
  static const String* YIELD_TO_AVERAGE_MATURITY = "AVGMATURITY";
  static const String* BOOK_YIELD = "BOOK";
  static const String* YIELD_TO_NEXT_CALL = "CALL";
  static const String* YIELD_CHANGE_SINCE_CLOSE = "CHANGE";
  static const String* CLOSING_YIELD = "CLOSE";
  static const String* COMPOUND_YIELD = "COMPOUND";
  static const String* CURRENT_YIELD = "CURRENT";
  static const String* GOVERNMENT_EQUIVALENT_YIELD = "GOVTEQUIV";
  static const String* TRUE_GROSS_YIELD = "GROSS";
  static const String* YIELD_WITH_INFLATION_ASSUMPTION = "INFLATION";
  static const String* INVERSE_FLOATER_BOND_YIELD = "INVERSEFLOATER";
  static const String* MOST_RECENT_CLOSING_YIELD = "LASTCLOSE";
  static const String* CLOSING_YIELD_MOST_RECENT_MONTH = "LASTMONTH";
  static const String* CLOSING_YIELD_MOST_RECENT_QUARTER = "LASTQUARTER";
  static const String* CLOSING_YIELD_MOST_RECENT_YEAR = "LASTYEAR";
  static const String* YIELD_TO_LONGEST_AVERAGE_LIFE = "LONGAVGLIFE";
  static const String* MARK_TO_MARKET_YIELD = "MARK";
  static const String* YIELD_TO_MATURITY = "MATURITY";
  static const String* YIELD_TO_NEXT_REFUND = "NEXTREFUND";
  static const String* OPEN_AVERAGE_YIELD = "OPENAVG";
  static const String* PREVIOUS_CLOSE_YIELD = "PREVCLOSE";
  static const String* PROCEEDS_YIELD = "PROCEEDS";
  static const String* YIELD_TO_NEXT_PUT = "PUT";
  static const String* SEMI_ANNUAL_YIELD = "SEMIANNUAL";
  static const String* YIELD_TO_SHORTEST_AVERAGE_LIFE = "SHORTAVGLIFE";
  static const String* SIMPLE_YIELD = "SIMPLE";
  static const String* TAX_EQUIVALENT_YIELD = "TAXEQUIV";
  static const String* YIELD_TO_TENDER_DATE = "TENDER";
  static const String* TRUE_YIELD = "TRUE";
  static const String* YIELD_VALUE_OF_1_32 = "VALUE1_32";
  static const String* YIELD_TO_WORST = "WORST";
  YieldType() : StringField(235) {}
    YieldType(String* data) : StringField(235, data) {}
    
  };
  
  public __gc class Yield : public DoubleField
  {
  public:
  static const int FIELD = 236;
  Yield() : DoubleField(236) {}
    Yield(double data) : DoubleField(236, data) {}
    Yield(double data, int decimalPadding) : DoubleField(236, data, decimalPadding) {}
    
  };
  
  public __gc class TotalTakedown : public DoubleField
  {
  public:
  static const int FIELD = 237;
  TotalTakedown() : DoubleField(237) {}
    TotalTakedown(double data) : DoubleField(237, data) {}
    TotalTakedown(double data, int decimalPadding) : DoubleField(237, data, decimalPadding) {}
    
  };
  
  public __gc class Concession : public DoubleField
  {
  public:
  static const int FIELD = 238;
  Concession() : DoubleField(238) {}
    Concession(double data) : DoubleField(238, data) {}
    Concession(double data, int decimalPadding) : DoubleField(238, data, decimalPadding) {}
    
  };
  
  public __gc class RepoCollateralSecurityType : public IntField
  {
  public:
  static const int FIELD = 239;
  RepoCollateralSecurityType() : IntField(239) {}
    RepoCollateralSecurityType(int data) : IntField(239, data) {}
    
  };
  
  public __gc class RedemptionDate : public StringField
  {
  public:
  static const int FIELD = 240;
  RedemptionDate() : StringField(240) {}
    RedemptionDate(String* data) : StringField(240, data) {}
    
  };
  
  public __gc class UnderlyingCouponPaymentDate : public StringField
  {
  public:
  static const int FIELD = 241;
  UnderlyingCouponPaymentDate() : StringField(241) {}
    UnderlyingCouponPaymentDate(String* data) : StringField(241, data) {}
    
  };
  
  public __gc class UnderlyingIssueDate : public StringField
  {
  public:
  static const int FIELD = 242;
  UnderlyingIssueDate() : StringField(242) {}
    UnderlyingIssueDate(String* data) : StringField(242, data) {}
    
  };
  
  public __gc class UnderlyingRepoCollateralSecurityType : public IntField
  {
  public:
  static const int FIELD = 243;
  UnderlyingRepoCollateralSecurityType() : IntField(243) {}
    UnderlyingRepoCollateralSecurityType(int data) : IntField(243, data) {}
    
  };
  
  public __gc class UnderlyingRepurchaseTerm : public IntField
  {
  public:
  static const int FIELD = 244;
  UnderlyingRepurchaseTerm() : IntField(244) {}
    UnderlyingRepurchaseTerm(int data) : IntField(244, data) {}
    
  };
  
  public __gc class UnderlyingRepurchaseRate : public DoubleField
  {
  public:
  static const int FIELD = 245;
  UnderlyingRepurchaseRate() : DoubleField(245) {}
    UnderlyingRepurchaseRate(double data) : DoubleField(245, data) {}
    UnderlyingRepurchaseRate(double data, int decimalPadding) : DoubleField(245, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingFactor : public DoubleField
  {
  public:
  static const int FIELD = 246;
  UnderlyingFactor() : DoubleField(246) {}
    UnderlyingFactor(double data) : DoubleField(246, data) {}
    UnderlyingFactor(double data, int decimalPadding) : DoubleField(246, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingRedemptionDate : public StringField
  {
  public:
  static const int FIELD = 247;
  UnderlyingRedemptionDate() : StringField(247) {}
    UnderlyingRedemptionDate(String* data) : StringField(247, data) {}
    
  };
  
  public __gc class LegCouponPaymentDate : public StringField
  {
  public:
  static const int FIELD = 248;
  LegCouponPaymentDate() : StringField(248) {}
    LegCouponPaymentDate(String* data) : StringField(248, data) {}
    
  };
  
  public __gc class LegIssueDate : public StringField
  {
  public:
  static const int FIELD = 249;
  LegIssueDate() : StringField(249) {}
    LegIssueDate(String* data) : StringField(249, data) {}
    
  };
  
  public __gc class LegRepoCollateralSecurityType : public IntField
  {
  public:
  static const int FIELD = 250;
  LegRepoCollateralSecurityType() : IntField(250) {}
    LegRepoCollateralSecurityType(int data) : IntField(250, data) {}
    
  };
  
  public __gc class LegRepurchaseTerm : public IntField
  {
  public:
  static const int FIELD = 251;
  LegRepurchaseTerm() : IntField(251) {}
    LegRepurchaseTerm(int data) : IntField(251, data) {}
    
  };
  
  public __gc class LegRepurchaseRate : public DoubleField
  {
  public:
  static const int FIELD = 252;
  LegRepurchaseRate() : DoubleField(252) {}
    LegRepurchaseRate(double data) : DoubleField(252, data) {}
    LegRepurchaseRate(double data, int decimalPadding) : DoubleField(252, data, decimalPadding) {}
    
  };
  
  public __gc class LegFactor : public DoubleField
  {
  public:
  static const int FIELD = 253;
  LegFactor() : DoubleField(253) {}
    LegFactor(double data) : DoubleField(253, data) {}
    LegFactor(double data, int decimalPadding) : DoubleField(253, data, decimalPadding) {}
    
  };
  
  public __gc class LegRedemptionDate : public StringField
  {
  public:
  static const int FIELD = 254;
  LegRedemptionDate() : StringField(254) {}
    LegRedemptionDate(String* data) : StringField(254, data) {}
    
  };
  
  public __gc class CreditRating : public StringField
  {
  public:
  static const int FIELD = 255;
  CreditRating() : StringField(255) {}
    CreditRating(String* data) : StringField(255, data) {}
    
  };
  
  public __gc class UnderlyingCreditRating : public StringField
  {
  public:
  static const int FIELD = 256;
  UnderlyingCreditRating() : StringField(256) {}
    UnderlyingCreditRating(String* data) : StringField(256, data) {}
    
  };
  
  public __gc class LegCreditRating : public StringField
  {
  public:
  static const int FIELD = 257;
  LegCreditRating() : StringField(257) {}
    LegCreditRating(String* data) : StringField(257, data) {}
    
  };
  
  public __gc class TradedFlatSwitch : public BooleanField
  {
  public:
  static const int FIELD = 258;
  TradedFlatSwitch() : BooleanField(258) {}
    TradedFlatSwitch(bool data) : BooleanField(258, data) {}
    
  };
  
  public __gc class BasisFeatureDate : public StringField
  {
  public:
  static const int FIELD = 259;
  BasisFeatureDate() : StringField(259) {}
    BasisFeatureDate(String* data) : StringField(259, data) {}
    
  };
  
  public __gc class BasisFeaturePrice : public DoubleField
  {
  public:
  static const int FIELD = 260;
  BasisFeaturePrice() : DoubleField(260) {}
    BasisFeaturePrice(double data) : DoubleField(260, data) {}
    BasisFeaturePrice(double data, int decimalPadding) : DoubleField(260, data, decimalPadding) {}
    
  };
  
  public __gc class MDReqID : public StringField
  {
  public:
  static const int FIELD = 262;
  MDReqID() : StringField(262) {}
    MDReqID(String* data) : StringField(262, data) {}
    
  };
  
  public __gc class SubscriptionRequestType : public CharField
  {
  public:
  static const int FIELD = 263;
  static const __wchar_t SNAPSHOT = '0';
  static const __wchar_t SNAPSHOT_PLUS_UPDATES = '1';
  static const __wchar_t DISABLE_PREVIOUS_SNAPSHOT_PLUS_UPDATE_REQUEST = '2';
  SubscriptionRequestType() : CharField(263) {}
    SubscriptionRequestType(__wchar_t data) : CharField(263, data) {}
    
  };
  
  public __gc class MarketDepth : public IntField
  {
  public:
  static const int FIELD = 264;
  MarketDepth() : IntField(264) {}
    MarketDepth(int data) : IntField(264, data) {}
    
  };
  
  public __gc class MDUpdateType : public IntField
  {
  public:
  static const int FIELD = 265;
  static const int FULL_REFRESH = 0;
  static const int INCREMENTAL_REFRESH = 1;
  MDUpdateType() : IntField(265) {}
    MDUpdateType(int data) : IntField(265, data) {}
    
  };
  
  public __gc class AggregatedBook : public BooleanField
  {
  public:
  static const int FIELD = 266;
  AggregatedBook() : BooleanField(266) {}
    AggregatedBook(bool data) : BooleanField(266, data) {}
    
  };
  
  public __gc class NoMDEntryTypes : public IntField
  {
  public:
  static const int FIELD = 267;
  NoMDEntryTypes() : IntField(267) {}
    NoMDEntryTypes(int data) : IntField(267, data) {}
    
  };
  
  public __gc class NoMDEntries : public IntField
  {
  public:
  static const int FIELD = 268;
  NoMDEntries() : IntField(268) {}
    NoMDEntries(int data) : IntField(268, data) {}
    
  };
  
  public __gc class MDEntryType : public CharField
  {
  public:
  static const int FIELD = 269;
  static const __wchar_t BID = '0';
  static const __wchar_t OFFER = '1';
  static const __wchar_t TRADE = '2';
  static const __wchar_t INDEX_VALUE = '3';
  static const __wchar_t OPENING_PRICE = '4';
  static const __wchar_t CLOSING_PRICE = '5';
  static const __wchar_t SETTLEMENT_PRICE = '6';
  static const __wchar_t TRADING_SESSION_HIGH_PRICE = '7';
  static const __wchar_t TRADING_SESSION_LOW_PRICE = '8';
  static const __wchar_t TRADING_SESSION_VWAP_PRICE = '9';
  static const __wchar_t IMBALANCE = 'A';
  static const __wchar_t TRADE_VOLUME = 'B';
  static const __wchar_t OPEN_INTEREST = 'C';
  static const __wchar_t COMPOSITE_UNDERLYING_PRICE = 'D';
  static const __wchar_t SIMULATED_SELL_PRICE = 'E';
  static const __wchar_t SIMULATED_BUY_PRICE = 'F';
  static const __wchar_t MARGIN_RATE = 'G';
  static const __wchar_t MID_PRICE = 'H';
  static const __wchar_t EMPTY_BOOK = 'J';
  static const __wchar_t SETTLE_HIGH_PRICE = 'K';
  static const __wchar_t SETTLE_LOW_PRICE = 'L';
  static const __wchar_t PRIOR_SETTLE_PRICE = 'M';
  static const __wchar_t SESSION_HIGH_BID = 'N';
  static const __wchar_t SESSION_LOW_OFFER = 'O';
  static const __wchar_t EARLY_PRICES = 'P';
  static const __wchar_t AUCTION_CLEARING_PRICE = 'Q';
  MDEntryType() : CharField(269) {}
    MDEntryType(__wchar_t data) : CharField(269, data) {}
    
  };
  
  public __gc class MDEntryPx : public DoubleField
  {
  public:
  static const int FIELD = 270;
  MDEntryPx() : DoubleField(270) {}
    MDEntryPx(double data) : DoubleField(270, data) {}
    MDEntryPx(double data, int decimalPadding) : DoubleField(270, data, decimalPadding) {}
    
  };
  
  public __gc class MDEntrySize : public DoubleField
  {
  public:
  static const int FIELD = 271;
  MDEntrySize() : DoubleField(271) {}
    MDEntrySize(double data) : DoubleField(271, data) {}
    MDEntrySize(double data, int decimalPadding) : DoubleField(271, data, decimalPadding) {}
    
  };
  
  public __gc class MDEntryDate : public UtcDateOnlyField
  {
  public:
  static const int FIELD = 272;
  MDEntryDate() : UtcDateOnlyField(272) {}
    MDEntryDate(DateTime data) : UtcDateOnlyField(272, data) {}
    
  };
  
  public __gc class MDEntryTime : public UtcTimeOnlyField
  {
  public:
  static const int FIELD = 273;
  MDEntryTime() : UtcTimeOnlyField(273) {}
    MDEntryTime(DateTime data) : UtcTimeOnlyField(273, data) {}
    MDEntryTime(DateTime data, bool showMilliseconds) : UtcTimeOnlyField(273, data, showMilliseconds) {}
    
  };
  
  public __gc class TickDirection : public CharField
  {
  public:
  static const int FIELD = 274;
  static const __wchar_t PLUS_TICK = '0';
  static const __wchar_t ZERO_PLUS_TICK = '1';
  static const __wchar_t MINUS_TICK = '2';
  static const __wchar_t ZERO_MINUS_TICK = '3';
  TickDirection() : CharField(274) {}
    TickDirection(__wchar_t data) : CharField(274, data) {}
    
  };
  
  public __gc class MDMkt : public StringField
  {
  public:
  static const int FIELD = 275;
  MDMkt() : StringField(275) {}
    MDMkt(String* data) : StringField(275, data) {}
    
  };
  
  public __gc class QuoteCondition : public StringField
  {
  public:
  static const int FIELD = 276;
  static const __wchar_t OPEN_ACTIVE = 'A';
  static const __wchar_t CLOSED_INACTIVE = 'B';
  static const __wchar_t EXCHANGE_BEST = 'C';
  static const __wchar_t CONSOLIDATED_BEST = 'D';
  static const __wchar_t LOCKED = 'E';
  static const __wchar_t CROSSED = 'F';
  static const __wchar_t DEPTH = 'G';
  static const __wchar_t FAST_TRADING = 'H';
  static const __wchar_t NON_FIRM = 'I';
  static const __wchar_t MANUAL_SLOW_QUOTE = 'L';
  static const __wchar_t OUTRIGHT_PRICE = 'J';
  static const __wchar_t IMPLIED_PRICE = 'K';
  static const __wchar_t DEPTH_ON_OFFER = 'M';
  static const __wchar_t DEPTH_ON_BID = 'N';
  static const __wchar_t CLOSING = 'O';
  static const __wchar_t NEWS_DISSEMINATION = 'P';
  static const __wchar_t TRADING_RANGE = 'Q';
  static const __wchar_t ORDER_INFLUX = 'R';
  static const __wchar_t DUE_TO_RELATED = 'S';
  static const __wchar_t NEWS_PENDING = 'T';
  static const __wchar_t ADDITIONAL_INFO = 'U';
  static const __wchar_t ADDITIONAL_INFO_DUE_TO_RELATED = 'V';
  static const __wchar_t RESUME = 'W';
  static const __wchar_t VIEW_OF_COMMON = 'X';
  static const __wchar_t VOLUME_ALERT = 'Y';
  static const __wchar_t ORDER_IMBALANCE = 'Z';
  static const __wchar_t EQUIPMENT_CHANGEOVER = 'a';
  static const __wchar_t NO_OPEN = 'b';
  static const __wchar_t REGULAR_ETH = 'c';
  static const __wchar_t AUTOMATIC_EXECUTION = 'd';
  static const __wchar_t AUTOMATIC_EXECUTION_ETH = 'e';
  static const __wchar_t FAST_MARKET_ETH = 'f';
  static const __wchar_t INACTIVE_ETH = 'g';
  static const __wchar_t ROTATION = 'h';
  static const __wchar_t ROTATION_ETH = 'i';
  static const __wchar_t HALT = 'j';
  static const __wchar_t HALT_ETH = 'k';
  static const __wchar_t DUE_TO_NEWS_DISSEMINATION = 'l';
  static const __wchar_t DUE_TO_NEWS_PENDING = 'm';
  static const __wchar_t TRADING_RESUME = 'n';
  static const __wchar_t OUT_OF_SEQUENCE = 'o';
  static const __wchar_t BID_SPECIALIST = 'p';
  static const __wchar_t OFFER_SPECIALIST = 'q';
  static const __wchar_t BID_OFFER_SPECIALIST = 'r';
  static const __wchar_t END_OF_DAY_SAM = 's';
  static const __wchar_t FORBIDDEN_SAM = 't';
  static const __wchar_t FROZEN_SAM = 'u';
  static const __wchar_t PREOPENING_SAM = 'v';
  static const __wchar_t OPENING_SAM = 'w';
  static const __wchar_t OPEN_SAM = 'x';
  static const __wchar_t SURVEILLANCE_SAM = 'y';
  static const __wchar_t SUSPENDED_SAM = 'z';
  static const __wchar_t RESERVED_SAM = '0';
  static const __wchar_t NO_ACTIVE_SAM = '1';
  static const __wchar_t RESTRICTED = '2';
  static const __wchar_t NO_MARKET_ACTIVITY = '1000';
  static const __wchar_t NO_DATA_AVAILABLE = '1001';
  static const __wchar_t NOT_APPLICABLE = '1002';
  static const __wchar_t AMOUNT_THRESHOLD_EXCEEDED = '1003';
  QuoteCondition() : StringField(276) {}
    QuoteCondition(String* data) : StringField(276, data) {}
    
  };
  
  public __gc class TradeCondition : public StringField
  {
  public:
  static const int FIELD = 277;
  static const __wchar_t CASH_MARKET = 'A';
  static const __wchar_t AVERAGE_PRICE_TRADE = 'B';
  static const __wchar_t CASH_TRADE = 'C';
  static const __wchar_t NEXT_DAY_MARKET = 'D';
  static const __wchar_t OPENING_REOPENING_TRADE_DETAIL = 'E';
  static const __wchar_t INTRADAY_TRADE_DETAIL = 'F';
  static const __wchar_t RULE127 = 'G';
  static const __wchar_t RULE155 = 'H';
  static const __wchar_t SOLD_LAST = 'I';
  static const __wchar_t NEXT_DAY_TRADE = 'J';
  static const __wchar_t OPENED = 'K';
  static const __wchar_t SELLER = 'L';
  static const __wchar_t SOLD = 'M';
  static const __wchar_t STOPPED_STOCK = 'N';
  static const __wchar_t IMBALANCE_MORE_BUYERS = 'P';
  static const __wchar_t IMBALANCE_MORE_SELLERS = 'Q';
  static const __wchar_t OPENING_PRICE = 'R';
  static const __wchar_t TRADES_RESULTING_FROM_MANUAL_SLOW_QUOTE = 'Y';
  static const __wchar_t TRADES_RESULTING_FROM_INTERMARKET_SWEEP = 'Z';
  static const __wchar_t BARGAIN_CONDITION = 'S';
  static const __wchar_t CONVERTED_PRICE_INDICATOR = 'T';
  static const __wchar_t EXCHANGE_LAST = 'U';
  static const __wchar_t FINAL_PRICE_OF_SESSION = 'V';
  static const __wchar_t EX_PIT = 'W';
  static const __wchar_t CROSSED = 'X';
  static const __wchar_t CANCEL = '0';
  static const __wchar_t VOLUME_ONLY = 'a';
  static const __wchar_t DIRECT_PLUS = 'b';
  static const __wchar_t ACQUISITION = 'c';
  static const __wchar_t BUNCHED = 'd';
  static const __wchar_t DISTRIBUTION = 'e';
  static const __wchar_t BUNCHED_SALE = 'f';
  static const __wchar_t SPLIT_TRADE = 'g';
  static const __wchar_t CANCEL_STOPPED = 'h';
  static const __wchar_t CANCEL_ETH = 'i';
  static const __wchar_t CANCEL_STOPPED_ETH = 'j';
  static const __wchar_t OUT_OF_SEQUENCE_ETH = 'k';
  static const __wchar_t CANCEL_LAST_ETH = 'l';
  static const __wchar_t SOLD_LAST_SALE_ETH = 'm';
  static const __wchar_t CANCEL_LAST = 'n';
  static const __wchar_t SOLD_LAST_SALE = 'o';
  static const __wchar_t CANCEL_OPEN = 'p';
  static const __wchar_t CANCEL_OPEN_ETH = 'q';
  static const __wchar_t OPENED_SALE_ETH = 'r';
  static const __wchar_t CANCEL_ONLY = 's';
  static const __wchar_t CANCEL_ONLY_ETH = 't';
  static const __wchar_t LATE_OPEN_ETH = 'u';
  static const __wchar_t AUTO_EXECUTION_ETH = 'v';
  static const __wchar_t REOPEN = 'w';
  static const __wchar_t REOPEN_ETH = 'x';
  static const __wchar_t ADJUSTED = 'y';
  static const __wchar_t ADJUSTED_ETH = 'z';
  static const __wchar_t SPREAD = 'AA';
  static const __wchar_t SPREAD_ETH = 'AB';
  static const __wchar_t STRADDLE = 'AC';
  static const __wchar_t STRADDLE_ETH = 'AD';
  static const __wchar_t STOPPED = 'AE';
  static const __wchar_t STOPPED_ETH = 'AF';
  static const __wchar_t REGULAR_ETH = 'AG';
  static const __wchar_t COMBO = 'AH';
  static const __wchar_t COMBO_ETH = 'AI';
  static const __wchar_t OFFICIAL_CLOSING_PRICE = 'AJ';
  static const __wchar_t PRIOR_REFERENCE_PRICE = 'AK';
  static const __wchar_t STOPPED_SOLD_LAST = 'AL';
  static const __wchar_t STOPPED_OUT_OF_SEQUENCE = 'AM';
  static const __wchar_t OFFICAL_CLOSING_PRICE = 'AN';
  static const __wchar_t CROSSED2 = 'AO';
  static const __wchar_t FAST_MARKET = 'AP';
  static const __wchar_t AUTOMATIC_EXECUTION = 'AQ';
  static const __wchar_t FORM_T = 'AR';
  static const __wchar_t BASKET_INDEX = 'AS';
  static const __wchar_t BURST_BASKET = 'AT';
  static const __wchar_t NO_MARKET_ACTIVITY = '1000';
  static const __wchar_t NO_DATA_AVAILABLE = '1001';
  static const __wchar_t NOT_APPLICABLE = '1002';
  TradeCondition() : StringField(277) {}
    TradeCondition(String* data) : StringField(277, data) {}
    
  };
  
  public __gc class MDEntryID : public StringField
  {
  public:
  static const int FIELD = 278;
  MDEntryID() : StringField(278) {}
    MDEntryID(String* data) : StringField(278, data) {}
    
  };
  
  public __gc class MDUpdateAction : public CharField
  {
  public:
  static const int FIELD = 279;
  static const __wchar_t NEW = '0';
  static const __wchar_t CHANGE = '1';
  static const __wchar_t DELETE = '2';
  static const __wchar_t DELETE_THRU = '3';
  static const __wchar_t DELETE_FROM = '4';
  MDUpdateAction() : CharField(279) {}
    MDUpdateAction(__wchar_t data) : CharField(279, data) {}
    
  };
  
  public __gc class MDEntryRefID : public StringField
  {
  public:
  static const int FIELD = 280;
  MDEntryRefID() : StringField(280) {}
    MDEntryRefID(String* data) : StringField(280, data) {}
    
  };
  
  public __gc class MDReqRejReason : public CharField
  {
  public:
  static const int FIELD = 281;
  static const __wchar_t UNKNOWN_SYMBOL = '0';
  static const __wchar_t DUPLICATE_MDREQID = '1';
  static const __wchar_t INSUFFICIENT_BANDWIDTH = '2';
  static const __wchar_t INSUFFICIENT_PERMISSIONS = '3';
  static const __wchar_t UNSUPPORTED_SUBSCRIPTIONREQUESTTYPE = '4';
  static const __wchar_t UNSUPPORTED_MARKETDEPTH = '5';
  static const __wchar_t UNSUPPORTED_MDUPDATETYPE = '6';
  static const __wchar_t UNSUPPORTED_AGGREGATEDBOOK = '7';
  static const __wchar_t UNSUPPORTED_MDENTRYTYPE = '8';
  static const __wchar_t UNSUPPORTED_TRADINGSESSIONID = '9';
  static const __wchar_t UNSUPPORTED_SCOPE = 'A';
  static const __wchar_t UNSUPPORTED_OPENCLOSESETTLEFLAG = 'B';
  static const __wchar_t UNSUPPORTED_MDIMPLICITDELETE = 'C';
  static const __wchar_t INSUFFICIENT_CREDIT = 'D';
  MDReqRejReason() : CharField(281) {}
    MDReqRejReason(__wchar_t data) : CharField(281, data) {}
    
  };
  
  public __gc class MDEntryOriginator : public StringField
  {
  public:
  static const int FIELD = 282;
  MDEntryOriginator() : StringField(282) {}
    MDEntryOriginator(String* data) : StringField(282, data) {}
    
  };
  
  public __gc class LocationID : public StringField
  {
  public:
  static const int FIELD = 283;
  LocationID() : StringField(283) {}
    LocationID(String* data) : StringField(283, data) {}
    
  };
  
  public __gc class DeskID : public StringField
  {
  public:
  static const int FIELD = 284;
  DeskID() : StringField(284) {}
    DeskID(String* data) : StringField(284, data) {}
    
  };
  
  public __gc class DeleteReason : public CharField
  {
  public:
  static const int FIELD = 285;
  static const __wchar_t CANCELATION_TRADE_BUST = '0';
  static const __wchar_t ERROR = '1';
  DeleteReason() : CharField(285) {}
    DeleteReason(__wchar_t data) : CharField(285, data) {}
    
  };
  
  public __gc class OpenCloseSettlFlag : public StringField
  {
  public:
  static const int FIELD = 286;
  static const __wchar_t DAILY_OPEN_CLOSE_SETTLEMENT_ENTRY = '0';
  static const __wchar_t SESSION_OPEN_CLOSE_SETTLEMENT_ENTRY = '1';
  static const __wchar_t DELIVERY_SETTLEMENT_ENTRY = '2';
  static const __wchar_t EXPECTED_ENTRY = '3';
  static const __wchar_t ENTRY_FROM_PREVIOUS_BUSINESS_DAY = '4';
  static const __wchar_t THEORETICAL_PRICE_VALUE = '5';
  OpenCloseSettlFlag() : StringField(286) {}
    OpenCloseSettlFlag(String* data) : StringField(286, data) {}
    
  };
  
  public __gc class SellerDays : public IntField
  {
  public:
  static const int FIELD = 287;
  SellerDays() : IntField(287) {}
    SellerDays(int data) : IntField(287, data) {}
    
  };
  
  public __gc class MDEntryBuyer : public StringField
  {
  public:
  static const int FIELD = 288;
  MDEntryBuyer() : StringField(288) {}
    MDEntryBuyer(String* data) : StringField(288, data) {}
    
  };
  
  public __gc class MDEntrySeller : public StringField
  {
  public:
  static const int FIELD = 289;
  MDEntrySeller() : StringField(289) {}
    MDEntrySeller(String* data) : StringField(289, data) {}
    
  };
  
  public __gc class MDEntryPositionNo : public IntField
  {
  public:
  static const int FIELD = 290;
  MDEntryPositionNo() : IntField(290) {}
    MDEntryPositionNo(int data) : IntField(290, data) {}
    
  };
  
  public __gc class FinancialStatus : public StringField
  {
  public:
  static const int FIELD = 291;
  static const __wchar_t BANKRUPT = '1';
  static const __wchar_t PENDING_DELISTING = '2';
  static const __wchar_t RESTRICTED = '3';
  FinancialStatus() : StringField(291) {}
    FinancialStatus(String* data) : StringField(291, data) {}
    
  };
  
  public __gc class CorporateAction : public StringField
  {
  public:
  static const int FIELD = 292;
  static const __wchar_t EX_DIVIDEND = 'A';
  static const __wchar_t EX_DISTRIBUTION = 'B';
  static const __wchar_t EX_RIGHTS = 'C';
  static const __wchar_t NEW = 'D';
  static const __wchar_t EX_INTEREST = 'E';
  static const __wchar_t CASH_DIVIDEND = 'F';
  static const __wchar_t STOCK_DIVIDEND = 'G';
  static const __wchar_t NON_INTEGER_STOCK_SPLIT = 'H';
  static const __wchar_t REVERSE_STOCK_SPLIT = 'I';
  static const __wchar_t STANDARD_INTEGER_STOCK_SPLIT = 'J';
  static const __wchar_t POSITION_CONSOLIDATION = 'K';
  static const __wchar_t LIQUIDATION_REORGANIZATION = 'L';
  static const __wchar_t MERGER_REORGANIZATION = 'M';
  static const __wchar_t RIGHTS_OFFERING = 'N';
  static const __wchar_t SHAREHOLDER_MEETING = 'O';
  static const __wchar_t SPINOFF = 'P';
  static const __wchar_t TENDER_OFFER = 'Q';
  static const __wchar_t WARRANT = 'R';
  static const __wchar_t SPECIAL_ACTION = 'S';
  static const __wchar_t SYMBOL_CONVERSION = 'T';
  static const __wchar_t CUSIP = 'U';
  static const __wchar_t LEAP_ROLLOVER = 'V';
  CorporateAction() : StringField(292) {}
    CorporateAction(String* data) : StringField(292, data) {}
    
  };
  
  public __gc class DefBidSize : public DoubleField
  {
  public:
  static const int FIELD = 293;
  DefBidSize() : DoubleField(293) {}
    DefBidSize(double data) : DoubleField(293, data) {}
    DefBidSize(double data, int decimalPadding) : DoubleField(293, data, decimalPadding) {}
    
  };
  
  public __gc class DefOfferSize : public DoubleField
  {
  public:
  static const int FIELD = 294;
  DefOfferSize() : DoubleField(294) {}
    DefOfferSize(double data) : DoubleField(294, data) {}
    DefOfferSize(double data, int decimalPadding) : DoubleField(294, data, decimalPadding) {}
    
  };
  
  public __gc class NoQuoteEntries : public IntField
  {
  public:
  static const int FIELD = 295;
  NoQuoteEntries() : IntField(295) {}
    NoQuoteEntries(int data) : IntField(295, data) {}
    
  };
  
  public __gc class NoQuoteSets : public IntField
  {
  public:
  static const int FIELD = 296;
  NoQuoteSets() : IntField(296) {}
    NoQuoteSets(int data) : IntField(296, data) {}
    
  };
  
  public __gc class QuoteStatus : public IntField
  {
  public:
  static const int FIELD = 297;
  static const int ACCEPTED = 0;
  static const int CANCELED_FOR_SYMBOL = 1;
  static const int PENDING = 10;
  static const int PASS = 11;
  static const int LOCKED_MARKET_WARNING = 12;
  static const int CROSS_MARKET_WARNING = 13;
  static const int CANCELED_DUE_TO_LOCK_MARKET = 14;
  static const int CANCELED_DUE_TO_CROSS_MARKET = 15;
  static const int CANCELED_FOR_SECURITY_TYPE = 2;
  static const int CANCELED_FOR_UNDERLYING = 3;
  static const int CANCELED_ALL = 4;
  static const int REJECTED = 5;
  static const int REMOVED_FROM_MARKET = 6;
  static const int EXPIRED = 7;
  static const int QUERY = 8;
  static const int QUOTE_NOT_FOUND = 9;
  QuoteStatus() : IntField(297) {}
    QuoteStatus(int data) : IntField(297, data) {}
    
  };
  
  public __gc class QuoteCancelType : public IntField
  {
  public:
  static const int FIELD = 298;
  static const int CANCEL_FOR_SYMBOL = 1;
  static const int CANCEL_FOR_SECURITY_TYPE = 2;
  static const int CANCEL_FOR_UNDERLYING_SYMBOL = 3;
  static const int CANCEL_ALL_QUOTES = 4;
  static const int CANCEL_QUOTE_SPECIFIED_IN_QUOTEID = 5;
  QuoteCancelType() : IntField(298) {}
    QuoteCancelType(int data) : IntField(298, data) {}
    
  };
  
  public __gc class QuoteEntryID : public StringField
  {
  public:
  static const int FIELD = 299;
  QuoteEntryID() : StringField(299) {}
    QuoteEntryID(String* data) : StringField(299, data) {}
    
  };
  
  public __gc class QuoteRejectReason : public IntField
  {
  public:
  static const int FIELD = 300;
  static const int UNKNOWN_SYMBOL = 1;
  static const int EXCHANGE_CLOSED = 2;
  static const int QUOTE_REQUEST_EXCEEDS_LIMIT = 3;
  static const int TOO_LATE_TO_ENTER = 4;
  static const int UNKNOWN_QUOTE = 5;
  static const int DUPLICATE_QUOTE = 6;
  static const int INVALID_BID_ASK_SPREAD = 7;
  static const int INVALID_PRICE = 8;
  static const int NOT_AUTHORIZED_TO_QUOTE_SECURITY = 9;
  static const int OTHER = 99;
  QuoteRejectReason() : IntField(300) {}
    QuoteRejectReason(int data) : IntField(300, data) {}
    
  };
  
  public __gc class QuoteResponseLevel : public IntField
  {
  public:
  static const int FIELD = 301;
  static const int NO_ACKNOWLEDGEMENT = 0;
  static const int ACKNOWLEDGE_ONLY_NEGATIVE_OR_ERRONEOUS_QUOTES = 1;
  static const int ACKNOWLEDGE_EACH_QUOTE_MESSAGES = 2;
  QuoteResponseLevel() : IntField(301) {}
    QuoteResponseLevel(int data) : IntField(301, data) {}
    
  };
  
  public __gc class QuoteSetID : public StringField
  {
  public:
  static const int FIELD = 302;
  QuoteSetID() : StringField(302) {}
    QuoteSetID(String* data) : StringField(302, data) {}
    
  };
  
  public __gc class QuoteRequestType : public IntField
  {
  public:
  static const int FIELD = 303;
  static const int MANUAL = 1;
  static const int AUTOMATIC = 2;
  QuoteRequestType() : IntField(303) {}
    QuoteRequestType(int data) : IntField(303, data) {}
    
  };
  
  public __gc class TotNoQuoteEntries : public IntField
  {
  public:
  static const int FIELD = 304;
  TotNoQuoteEntries() : IntField(304) {}
    TotNoQuoteEntries(int data) : IntField(304, data) {}
    
  };
  
  public __gc class UnderlyingSecurityIDSource : public StringField
  {
  public:
  static const int FIELD = 305;
  UnderlyingSecurityIDSource() : StringField(305) {}
    UnderlyingSecurityIDSource(String* data) : StringField(305, data) {}
    
  };
  
  public __gc class UnderlyingIssuer : public StringField
  {
  public:
  static const int FIELD = 306;
  UnderlyingIssuer() : StringField(306) {}
    UnderlyingIssuer(String* data) : StringField(306, data) {}
    
  };
  
  public __gc class UnderlyingSecurityDesc : public StringField
  {
  public:
  static const int FIELD = 307;
  UnderlyingSecurityDesc() : StringField(307) {}
    UnderlyingSecurityDesc(String* data) : StringField(307, data) {}
    
  };
  
  public __gc class UnderlyingSecurityExchange : public StringField
  {
  public:
  static const int FIELD = 308;
  UnderlyingSecurityExchange() : StringField(308) {}
    UnderlyingSecurityExchange(String* data) : StringField(308, data) {}
    
  };
  
  public __gc class UnderlyingSecurityID : public StringField
  {
  public:
  static const int FIELD = 309;
  UnderlyingSecurityID() : StringField(309) {}
    UnderlyingSecurityID(String* data) : StringField(309, data) {}
    
  };
  
  public __gc class UnderlyingSecurityType : public StringField
  {
  public:
  static const int FIELD = 310;
  UnderlyingSecurityType() : StringField(310) {}
    UnderlyingSecurityType(String* data) : StringField(310, data) {}
    
  };
  
  public __gc class UnderlyingSymbol : public StringField
  {
  public:
  static const int FIELD = 311;
  UnderlyingSymbol() : StringField(311) {}
    UnderlyingSymbol(String* data) : StringField(311, data) {}
    
  };
  
  public __gc class UnderlyingSymbolSfx : public StringField
  {
  public:
  static const int FIELD = 312;
  UnderlyingSymbolSfx() : StringField(312) {}
    UnderlyingSymbolSfx(String* data) : StringField(312, data) {}
    
  };
  
  public __gc class UnderlyingMaturityMonthYear : public StringField
  {
  public:
  static const int FIELD = 313;
  UnderlyingMaturityMonthYear() : StringField(313) {}
    UnderlyingMaturityMonthYear(String* data) : StringField(313, data) {}
    
  };
  
  public __gc class UnderlyingMaturityDay : public StringField
  {
  public:
  static const int FIELD = 314;
  UnderlyingMaturityDay() : StringField(314) {}
    UnderlyingMaturityDay(String* data) : StringField(314, data) {}
    
  };
  
  public __gc class UnderlyingPutOrCall : public IntField
  {
  public:
  static const int FIELD = 315;
  UnderlyingPutOrCall() : IntField(315) {}
    UnderlyingPutOrCall(int data) : IntField(315, data) {}
    
  };
  
  public __gc class UnderlyingStrikePrice : public DoubleField
  {
  public:
  static const int FIELD = 316;
  UnderlyingStrikePrice() : DoubleField(316) {}
    UnderlyingStrikePrice(double data) : DoubleField(316, data) {}
    UnderlyingStrikePrice(double data, int decimalPadding) : DoubleField(316, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingOptAttribute : public CharField
  {
  public:
  static const int FIELD = 317;
  UnderlyingOptAttribute() : CharField(317) {}
    UnderlyingOptAttribute(__wchar_t data) : CharField(317, data) {}
    
  };
  
  public __gc class UnderlyingCurrency : public StringField
  {
  public:
  static const int FIELD = 318;
  UnderlyingCurrency() : StringField(318) {}
    UnderlyingCurrency(String* data) : StringField(318, data) {}
    
  };
  
  public __gc class RatioQty : public DoubleField
  {
  public:
  static const int FIELD = 319;
  RatioQty() : DoubleField(319) {}
    RatioQty(double data) : DoubleField(319, data) {}
    RatioQty(double data, int decimalPadding) : DoubleField(319, data, decimalPadding) {}
    
  };
  
  public __gc class SecurityReqID : public StringField
  {
  public:
  static const int FIELD = 320;
  SecurityReqID() : StringField(320) {}
    SecurityReqID(String* data) : StringField(320, data) {}
    
  };
  
  public __gc class SecurityRequestType : public IntField
  {
  public:
  static const int FIELD = 321;
  static const int REQUEST_SECURITY_IDENTITY_AND_SPECIFICATIONS = 0;
  static const int REQUEST_SECURITY_IDENTITY_FOR_THE_SPECIFICATIONS_PROVIDED = 1;
  static const int REQUEST_LIST_SECURITY_TYPES = 2;
  static const int REQUEST_LIST_SECURITIES = 3;
  SecurityRequestType() : IntField(321) {}
    SecurityRequestType(int data) : IntField(321, data) {}
    
  };
  
  public __gc class SecurityResponseID : public StringField
  {
  public:
  static const int FIELD = 322;
  SecurityResponseID() : StringField(322) {}
    SecurityResponseID(String* data) : StringField(322, data) {}
    
  };
  
  public __gc class SecurityResponseType : public IntField
  {
  public:
  static const int FIELD = 323;
  static const int ACCEPT_SECURITY_PROPOSAL_AS_IS = 1;
  static const int ACCEPT_SECURITY_PROPOSAL_WITH_REVISIONS_AS_INDICATED_IN_THE_MESSAGE = 2;
  static const int LIST_OF_SECURITY_TYPES_RETURNED_PER_REQUEST = 3;
  static const int LIST_OF_SECURITIES_RETURNED_PER_REQUEST = 4;
  static const int REJECT_SECURITY_PROPOSAL = 5;
  static const int CAN_NOT_MATCH_SELECTION_CRITERIA = 6;
  SecurityResponseType() : IntField(323) {}
    SecurityResponseType(int data) : IntField(323, data) {}
    
  };
  
  public __gc class SecurityStatusReqID : public StringField
  {
  public:
  static const int FIELD = 324;
  SecurityStatusReqID() : StringField(324) {}
    SecurityStatusReqID(String* data) : StringField(324, data) {}
    
  };
  
  public __gc class UnsolicitedIndicator : public BooleanField
  {
  public:
  static const int FIELD = 325;
  UnsolicitedIndicator() : BooleanField(325) {}
    UnsolicitedIndicator(bool data) : BooleanField(325, data) {}
    
  };
  
  public __gc class SecurityTradingStatus : public IntField
  {
  public:
  static const int FIELD = 326;
  static const int OPENING_DELAY = 1;
  static const int MARKET_ON_CLOSE_IMBALANCE_SELL = 10;
  static const int NOT_ASSIGNED = 11;
  static const int NO_MARKET_IMBALANCE = 12;
  static const int NO_MARKET_ON_CLOSE_IMBALANCE = 13;
  static const int ITS_PRE_OPENING = 14;
  static const int NEW_PRICE_INDICATION = 15;
  static const int TRADE_DISSEMINATION_TIME = 16;
  static const int READY_TO_TRADE_START_OF_SESSION = 17;
  static const int NOT_AVAILABLE_FOR_TRADING_END_OF_SESSION = 18;
  static const int NOT_TRADED_ON_THIS_MARKET = 19;
  static const int TRADING_HALT = 2;
  static const int UNKNOWN_OR_INVALID = 20;
  static const int PRE_OPEN = 21;
  static const int OPENING_ROTATION = 22;
  static const int FAST_MARKET = 23;
  static const int RESUME = 3;
  static const int NO_OPEN_NO_RESUME = 4;
  static const int PRICE_INDICATION = 5;
  static const int TRADING_RANGE_INDICATION = 6;
  static const int MARKET_IMBALANCE_BUY = 7;
  static const int MARKET_IMBALANCE_SELL = 8;
  static const int MARKET_ON_CLOSE_IMBALANCE_BUY = 9;
  SecurityTradingStatus() : IntField(326) {}
    SecurityTradingStatus(int data) : IntField(326, data) {}
    
  };
  
  public __gc class HaltReason : public CharField
  {
  public:
  static const int FIELD = 327;
  static const __wchar_t NEWS_DISSEMINATION = 'D';
  static const __wchar_t ORDER_INFLUX = 'E';
  static const __wchar_t ORDER_IMBALANCE = 'I';
  static const __wchar_t ADDITIONAL_INFORMATION = 'M';
  static const __wchar_t NEWS_PENDING = 'P';
  static const __wchar_t EQUIPMENT_CHANGEOVER = 'X';
  HaltReason() : CharField(327) {}
    HaltReason(__wchar_t data) : CharField(327, data) {}
    
  };
  
  public __gc class InViewOfCommon : public BooleanField
  {
  public:
  static const int FIELD = 328;
  InViewOfCommon() : BooleanField(328) {}
    InViewOfCommon(bool data) : BooleanField(328, data) {}
    
  };
  
  public __gc class DueToRelated : public BooleanField
  {
  public:
  static const int FIELD = 329;
  DueToRelated() : BooleanField(329) {}
    DueToRelated(bool data) : BooleanField(329, data) {}
    
  };
  
  public __gc class BuyVolume : public DoubleField
  {
  public:
  static const int FIELD = 330;
  BuyVolume() : DoubleField(330) {}
    BuyVolume(double data) : DoubleField(330, data) {}
    BuyVolume(double data, int decimalPadding) : DoubleField(330, data, decimalPadding) {}
    
  };
  
  public __gc class SellVolume : public DoubleField
  {
  public:
  static const int FIELD = 331;
  SellVolume() : DoubleField(331) {}
    SellVolume(double data) : DoubleField(331, data) {}
    SellVolume(double data, int decimalPadding) : DoubleField(331, data, decimalPadding) {}
    
  };
  
  public __gc class HighPx : public DoubleField
  {
  public:
  static const int FIELD = 332;
  HighPx() : DoubleField(332) {}
    HighPx(double data) : DoubleField(332, data) {}
    HighPx(double data, int decimalPadding) : DoubleField(332, data, decimalPadding) {}
    
  };
  
  public __gc class LowPx : public DoubleField
  {
  public:
  static const int FIELD = 333;
  LowPx() : DoubleField(333) {}
    LowPx(double data) : DoubleField(333, data) {}
    LowPx(double data, int decimalPadding) : DoubleField(333, data, decimalPadding) {}
    
  };
  
  public __gc class Adjustment : public IntField
  {
  public:
  static const int FIELD = 334;
  static const int CANCEL = 1;
  static const int ERROR = 2;
  static const int CORRECTION = 3;
  Adjustment() : IntField(334) {}
    Adjustment(int data) : IntField(334, data) {}
    
  };
  
  public __gc class TradSesReqID : public StringField
  {
  public:
  static const int FIELD = 335;
  TradSesReqID() : StringField(335) {}
    TradSesReqID(String* data) : StringField(335, data) {}
    
  };
  
  public __gc class TradingSessionID : public StringField
  {
  public:
  static const int FIELD = 336;
  TradingSessionID() : StringField(336) {}
    TradingSessionID(String* data) : StringField(336, data) {}
    
  };
  
  public __gc class ContraTrader : public StringField
  {
  public:
  static const int FIELD = 337;
  ContraTrader() : StringField(337) {}
    ContraTrader(String* data) : StringField(337, data) {}
    
  };
  
  public __gc class TradSesMethod : public IntField
  {
  public:
  static const int FIELD = 338;
  static const int ELECTRONIC = 1;
  static const int OPEN_OUTCRY = 2;
  static const int TWO_PARTY = 3;
  TradSesMethod() : IntField(338) {}
    TradSesMethod(int data) : IntField(338, data) {}
    
  };
  
  public __gc class TradSesMode : public IntField
  {
  public:
  static const int FIELD = 339;
  static const int TESTING = 1;
  static const int SIMULATED = 2;
  static const int PRODUCTION = 3;
  TradSesMode() : IntField(339) {}
    TradSesMode(int data) : IntField(339, data) {}
    
  };
  
  public __gc class TradSesStatus : public IntField
  {
  public:
  static const int FIELD = 340;
  static const int UNKNOWN = 0;
  static const int HALTED = 1;
  static const int OPEN = 2;
  static const int CLOSED = 3;
  static const int PRE_OPEN = 4;
  static const int PRE_CLOSE = 5;
  static const int REQUEST_REJECTED = 6;
  TradSesStatus() : IntField(340) {}
    TradSesStatus(int data) : IntField(340, data) {}
    
  };
  
  public __gc class TradSesStartTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 341;
  TradSesStartTime() : UtcTimeStampField(341) {}
    TradSesStartTime(DateTime data) : UtcTimeStampField(341, data) {}
    TradSesStartTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(341, data, showMilliseconds) {}
    
  };
  
  public __gc class TradSesOpenTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 342;
  TradSesOpenTime() : UtcTimeStampField(342) {}
    TradSesOpenTime(DateTime data) : UtcTimeStampField(342, data) {}
    TradSesOpenTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(342, data, showMilliseconds) {}
    
  };
  
  public __gc class TradSesPreCloseTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 343;
  TradSesPreCloseTime() : UtcTimeStampField(343) {}
    TradSesPreCloseTime(DateTime data) : UtcTimeStampField(343, data) {}
    TradSesPreCloseTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(343, data, showMilliseconds) {}
    
  };
  
  public __gc class TradSesCloseTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 344;
  TradSesCloseTime() : UtcTimeStampField(344) {}
    TradSesCloseTime(DateTime data) : UtcTimeStampField(344, data) {}
    TradSesCloseTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(344, data, showMilliseconds) {}
    
  };
  
  public __gc class TradSesEndTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 345;
  TradSesEndTime() : UtcTimeStampField(345) {}
    TradSesEndTime(DateTime data) : UtcTimeStampField(345, data) {}
    TradSesEndTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(345, data, showMilliseconds) {}
    
  };
  
  public __gc class NumberOfOrders : public IntField
  {
  public:
  static const int FIELD = 346;
  NumberOfOrders() : IntField(346) {}
    NumberOfOrders(int data) : IntField(346, data) {}
    
  };
  
  public __gc class EncodedIssuerLen : public IntField
  {
  public:
  static const int FIELD = 348;
  EncodedIssuerLen() : IntField(348) {}
    EncodedIssuerLen(int data) : IntField(348, data) {}
    
  };
  
  public __gc class EncodedIssuer : public StringField
  {
  public:
  static const int FIELD = 349;
  EncodedIssuer() : StringField(349) {}
    EncodedIssuer(String* data) : StringField(349, data) {}
    
  };
  
  public __gc class EncodedSecurityDescLen : public IntField
  {
  public:
  static const int FIELD = 350;
  EncodedSecurityDescLen() : IntField(350) {}
    EncodedSecurityDescLen(int data) : IntField(350, data) {}
    
  };
  
  public __gc class EncodedSecurityDesc : public StringField
  {
  public:
  static const int FIELD = 351;
  EncodedSecurityDesc() : StringField(351) {}
    EncodedSecurityDesc(String* data) : StringField(351, data) {}
    
  };
  
  public __gc class EncodedListExecInstLen : public IntField
  {
  public:
  static const int FIELD = 352;
  EncodedListExecInstLen() : IntField(352) {}
    EncodedListExecInstLen(int data) : IntField(352, data) {}
    
  };
  
  public __gc class EncodedListExecInst : public StringField
  {
  public:
  static const int FIELD = 353;
  EncodedListExecInst() : StringField(353) {}
    EncodedListExecInst(String* data) : StringField(353, data) {}
    
  };
  
  public __gc class EncodedSubjectLen : public IntField
  {
  public:
  static const int FIELD = 356;
  EncodedSubjectLen() : IntField(356) {}
    EncodedSubjectLen(int data) : IntField(356, data) {}
    
  };
  
  public __gc class EncodedSubject : public StringField
  {
  public:
  static const int FIELD = 357;
  EncodedSubject() : StringField(357) {}
    EncodedSubject(String* data) : StringField(357, data) {}
    
  };
  
  public __gc class EncodedHeadlineLen : public IntField
  {
  public:
  static const int FIELD = 358;
  EncodedHeadlineLen() : IntField(358) {}
    EncodedHeadlineLen(int data) : IntField(358, data) {}
    
  };
  
  public __gc class EncodedHeadline : public StringField
  {
  public:
  static const int FIELD = 359;
  EncodedHeadline() : StringField(359) {}
    EncodedHeadline(String* data) : StringField(359, data) {}
    
  };
  
  public __gc class EncodedAllocTextLen : public IntField
  {
  public:
  static const int FIELD = 360;
  EncodedAllocTextLen() : IntField(360) {}
    EncodedAllocTextLen(int data) : IntField(360, data) {}
    
  };
  
  public __gc class EncodedAllocText : public StringField
  {
  public:
  static const int FIELD = 361;
  EncodedAllocText() : StringField(361) {}
    EncodedAllocText(String* data) : StringField(361, data) {}
    
  };
  
  public __gc class EncodedUnderlyingIssuerLen : public IntField
  {
  public:
  static const int FIELD = 362;
  EncodedUnderlyingIssuerLen() : IntField(362) {}
    EncodedUnderlyingIssuerLen(int data) : IntField(362, data) {}
    
  };
  
  public __gc class EncodedUnderlyingIssuer : public StringField
  {
  public:
  static const int FIELD = 363;
  EncodedUnderlyingIssuer() : StringField(363) {}
    EncodedUnderlyingIssuer(String* data) : StringField(363, data) {}
    
  };
  
  public __gc class EncodedUnderlyingSecurityDescLen : public IntField
  {
  public:
  static const int FIELD = 364;
  EncodedUnderlyingSecurityDescLen() : IntField(364) {}
    EncodedUnderlyingSecurityDescLen(int data) : IntField(364, data) {}
    
  };
  
  public __gc class EncodedUnderlyingSecurityDesc : public StringField
  {
  public:
  static const int FIELD = 365;
  EncodedUnderlyingSecurityDesc() : StringField(365) {}
    EncodedUnderlyingSecurityDesc(String* data) : StringField(365, data) {}
    
  };
  
  public __gc class AllocPrice : public DoubleField
  {
  public:
  static const int FIELD = 366;
  AllocPrice() : DoubleField(366) {}
    AllocPrice(double data) : DoubleField(366, data) {}
    AllocPrice(double data, int decimalPadding) : DoubleField(366, data, decimalPadding) {}
    
  };
  
  public __gc class QuoteSetValidUntilTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 367;
  QuoteSetValidUntilTime() : UtcTimeStampField(367) {}
    QuoteSetValidUntilTime(DateTime data) : UtcTimeStampField(367, data) {}
    QuoteSetValidUntilTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(367, data, showMilliseconds) {}
    
  };
  
  public __gc class QuoteEntryRejectReason : public IntField
  {
  public:
  static const int FIELD = 368;
  static const int UNKNOWN_SYMBOL = 1;
  static const int EXCHANGE_CLOSED = 2;
  static const int QUOTE_EXCEEDS_LIMIT = 3;
  static const int TOO_LATE_TO_ENTER = 4;
  static const int UNKNOWN_QUOTE = 5;
  static const int DUPLICATE_QUOTE = 6;
  static const int INVALID_BID_ASK_SPREAD = 7;
  static const int INVALID_PRICE = 8;
  static const int NOT_AUTHORIZED_TO_QUOTE_SECURITY = 9;
  static const int OTHER = 99;
  QuoteEntryRejectReason() : IntField(368) {}
    QuoteEntryRejectReason(int data) : IntField(368, data) {}
    
  };
  
  public __gc class OnBehalfOfSendingTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 370;
  OnBehalfOfSendingTime() : UtcTimeStampField(370) {}
    OnBehalfOfSendingTime(DateTime data) : UtcTimeStampField(370, data) {}
    OnBehalfOfSendingTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(370, data, showMilliseconds) {}
    
  };
  
  public __gc class BidRequestTransType : public CharField
  {
  public:
  static const int FIELD = 374;
  static const __wchar_t CANCEL = 'C';
  static const __wchar_t NEW = 'N';
  BidRequestTransType() : CharField(374) {}
    BidRequestTransType(__wchar_t data) : CharField(374, data) {}
    
  };
  
  public __gc class ContraBroker : public StringField
  {
  public:
  static const int FIELD = 375;
  ContraBroker() : StringField(375) {}
    ContraBroker(String* data) : StringField(375, data) {}
    
  };
  
  public __gc class ComplianceID : public StringField
  {
  public:
  static const int FIELD = 376;
  ComplianceID() : StringField(376) {}
    ComplianceID(String* data) : StringField(376, data) {}
    
  };
  
  public __gc class SolicitedFlag : public BooleanField
  {
  public:
  static const int FIELD = 377;
  SolicitedFlag() : BooleanField(377) {}
    SolicitedFlag(bool data) : BooleanField(377, data) {}
    
  };
  
  public __gc class ExecRestatementReason : public IntField
  {
  public:
  static const int FIELD = 378;
  static const int GT_CORPORATE_ACTION = 0;
  static const int GT_RENEWAL_RESTATEMENT = 1;
  static const int WAREHOUSE_RECAP = 10;
  static const int VERBAL_CHANGE = 2;
  static const int REPRICING_OF_ORDER = 3;
  static const int BROKER_OPTION = 4;
  static const int PARTIAL_DECLINE_OF_ORDERQTY = 5;
  static const int CANCEL_ON_TRADING_HALT = 6;
  static const int CANCEL_ON_SYSTEM_FAILURE = 7;
  static const int MARKET_OPTION = 8;
  static const int CANCELED_NOT_BEST = 9;
  static const int OTHER = 99;
  static const int PEG_REFRESH = 11;
  ExecRestatementReason() : IntField(378) {}
    ExecRestatementReason(int data) : IntField(378, data) {}
    
  };
  
  public __gc class BusinessRejectRefID : public StringField
  {
  public:
  static const int FIELD = 379;
  BusinessRejectRefID() : StringField(379) {}
    BusinessRejectRefID(String* data) : StringField(379, data) {}
    
  };
  
  public __gc class BusinessRejectReason : public IntField
  {
  public:
  static const int FIELD = 380;
  static const int OTHER = 0;
  static const int UNKOWN_ID = 1;
  static const int UNKNOWN_SECURITY = 2;
  static const int UNSUPPORTED_MESSAGE_TYPE = 3;
  static const int APPLICATION_NOT_AVAILABLE = 4;
  static const int CONDITIONALLY_REQUIRED_FIELD_MISSING = 5;
  static const int NOT_AUTHORIZED = 6;
  static const int DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME = 7;
  static const int INVALID_PRICE_INCREMENT = 18;
  BusinessRejectReason() : IntField(380) {}
    BusinessRejectReason(int data) : IntField(380, data) {}
    
  };
  
  public __gc class GrossTradeAmt : public DoubleField
  {
  public:
  static const int FIELD = 381;
  GrossTradeAmt() : DoubleField(381) {}
    GrossTradeAmt(double data) : DoubleField(381, data) {}
    GrossTradeAmt(double data, int decimalPadding) : DoubleField(381, data, decimalPadding) {}
    
  };
  
  public __gc class NoContraBrokers : public IntField
  {
  public:
  static const int FIELD = 382;
  NoContraBrokers() : IntField(382) {}
    NoContraBrokers(int data) : IntField(382, data) {}
    
  };
  
  public __gc class NoTradingSessions : public IntField
  {
  public:
  static const int FIELD = 386;
  NoTradingSessions() : IntField(386) {}
    NoTradingSessions(int data) : IntField(386, data) {}
    
  };
  
  public __gc class TotalVolumeTraded : public DoubleField
  {
  public:
  static const int FIELD = 387;
  TotalVolumeTraded() : DoubleField(387) {}
    TotalVolumeTraded(double data) : DoubleField(387, data) {}
    TotalVolumeTraded(double data, int decimalPadding) : DoubleField(387, data, decimalPadding) {}
    
  };
  
  public __gc class DiscretionInst : public CharField
  {
  public:
  static const int FIELD = 388;
  static const __wchar_t RELATED_TO_DISPLAYED_PRICE = '0';
  static const __wchar_t RELATED_TO_MARKET_PRICE = '1';
  static const __wchar_t RELATED_TO_PRIMARY_PRICE = '2';
  static const __wchar_t RELATED_TO_LOCAL_PRIMARY_PRICE = '3';
  static const __wchar_t RELATED_TO_MIDPOINT_PRICE = '4';
  static const __wchar_t RELATED_TO_LAST_TRADE_PRICE = '5';
  static const __wchar_t RELATED_TO_VWAP = '6';
  static const __wchar_t AVERAGE_PRICE_GUARANTEE = '7';
  DiscretionInst() : CharField(388) {}
    DiscretionInst(__wchar_t data) : CharField(388, data) {}
    
  };
  
  public __gc class DiscretionOffsetValue : public DoubleField
  {
  public:
  static const int FIELD = 389;
  DiscretionOffsetValue() : DoubleField(389) {}
    DiscretionOffsetValue(double data) : DoubleField(389, data) {}
    DiscretionOffsetValue(double data, int decimalPadding) : DoubleField(389, data, decimalPadding) {}
    
  };
  
  public __gc class BidID : public StringField
  {
  public:
  static const int FIELD = 390;
  BidID() : StringField(390) {}
    BidID(String* data) : StringField(390, data) {}
    
  };
  
  public __gc class ClientBidID : public StringField
  {
  public:
  static const int FIELD = 391;
  ClientBidID() : StringField(391) {}
    ClientBidID(String* data) : StringField(391, data) {}
    
  };
  
  public __gc class ListName : public StringField
  {
  public:
  static const int FIELD = 392;
  ListName() : StringField(392) {}
    ListName(String* data) : StringField(392, data) {}
    
  };
  
  public __gc class TotNoRelatedSym : public IntField
  {
  public:
  static const int FIELD = 393;
  TotNoRelatedSym() : IntField(393) {}
    TotNoRelatedSym(int data) : IntField(393, data) {}
    
  };
  
  public __gc class BidType : public IntField
  {
  public:
  static const int FIELD = 394;
  static const int NON_DISCLOSED = 1;
  static const int DISCLOSED_STYLE = 2;
  static const int NO_BIDDING_PROCESS = 3;
  BidType() : IntField(394) {}
    BidType(int data) : IntField(394, data) {}
    
  };
  
  public __gc class NumTickets : public IntField
  {
  public:
  static const int FIELD = 395;
  NumTickets() : IntField(395) {}
    NumTickets(int data) : IntField(395, data) {}
    
  };
  
  public __gc class SideValue1 : public DoubleField
  {
  public:
  static const int FIELD = 396;
  SideValue1() : DoubleField(396) {}
    SideValue1(double data) : DoubleField(396, data) {}
    SideValue1(double data, int decimalPadding) : DoubleField(396, data, decimalPadding) {}
    
  };
  
  public __gc class SideValue2 : public DoubleField
  {
  public:
  static const int FIELD = 397;
  SideValue2() : DoubleField(397) {}
    SideValue2(double data) : DoubleField(397, data) {}
    SideValue2(double data, int decimalPadding) : DoubleField(397, data, decimalPadding) {}
    
  };
  
  public __gc class NoBidDescriptors : public IntField
  {
  public:
  static const int FIELD = 398;
  NoBidDescriptors() : IntField(398) {}
    NoBidDescriptors(int data) : IntField(398, data) {}
    
  };
  
  public __gc class BidDescriptorType : public IntField
  {
  public:
  static const int FIELD = 399;
  static const int SECTOR = 1;
  static const int COUNTRY = 2;
  static const int INDEX = 3;
  BidDescriptorType() : IntField(399) {}
    BidDescriptorType(int data) : IntField(399, data) {}
    
  };
  
  public __gc class BidDescriptor : public StringField
  {
  public:
  static const int FIELD = 400;
  BidDescriptor() : StringField(400) {}
    BidDescriptor(String* data) : StringField(400, data) {}
    
  };
  
  public __gc class SideValueInd : public IntField
  {
  public:
  static const int FIELD = 401;
  static const int SIDEVALUE1 = 1;
  static const int SIDEVALUE2 = 2;
  SideValueInd() : IntField(401) {}
    SideValueInd(int data) : IntField(401, data) {}
    
  };
  
  public __gc class LiquidityPctLow : public DoubleField
  {
  public:
  static const int FIELD = 402;
  LiquidityPctLow() : DoubleField(402) {}
    LiquidityPctLow(double data) : DoubleField(402, data) {}
    LiquidityPctLow(double data, int decimalPadding) : DoubleField(402, data, decimalPadding) {}
    
  };
  
  public __gc class LiquidityPctHigh : public DoubleField
  {
  public:
  static const int FIELD = 403;
  LiquidityPctHigh() : DoubleField(403) {}
    LiquidityPctHigh(double data) : DoubleField(403, data) {}
    LiquidityPctHigh(double data, int decimalPadding) : DoubleField(403, data, decimalPadding) {}
    
  };
  
  public __gc class LiquidityValue : public DoubleField
  {
  public:
  static const int FIELD = 404;
  LiquidityValue() : DoubleField(404) {}
    LiquidityValue(double data) : DoubleField(404, data) {}
    LiquidityValue(double data, int decimalPadding) : DoubleField(404, data, decimalPadding) {}
    
  };
  
  public __gc class EFPTrackingError : public DoubleField
  {
  public:
  static const int FIELD = 405;
  EFPTrackingError() : DoubleField(405) {}
    EFPTrackingError(double data) : DoubleField(405, data) {}
    EFPTrackingError(double data, int decimalPadding) : DoubleField(405, data, decimalPadding) {}
    
  };
  
  public __gc class FairValue : public DoubleField
  {
  public:
  static const int FIELD = 406;
  FairValue() : DoubleField(406) {}
    FairValue(double data) : DoubleField(406, data) {}
    FairValue(double data, int decimalPadding) : DoubleField(406, data, decimalPadding) {}
    
  };
  
  public __gc class OutsideIndexPct : public DoubleField
  {
  public:
  static const int FIELD = 407;
  OutsideIndexPct() : DoubleField(407) {}
    OutsideIndexPct(double data) : DoubleField(407, data) {}
    OutsideIndexPct(double data, int decimalPadding) : DoubleField(407, data, decimalPadding) {}
    
  };
  
  public __gc class ValueOfFutures : public DoubleField
  {
  public:
  static const int FIELD = 408;
  ValueOfFutures() : DoubleField(408) {}
    ValueOfFutures(double data) : DoubleField(408, data) {}
    ValueOfFutures(double data, int decimalPadding) : DoubleField(408, data, decimalPadding) {}
    
  };
  
  public __gc class LiquidityIndType : public IntField
  {
  public:
  static const int FIELD = 409;
  static const int FIVEDAY_MOVING_AVERAGE = 1;
  static const int TWENTYDAY_MOVING_AVERAGE = 2;
  static const int NORMAL_MARKET_SIZE = 3;
  static const int OTHER = 4;
  LiquidityIndType() : IntField(409) {}
    LiquidityIndType(int data) : IntField(409, data) {}
    
  };
  
  public __gc class WtAverageLiquidity : public DoubleField
  {
  public:
  static const int FIELD = 410;
  WtAverageLiquidity() : DoubleField(410) {}
    WtAverageLiquidity(double data) : DoubleField(410, data) {}
    WtAverageLiquidity(double data, int decimalPadding) : DoubleField(410, data, decimalPadding) {}
    
  };
  
  public __gc class ExchangeForPhysical : public BooleanField
  {
  public:
  static const int FIELD = 411;
  ExchangeForPhysical() : BooleanField(411) {}
    ExchangeForPhysical(bool data) : BooleanField(411, data) {}
    
  };
  
  public __gc class OutMainCntryUIndex : public DoubleField
  {
  public:
  static const int FIELD = 412;
  OutMainCntryUIndex() : DoubleField(412) {}
    OutMainCntryUIndex(double data) : DoubleField(412, data) {}
    OutMainCntryUIndex(double data, int decimalPadding) : DoubleField(412, data, decimalPadding) {}
    
  };
  
  public __gc class CrossPercent : public DoubleField
  {
  public:
  static const int FIELD = 413;
  CrossPercent() : DoubleField(413) {}
    CrossPercent(double data) : DoubleField(413, data) {}
    CrossPercent(double data, int decimalPadding) : DoubleField(413, data, decimalPadding) {}
    
  };
  
  public __gc class ProgRptReqs : public IntField
  {
  public:
  static const int FIELD = 414;
  static const int BUYSIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUSREQUEST = 1;
  static const int SELLSIDE_PERIODICALLY_SENDS_STATUS_USING_LISTSTATUS = 2;
  static const int REAL_TIME_EXECUTION_REPORTS = 3;
  ProgRptReqs() : IntField(414) {}
    ProgRptReqs(int data) : IntField(414, data) {}
    
  };
  
  public __gc class ProgPeriodInterval : public IntField
  {
  public:
  static const int FIELD = 415;
  ProgPeriodInterval() : IntField(415) {}
    ProgPeriodInterval(int data) : IntField(415, data) {}
    
  };
  
  public __gc class IncTaxInd : public IntField
  {
  public:
  static const int FIELD = 416;
  static const int NET = 1;
  static const int GROSS = 2;
  IncTaxInd() : IntField(416) {}
    IncTaxInd(int data) : IntField(416, data) {}
    
  };
  
  public __gc class NumBidders : public IntField
  {
  public:
  static const int FIELD = 417;
  NumBidders() : IntField(417) {}
    NumBidders(int data) : IntField(417, data) {}
    
  };
  
  public __gc class BidTradeType : public CharField
  {
  public:
  static const int FIELD = 418;
  static const __wchar_t AGENCY = 'A';
  static const __wchar_t VWAP_GUARANTEE = 'G';
  static const __wchar_t GUARANTEED_CLOSE = 'J';
  static const __wchar_t RISK_TRADE = 'R';
  BidTradeType() : CharField(418) {}
    BidTradeType(__wchar_t data) : CharField(418, data) {}
    
  };
  
  public __gc class BasisPxType : public CharField
  {
  public:
  static const int FIELD = 419;
  static const __wchar_t CLOSING_PRICE_AT_MORNING_SESSION = '2';
  static const __wchar_t CLOSING_PRICE = '3';
  static const __wchar_t CURRENT_PRICE = '4';
  static const __wchar_t SQ = '5';
  static const __wchar_t VWAP_THROUGH_A_DAY = '6';
  static const __wchar_t VWAP_THROUGH_A_MORNING_SESSION = '7';
  static const __wchar_t VWAP_THROUGH_AN_AFTERNOON_SESSION = '8';
  static const __wchar_t VWAP_THROUGH_A_DAY_EXCEPT_YORI = '9';
  static const __wchar_t VWAP_THROUGH_A_MORNING_SESSION_EXCEPT_YORI = 'A';
  static const __wchar_t VWAP_THROUGH_AN_AFTERNOON_SESSION_EXCEPT_YORI = 'B';
  static const __wchar_t STRIKE = 'C';
  static const __wchar_t OPEN = 'D';
  static const __wchar_t OTHERS = 'Z';
  BasisPxType() : CharField(419) {}
    BasisPxType(__wchar_t data) : CharField(419, data) {}
    
  };
  
  public __gc class NoBidComponents : public IntField
  {
  public:
  static const int FIELD = 420;
  NoBidComponents() : IntField(420) {}
    NoBidComponents(int data) : IntField(420, data) {}
    
  };
  
  public __gc class Country : public StringField
  {
  public:
  static const int FIELD = 421;
  Country() : StringField(421) {}
    Country(String* data) : StringField(421, data) {}
    
  };
  
  public __gc class TotNoStrikes : public IntField
  {
  public:
  static const int FIELD = 422;
  TotNoStrikes() : IntField(422) {}
    TotNoStrikes(int data) : IntField(422, data) {}
    
  };
  
  public __gc class PriceType : public IntField
  {
  public:
  static const int FIELD = 423;
  static const int PERCENTAGE = 1;
  static const int FIXED_CABINET_TRADE_PRICE = 10;
  static const int VARIABLE_CABINET_TRADE_PRICE = 11;
  static const int PER_UNIT = 2;
  static const int FIXED_AMOUNT = 3;
  static const int DISCOUNT = 4;
  static const int PREMIUM = 5;
  static const int SPREAD = 6;
  static const int TED_PRICE = 7;
  static const int TED_YIELD = 8;
  static const int YIELD = 9;
  static const int PRODUCT_TICKS_IN_HALFS = 13;
  static const int PRODUCT_TICKS_IN_FOURTHS = 14;
  static const int PRODUCT_TICKS_IN_EIGHTS = 15;
  static const int PRODUCT_TICKS_IN_SIXTEENTHS = 16;
  static const int PRODUCT_TICKS_IN_THIRTY_SECONDS = 17;
  static const int PRODUCT_TICKS_IN_SIXTY_FORTHS = 18;
  static const int PRODUCT_TICKS_IN_ONE_TWENTY_EIGHTS = 19;
  PriceType() : IntField(423) {}
    PriceType(int data) : IntField(423, data) {}
    
  };
  
  public __gc class DayOrderQty : public DoubleField
  {
  public:
  static const int FIELD = 424;
  DayOrderQty() : DoubleField(424) {}
    DayOrderQty(double data) : DoubleField(424, data) {}
    DayOrderQty(double data, int decimalPadding) : DoubleField(424, data, decimalPadding) {}
    
  };
  
  public __gc class DayCumQty : public DoubleField
  {
  public:
  static const int FIELD = 425;
  DayCumQty() : DoubleField(425) {}
    DayCumQty(double data) : DoubleField(425, data) {}
    DayCumQty(double data, int decimalPadding) : DoubleField(425, data, decimalPadding) {}
    
  };
  
  public __gc class DayAvgPx : public DoubleField
  {
  public:
  static const int FIELD = 426;
  DayAvgPx() : DoubleField(426) {}
    DayAvgPx(double data) : DoubleField(426, data) {}
    DayAvgPx(double data, int decimalPadding) : DoubleField(426, data, decimalPadding) {}
    
  };
  
  public __gc class GTBookingInst : public IntField
  {
  public:
  static const int FIELD = 427;
  static const int BOOK_OUT_ALL_TRADES_ON_DAY_OF_EXECUTION = 0;
  static const int ACCUMULATE_EXECUTIONS_UNTIL_ORDER_IS_FILLED_OR_EXPIRES = 1;
  static const int ACCUMULATE_UNTIL_VERBALLY_NOTIFIED_OTHERWISE = 2;
  GTBookingInst() : IntField(427) {}
    GTBookingInst(int data) : IntField(427, data) {}
    
  };
  
  public __gc class NoStrikes : public IntField
  {
  public:
  static const int FIELD = 428;
  NoStrikes() : IntField(428) {}
    NoStrikes(int data) : IntField(428, data) {}
    
  };
  
  public __gc class ListStatusType : public IntField
  {
  public:
  static const int FIELD = 429;
  static const int ACK = 1;
  static const int RESPONSE = 2;
  static const int TIMED = 3;
  static const int EXECSTARTED = 4;
  static const int ALLDONE = 5;
  static const int ALERT = 6;
  ListStatusType() : IntField(429) {}
    ListStatusType(int data) : IntField(429, data) {}
    
  };
  
  public __gc class NetGrossInd : public IntField
  {
  public:
  static const int FIELD = 430;
  static const int NET = 1;
  static const int GROSS = 2;
  NetGrossInd() : IntField(430) {}
    NetGrossInd(int data) : IntField(430, data) {}
    
  };
  
  public __gc class ListOrderStatus : public IntField
  {
  public:
  static const int FIELD = 431;
  static const int INBIDDINGPROCESS = 1;
  static const int RECEIVEDFOREXECUTION = 2;
  static const int EXECUTING = 3;
  static const int CANCELING = 4;
  static const int ALERT = 5;
  static const int ALL_DONE = 6;
  static const int REJECT = 7;
  ListOrderStatus() : IntField(431) {}
    ListOrderStatus(int data) : IntField(431, data) {}
    
  };
  
  public __gc class ExpireDate : public StringField
  {
  public:
  static const int FIELD = 432;
  ExpireDate() : StringField(432) {}
    ExpireDate(String* data) : StringField(432, data) {}
    
  };
  
  public __gc class ListExecInstType : public CharField
  {
  public:
  static const int FIELD = 433;
  static const __wchar_t IMMEDIATE = '1';
  static const __wchar_t WAIT_FOR_EXECUTE_INSTRUCTION = '2';
  static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_SELL_DRIVEN = '3';
  static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_TOP_UP = '4';
  static const __wchar_t EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_WITHDRAW = '5';
  ListExecInstType() : CharField(433) {}
    ListExecInstType(__wchar_t data) : CharField(433, data) {}
    
  };
  
  public __gc class CxlRejResponseTo : public CharField
  {
  public:
  static const int FIELD = 434;
  static const __wchar_t ORDER_CANCEL_REQUEST = '1';
  static const __wchar_t ORDER_CANCEL_REPLACE_REQUEST = '2';
  CxlRejResponseTo() : CharField(434) {}
    CxlRejResponseTo(__wchar_t data) : CharField(434, data) {}
    
  };
  
  public __gc class UnderlyingCouponRate : public DoubleField
  {
  public:
  static const int FIELD = 435;
  UnderlyingCouponRate() : DoubleField(435) {}
    UnderlyingCouponRate(double data) : DoubleField(435, data) {}
    UnderlyingCouponRate(double data, int decimalPadding) : DoubleField(435, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingContractMultiplier : public DoubleField
  {
  public:
  static const int FIELD = 436;
  UnderlyingContractMultiplier() : DoubleField(436) {}
    UnderlyingContractMultiplier(double data) : DoubleField(436, data) {}
    UnderlyingContractMultiplier(double data, int decimalPadding) : DoubleField(436, data, decimalPadding) {}
    
  };
  
  public __gc class ContraTradeQty : public DoubleField
  {
  public:
  static const int FIELD = 437;
  ContraTradeQty() : DoubleField(437) {}
    ContraTradeQty(double data) : DoubleField(437, data) {}
    ContraTradeQty(double data, int decimalPadding) : DoubleField(437, data, decimalPadding) {}
    
  };
  
  public __gc class ContraTradeTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 438;
  ContraTradeTime() : UtcTimeStampField(438) {}
    ContraTradeTime(DateTime data) : UtcTimeStampField(438, data) {}
    ContraTradeTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(438, data, showMilliseconds) {}
    
  };
  
  public __gc class ClearingFirm : public StringField
  {
  public:
  static const int FIELD = 439;
  ClearingFirm() : StringField(439) {}
    ClearingFirm(String* data) : StringField(439, data) {}
    
  };
  
  public __gc class ClearingAccount : public StringField
  {
  public:
  static const int FIELD = 440;
  ClearingAccount() : StringField(440) {}
    ClearingAccount(String* data) : StringField(440, data) {}
    
  };
  
  public __gc class LiquidityNumSecurities : public IntField
  {
  public:
  static const int FIELD = 441;
  LiquidityNumSecurities() : IntField(441) {}
    LiquidityNumSecurities(int data) : IntField(441, data) {}
    
  };
  
  public __gc class MultiLegReportingType : public CharField
  {
  public:
  static const int FIELD = 442;
  static const __wchar_t SINGLE_SECURITY = '1';
  static const __wchar_t INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY = '2';
  static const __wchar_t MULTI_LEG_SECURITY = '3';
  MultiLegReportingType() : CharField(442) {}
    MultiLegReportingType(__wchar_t data) : CharField(442, data) {}
    
  };
  
  public __gc class StrikeTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 443;
  StrikeTime() : UtcTimeStampField(443) {}
    StrikeTime(DateTime data) : UtcTimeStampField(443, data) {}
    StrikeTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(443, data, showMilliseconds) {}
    
  };
  
  public __gc class ListStatusText : public StringField
  {
  public:
  static const int FIELD = 444;
  ListStatusText() : StringField(444) {}
    ListStatusText(String* data) : StringField(444, data) {}
    
  };
  
  public __gc class EncodedListStatusTextLen : public IntField
  {
  public:
  static const int FIELD = 445;
  EncodedListStatusTextLen() : IntField(445) {}
    EncodedListStatusTextLen(int data) : IntField(445, data) {}
    
  };
  
  public __gc class EncodedListStatusText : public StringField
  {
  public:
  static const int FIELD = 446;
  EncodedListStatusText() : StringField(446) {}
    EncodedListStatusText(String* data) : StringField(446, data) {}
    
  };
  
  public __gc class PartyIDSource : public CharField
  {
  public:
  static const int FIELD = 447;
  static const __wchar_t KOREAN_INVESTOR_ID = '1';
  static const __wchar_t TAIWANESE_QUALIFIED_FOREIGN_INVESTOR_ID_QFII_FID = '2';
  static const __wchar_t TAIWANESE_TRADING_ACCOUNT = '3';
  static const __wchar_t MALAYSIAN_CENTRAL_DEPOSITORY_NUMBER = '4';
  static const __wchar_t CHINESE_B_SHARE = '5';
  static const __wchar_t UK_NATIONAL_INSURANCE_OR_PENSION_NUMBER = '6';
  static const __wchar_t US_SOCIAL_SECURITY_NUMBER = '7';
  static const __wchar_t US_EMPLOYER_IDENTIFICATION_NUMBER = '8';
  static const __wchar_t AUSTRALIAN_BUSINESS_NUMBER = '9';
  static const __wchar_t AUSTRALIAN_TAX_FILE_NUMBER = 'A';
  static const __wchar_t BIC = 'B';
  static const __wchar_t GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER = 'C';
  static const __wchar_t PROPRIETARY_CUSTOM_CODE = 'D';
  static const __wchar_t ISO_COUNTRY_CODE = 'E';
  static const __wchar_t SETTLEMENT_ENTITY_LOCATION = 'F';
  static const __wchar_t MIC = 'G';
  static const __wchar_t CSD_PARTICIPANT_MEMBER_CODE = 'H';
  static const __wchar_t DIRECTED_BROKER = 'I';
  PartyIDSource() : CharField(447) {}
    PartyIDSource(__wchar_t data) : CharField(447, data) {}
    
  };
  
  public __gc class PartyID : public StringField
  {
  public:
  static const int FIELD = 448;
  PartyID() : StringField(448) {}
    PartyID(String* data) : StringField(448, data) {}
    
  };
  
  public __gc class TotalVolumeTradedDate : public UtcDateOnlyField
  {
  public:
  static const int FIELD = 449;
  TotalVolumeTradedDate() : UtcDateOnlyField(449) {}
    TotalVolumeTradedDate(DateTime data) : UtcDateOnlyField(449, data) {}
    
  };
  
  public __gc class TotalVolumeTradedTime : public UtcTimeOnlyField
  {
  public:
  static const int FIELD = 450;
  TotalVolumeTradedTime() : UtcTimeOnlyField(450) {}
    TotalVolumeTradedTime(DateTime data) : UtcTimeOnlyField(450, data) {}
    TotalVolumeTradedTime(DateTime data, bool showMilliseconds) : UtcTimeOnlyField(450, data, showMilliseconds) {}
    
  };
  
  public __gc class NetChgPrevDay : public DoubleField
  {
  public:
  static const int FIELD = 451;
  NetChgPrevDay() : DoubleField(451) {}
    NetChgPrevDay(double data) : DoubleField(451, data) {}
    NetChgPrevDay(double data, int decimalPadding) : DoubleField(451, data, decimalPadding) {}
    
  };
  
  public __gc class PartyRole : public IntField
  {
  public:
  static const int FIELD = 452;
  static const int EXECUTING_FIRM = 1;
  static const int BROKER_OF_CREDIT = 2;
  static const int CLIENT_ID = 3;
  static const int CLEARING_FIRM = 4;
  static const int INVESTOR_ID = 5;
  static const int INTRODUCING_FIRM = 6;
  static const int ENTERING_FIRM = 7;
  static const int LOCATE_LENDING_FIRM = 8;
  static const int FUND_MANAGER_CLIENT_ID = 9;
  static const int SETTLEMENT_LOCATION = 10;
  static const int ORDER_ORIGINATION_TRADER = 11;
  static const int EXECUTING_TRADER = 12;
  static const int ORDER_ORIGINATION_FIRM = 13;
  static const int GIVEUP_CLEARING_FIRM = 14;
  static const int CORRESPONDANT_CLEARING_FIRM = 15;
  static const int EXECUTING_SYSTEM = 16;
  static const int CONTRA_FIRM = 17;
  static const int CONTRA_CLEARING_FIRM = 18;
  static const int SPONSORING_FIRM = 19;
  static const int UNDERLYING_CONTRA_FIRM = 20;
  static const int CLEARING_ORGANIZATION = 21;
  static const int EXCHANGE = 22;
  static const int CUSTOMER_ACCOUNT = 24;
  static const int CORRESPONDENT_CLEARING_ORGANIZATION = 25;
  static const int CORRESPONDENT_BROKER = 26;
  static const int BUYER_SELLER = 27;
  static const int CUSTODIAN = 28;
  static const int INTERMEDIARY = 29;
  static const int AGENT = 30;
  static const int SUB_CUSTODIAN = 31;
  static const int BENEFICIARY = 32;
  static const int INTERESTED_PARTY = 33;
  static const int REGULATORY_BODY = 34;
  static const int LIQUIDITY_PROVIDER = 35;
  static const int ENTERING_TRADER = 36;
  static const int CONTRA_TRADER = 37;
  static const int POSITION_ACCOUNT = 38;
  static const int CONTRA_INVESTOR_ID = 39;
  static const int TRANSFER_TO_FIRM = 40;
  static const int CONTRA_POSITION_ACCOUNT = 41;
  static const int CONTRA_EXCHANGE = 42;
  static const int INTERNAL_CARRY_ACCOUNT = 43;
  static const int ORDER_ENTRY_OPERATOR_ID = 44;
  static const int SECONDARY_ACCOUNT_NUMBER = 45;
  static const int FORIEGN_FIRM = 46;
  static const int THIRD_PARTY_ALLOCATION_FIRM = 47;
  static const int CLAIMING_ACCOUNT = 48;
  static const int ASSET_MANAGER = 49;
  static const int PLEDGOR_ACCOUNT = 50;
  static const int PLEDGEE_ACCOUNT = 51;
  static const int LARGE_TRADER_REPORTABLE_ACCOUNT = 52;
  static const int TRADER_MNEMONIC = 53;
  static const int SENDER_LOCATION = 54;
  static const int SESSION_ID = 55;
  static const int ACCEPTABLE_COUNTERPARTY = 56;
  static const int UNACCEPTABLE_COUNTERPARTY = 57;
  static const int ENTERING_UNIT = 58;
  static const int EXECUTING_UNIT = 59;
  static const int INTRODUCING_BROKER = 60;
  static const int QUOTE_ORIGINATOR = 61;
  static const int REPORT_ORIGINATOR = 62;
  static const int SYSTEMATIC_INTERNALISER = 63;
  static const int MULTILATERAL_TRADING_FACILITY = 64;
  static const int REGULATED_MARKET = 65;
  static const int MARKET_MAKER = 66;
  static const int INVESTMENT_FIRM = 67;
  static const int HOST_COMPETENT_AUTHORITY = 68;
  static const int HOME_COMPETENT_AUTHORITY = 69;
  static const int COMPETENT_AUTHORITY_OF_THE_MOST_RELEVANT_MARKET_IN_TERMS_OF_LIQUIDITY = 70;
  static const int COMPETENT_AUTHORITY_OF_THE_TRANSACTION = 71;
  static const int REPORTING_INTERMEDIARY = 72;
  static const int EXECUTION_VENUE = 73;
  static const int MARKET_DATA_ENTRY_ORIGINATOR = 74;
  static const int LOCATION_ID = 75;
  static const int DESK_ID = 76;
  static const int MARKET_DATA_MARKET = 77;
  static const int ALLOCATION_ENTITY = 78;
  PartyRole() : IntField(452) {}
    PartyRole(int data) : IntField(452, data) {}
    
  };
  
  public __gc class NoPartyIDs : public IntField
  {
  public:
  static const int FIELD = 453;
  NoPartyIDs() : IntField(453) {}
    NoPartyIDs(int data) : IntField(453, data) {}
    
  };
  
  public __gc class NoSecurityAltID : public IntField
  {
  public:
  static const int FIELD = 454;
  NoSecurityAltID() : IntField(454) {}
    NoSecurityAltID(int data) : IntField(454, data) {}
    
  };
  
  public __gc class SecurityAltID : public StringField
  {
  public:
  static const int FIELD = 455;
  SecurityAltID() : StringField(455) {}
    SecurityAltID(String* data) : StringField(455, data) {}
    
  };
  
  public __gc class SecurityAltIDSource : public StringField
  {
  public:
  static const int FIELD = 456;
  SecurityAltIDSource() : StringField(456) {}
    SecurityAltIDSource(String* data) : StringField(456, data) {}
    
  };
  
  public __gc class NoUnderlyingSecurityAltID : public IntField
  {
  public:
  static const int FIELD = 457;
  NoUnderlyingSecurityAltID() : IntField(457) {}
    NoUnderlyingSecurityAltID(int data) : IntField(457, data) {}
    
  };
  
  public __gc class UnderlyingSecurityAltID : public StringField
  {
  public:
  static const int FIELD = 458;
  UnderlyingSecurityAltID() : StringField(458) {}
    UnderlyingSecurityAltID(String* data) : StringField(458, data) {}
    
  };
  
  public __gc class UnderlyingSecurityAltIDSource : public StringField
  {
  public:
  static const int FIELD = 459;
  UnderlyingSecurityAltIDSource() : StringField(459) {}
    UnderlyingSecurityAltIDSource(String* data) : StringField(459, data) {}
    
  };
  
  public __gc class Product : public IntField
  {
  public:
  static const int FIELD = 460;
  static const int AGENCY = 1;
  static const int COMMODITY = 2;
  static const int CORPORATE = 3;
  static const int CURRENCY = 4;
  static const int EQUITY = 5;
  static const int GOVERNMENT = 6;
  static const int INDEX = 7;
  static const int LOAN = 8;
  static const int MONEYMARKET = 9;
  static const int MORTGAGE = 10;
  static const int MUNICIPAL = 11;
  static const int OTHER = 12;
  static const int FINANCING = 13;
  Product() : IntField(460) {}
    Product(int data) : IntField(460, data) {}
    
  };
  
  public __gc class CFICode : public StringField
  {
  public:
  static const int FIELD = 461;
  CFICode() : StringField(461) {}
    CFICode(String* data) : StringField(461, data) {}
    
  };
  
  public __gc class UnderlyingProduct : public IntField
  {
  public:
  static const int FIELD = 462;
  UnderlyingProduct() : IntField(462) {}
    UnderlyingProduct(int data) : IntField(462, data) {}
    
  };
  
  public __gc class UnderlyingCFICode : public StringField
  {
  public:
  static const int FIELD = 463;
  UnderlyingCFICode() : StringField(463) {}
    UnderlyingCFICode(String* data) : StringField(463, data) {}
    
  };
  
  public __gc class QuantityType : public IntField
  {
  public:
  static const int FIELD = 465;
  static const int SHARES = 1;
  static const int BONDS = 2;
  static const int CURRENTFACE = 3;
  static const int ORIGINALFACE = 4;
  static const int CURRENCY = 5;
  static const int CONTRACTS = 6;
  static const int OTHER = 7;
  static const int PAR = 8;
  QuantityType() : IntField(465) {}
    QuantityType(int data) : IntField(465, data) {}
    
  };
  
  public __gc class BookingRefID : public StringField
  {
  public:
  static const int FIELD = 466;
  BookingRefID() : StringField(466) {}
    BookingRefID(String* data) : StringField(466, data) {}
    
  };
  
  public __gc class IndividualAllocID : public StringField
  {
  public:
  static const int FIELD = 467;
  IndividualAllocID() : StringField(467) {}
    IndividualAllocID(String* data) : StringField(467, data) {}
    
  };
  
  public __gc class RoundingDirection : public CharField
  {
  public:
  static const int FIELD = 468;
  static const __wchar_t ROUND_TO_NEAREST = '0';
  static const __wchar_t ROUND_DOWN = '1';
  static const __wchar_t ROUND_UP = '2';
  RoundingDirection() : CharField(468) {}
    RoundingDirection(__wchar_t data) : CharField(468, data) {}
    
  };
  
  public __gc class RoundingModulus : public DoubleField
  {
  public:
  static const int FIELD = 469;
  RoundingModulus() : DoubleField(469) {}
    RoundingModulus(double data) : DoubleField(469, data) {}
    RoundingModulus(double data, int decimalPadding) : DoubleField(469, data, decimalPadding) {}
    
  };
  
  public __gc class CountryOfIssue : public StringField
  {
  public:
  static const int FIELD = 470;
  CountryOfIssue() : StringField(470) {}
    CountryOfIssue(String* data) : StringField(470, data) {}
    
  };
  
  public __gc class StateOrProvinceOfIssue : public StringField
  {
  public:
  static const int FIELD = 471;
  StateOrProvinceOfIssue() : StringField(471) {}
    StateOrProvinceOfIssue(String* data) : StringField(471, data) {}
    
  };
  
  public __gc class LocaleOfIssue : public StringField
  {
  public:
  static const int FIELD = 472;
  LocaleOfIssue() : StringField(472) {}
    LocaleOfIssue(String* data) : StringField(472, data) {}
    
  };
  
  public __gc class NoRegistDtls : public IntField
  {
  public:
  static const int FIELD = 473;
  NoRegistDtls() : IntField(473) {}
    NoRegistDtls(int data) : IntField(473, data) {}
    
  };
  
  public __gc class MailingDtls : public StringField
  {
  public:
  static const int FIELD = 474;
  MailingDtls() : StringField(474) {}
    MailingDtls(String* data) : StringField(474, data) {}
    
  };
  
  public __gc class InvestorCountryOfResidence : public StringField
  {
  public:
  static const int FIELD = 475;
  InvestorCountryOfResidence() : StringField(475) {}
    InvestorCountryOfResidence(String* data) : StringField(475, data) {}
    
  };
  
  public __gc class PaymentRef : public StringField
  {
  public:
  static const int FIELD = 476;
  PaymentRef() : StringField(476) {}
    PaymentRef(String* data) : StringField(476, data) {}
    
  };
  
  public __gc class DistribPaymentMethod : public IntField
  {
  public:
  static const int FIELD = 477;
  static const int CREST = 1;
  static const int NSCC = 2;
  static const int EUROCLEAR = 3;
  static const int CLEARSTREAM = 4;
  static const int CHEQUE = 5;
  static const int TELEGRAPHIC_TRANSFER = 6;
  static const int FEDWIRE = 7;
  static const int DIRECT_CREDIT = 8;
  static const int ACH_CREDIT = 9;
  static const int BPAY = 10;
  static const int HIGH_VALUE_CLEARING_SYSTEM_HVACS = 11;
  static const int REINVEST_IN_FUND = 12;
  DistribPaymentMethod() : IntField(477) {}
    DistribPaymentMethod(int data) : IntField(477, data) {}
    
  };
  
  public __gc class CashDistribCurr : public StringField
  {
  public:
  static const int FIELD = 478;
  CashDistribCurr() : StringField(478) {}
    CashDistribCurr(String* data) : StringField(478, data) {}
    
  };
  
  public __gc class CommCurrency : public StringField
  {
  public:
  static const int FIELD = 479;
  CommCurrency() : StringField(479) {}
    CommCurrency(String* data) : StringField(479, data) {}
    
  };
  
  public __gc class CancellationRights : public CharField
  {
  public:
  static const int FIELD = 480;
  static const __wchar_t NO_EXECUTION_ONLY = 'N';
  static const __wchar_t NO_WAIVER_AGREEMENT = 'M';
  static const __wchar_t NO_INSTITUTIONAL = 'O';
  static const __wchar_t YES = 'Y';
  CancellationRights() : CharField(480) {}
    CancellationRights(__wchar_t data) : CharField(480, data) {}
    
  };
  
  public __gc class MoneyLaunderingStatus : public CharField
  {
  public:
  static const int FIELD = 481;
  static const __wchar_t PASSED = 'Y';
  static const __wchar_t NOT_CHECKED = 'N';
  static const __wchar_t EXEMPT_BELOW_THE_LIMIT = '1';
  static const __wchar_t EXEMPT_CLIENT_MONEY_TYPE_EXEMPTION = '2';
  static const __wchar_t EXEMPT_AUTHORISED_CREDIT_OR_FINANCIAL_INSTITUTION = '3';
  MoneyLaunderingStatus() : CharField(481) {}
    MoneyLaunderingStatus(__wchar_t data) : CharField(481, data) {}
    
  };
  
  public __gc class MailingInst : public StringField
  {
  public:
  static const int FIELD = 482;
  MailingInst() : StringField(482) {}
    MailingInst(String* data) : StringField(482, data) {}
    
  };
  
  public __gc class TransBkdTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 483;
  TransBkdTime() : UtcTimeStampField(483) {}
    TransBkdTime(DateTime data) : UtcTimeStampField(483, data) {}
    TransBkdTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(483, data, showMilliseconds) {}
    
  };
  
  public __gc class ExecPriceType : public CharField
  {
  public:
  static const int FIELD = 484;
  static const __wchar_t BID_PRICE = 'B';
  static const __wchar_t CREATION_PRICE = 'C';
  static const __wchar_t CREATION_PRICE_PLUS_ADJUSTMENT_PERCENT = 'D';
  static const __wchar_t CREATION_PRICE_PLUS_ADJUSTMENT_AMOUNT = 'E';
  static const __wchar_t OFFER_PRICE = 'O';
  static const __wchar_t OFFER_PRICE_MINUS_ADJUSTMENT_PERCENT = 'P';
  static const __wchar_t OFFER_PRICE_MINUS_ADJUSTMENT_AMOUNT = 'Q';
  static const __wchar_t SINGLE_PRICE = 'S';
  ExecPriceType() : CharField(484) {}
    ExecPriceType(__wchar_t data) : CharField(484, data) {}
    
  };
  
  public __gc class ExecPriceAdjustment : public DoubleField
  {
  public:
  static const int FIELD = 485;
  ExecPriceAdjustment() : DoubleField(485) {}
    ExecPriceAdjustment(double data) : DoubleField(485, data) {}
    ExecPriceAdjustment(double data, int decimalPadding) : DoubleField(485, data, decimalPadding) {}
    
  };
  
  public __gc class DateOfBirth : public StringField
  {
  public:
  static const int FIELD = 486;
  DateOfBirth() : StringField(486) {}
    DateOfBirth(String* data) : StringField(486, data) {}
    
  };
  
  public __gc class TradeReportTransType : public IntField
  {
  public:
  static const int FIELD = 487;
  static const int NEW = 0;
  static const int CANCEL = 1;
  static const int REPLACE = 2;
  static const int RELEASE = 3;
  static const int REVERSE = 4;
  static const int CANCEL_DUE_TO_BACK_OUT_OF_TRADE = 5;
  TradeReportTransType() : IntField(487) {}
    TradeReportTransType(int data) : IntField(487, data) {}
    
  };
  
  public __gc class CardHolderName : public StringField
  {
  public:
  static const int FIELD = 488;
  CardHolderName() : StringField(488) {}
    CardHolderName(String* data) : StringField(488, data) {}
    
  };
  
  public __gc class CardNumber : public StringField
  {
  public:
  static const int FIELD = 489;
  CardNumber() : StringField(489) {}
    CardNumber(String* data) : StringField(489, data) {}
    
  };
  
  public __gc class CardExpDate : public StringField
  {
  public:
  static const int FIELD = 490;
  CardExpDate() : StringField(490) {}
    CardExpDate(String* data) : StringField(490, data) {}
    
  };
  
  public __gc class CardIssNum : public StringField
  {
  public:
  static const int FIELD = 491;
  CardIssNum() : StringField(491) {}
    CardIssNum(String* data) : StringField(491, data) {}
    
  };
  
  public __gc class PaymentMethod : public IntField
  {
  public:
  static const int FIELD = 492;
  static const int CREST = 1;
  static const int NSCC = 2;
  static const int EUROCLEAR = 3;
  static const int CLEARSTREAM = 4;
  static const int CHEQUE = 5;
  static const int TELEGRAPHIC_TRANSFER = 6;
  static const int FEDWIRE = 7;
  static const int DEBIT_CARD = 8;
  static const int DIRECT_DEBIT = 9;
  static const int DIRECT_CREDIT = 10;
  static const int CREDIT_CARD = 11;
  static const int ACH_DEBIT = 12;
  static const int ACH_CREDIT = 13;
  static const int BPAY = 14;
  static const int HIGH_VALUE_CLEARING_SYSTEM = 15;
  PaymentMethod() : IntField(492) {}
    PaymentMethod(int data) : IntField(492, data) {}
    
  };
  
  public __gc class RegistAcctType : public StringField
  {
  public:
  static const int FIELD = 493;
  RegistAcctType() : StringField(493) {}
    RegistAcctType(String* data) : StringField(493, data) {}
    
  };
  
  public __gc class Designation : public StringField
  {
  public:
  static const int FIELD = 494;
  Designation() : StringField(494) {}
    Designation(String* data) : StringField(494, data) {}
    
  };
  
  public __gc class TaxAdvantageType : public IntField
  {
  public:
  static const int FIELD = 495;
  static const int NONE = 0;
  static const int MAXI_ISA = 1;
  static const int TESSA = 2;
  static const int MINI_CASH_ISA = 3;
  static const int MINI_STOCKS_AND_SHARES_ISA = 4;
  static const int MINI_INSURANCE_ISA = 5;
  static const int CURRENT_YEAR_PAYMENT = 6;
  static const int PRIOR_YEAR_PAYMENT = 7;
  static const int ASSET_TRANSFER = 8;
  static const int EMPLOYEE_PRIOR_YEAR = 9;
  static const int EMPLOYEE = 10;
  static const int EMPLOYER = 11;
  static const int EMPLOYER2 = 12;
  static const int NON_FUND_PROTOTYPE_IRA = 13;
  static const int NON_FUND_QUALIFIED_PLAN = 14;
  static const int DEFINED_CONTRIBUTION_PLAN = 15;
  static const int INDIVIDUAL_RETIREMENT_ACCOUNT = 16;
  static const int INDIVIDUAL_RETIREMENT_ACCOUNT2 = 17;
  static const int KEOGH = 18;
  static const int PROFIT_SHARING_PLAN = 19;
  static const int _401_K = 20;
  static const int SELF_DIRECTED_IRA = 21;
  static const int _403_B = 22;
  static const int _457 = 23;
  static const int ROTH_IRA = 24;
  static const int ROTH_IRA2 = 25;
  static const int ROTH_CONVERSION_IRA = 26;
  static const int ROTH_CONVERSION_IRA2 = 27;
  static const int EDUCATION_IRA = 28;
  static const int EDUCATION_IRA2 = 29;
  static const int OTHER = 999;
  TaxAdvantageType() : IntField(495) {}
    TaxAdvantageType(int data) : IntField(495, data) {}
    
  };
  
  public __gc class RegistRejReasonText : public StringField
  {
  public:
  static const int FIELD = 496;
  RegistRejReasonText() : StringField(496) {}
    RegistRejReasonText(String* data) : StringField(496, data) {}
    
  };
  
  public __gc class FundRenewWaiv : public CharField
  {
  public:
  static const int FIELD = 497;
  static const __wchar_t NO = 'N';
  static const __wchar_t YES = 'Y';
  FundRenewWaiv() : CharField(497) {}
    FundRenewWaiv(__wchar_t data) : CharField(497, data) {}
    
  };
  
  public __gc class CashDistribAgentName : public StringField
  {
  public:
  static const int FIELD = 498;
  CashDistribAgentName() : StringField(498) {}
    CashDistribAgentName(String* data) : StringField(498, data) {}
    
  };
  
  public __gc class CashDistribAgentCode : public StringField
  {
  public:
  static const int FIELD = 499;
  CashDistribAgentCode() : StringField(499) {}
    CashDistribAgentCode(String* data) : StringField(499, data) {}
    
  };
  
  public __gc class CashDistribAgentAcctNumber : public StringField
  {
  public:
  static const int FIELD = 500;
  CashDistribAgentAcctNumber() : StringField(500) {}
    CashDistribAgentAcctNumber(String* data) : StringField(500, data) {}
    
  };
  
  public __gc class CashDistribPayRef : public StringField
  {
  public:
  static const int FIELD = 501;
  CashDistribPayRef() : StringField(501) {}
    CashDistribPayRef(String* data) : StringField(501, data) {}
    
  };
  
  public __gc class CashDistribAgentAcctName : public StringField
  {
  public:
  static const int FIELD = 502;
  CashDistribAgentAcctName() : StringField(502) {}
    CashDistribAgentAcctName(String* data) : StringField(502, data) {}
    
  };
  
  public __gc class CardStartDate : public StringField
  {
  public:
  static const int FIELD = 503;
  CardStartDate() : StringField(503) {}
    CardStartDate(String* data) : StringField(503, data) {}
    
  };
  
  public __gc class PaymentDate : public StringField
  {
  public:
  static const int FIELD = 504;
  PaymentDate() : StringField(504) {}
    PaymentDate(String* data) : StringField(504, data) {}
    
  };
  
  public __gc class PaymentRemitterID : public StringField
  {
  public:
  static const int FIELD = 505;
  PaymentRemitterID() : StringField(505) {}
    PaymentRemitterID(String* data) : StringField(505, data) {}
    
  };
  
  public __gc class RegistStatus : public CharField
  {
  public:
  static const int FIELD = 506;
  static const __wchar_t ACCEPTED = 'A';
  static const __wchar_t REJECTED = 'R';
  static const __wchar_t HELD = 'H';
  static const __wchar_t REMINDER = 'N';
  RegistStatus() : CharField(506) {}
    RegistStatus(__wchar_t data) : CharField(506, data) {}
    
  };
  
  public __gc class RegistRejReasonCode : public IntField
  {
  public:
  static const int FIELD = 507;
  static const int INVALID_UNACCEPTABLE_ACCOUNT_TYPE = 1;
  static const int INVALID_UNACCEPTABLE_TAX_EXEMPT_TYPE = 2;
  static const int INVALID_UNACCEPTABLE_OWNERSHIP_TYPE = 3;
  static const int INVALID_UNACCEPTABLE_NO_REG_DETLS = 4;
  static const int INVALID_UNACCEPTABLE_REG_SEQ_NO = 5;
  static const int INVALID_UNACCEPTABLE_REG_DTLS = 6;
  static const int INVALID_UNACCEPTABLE_MAILING_DTLS = 7;
  static const int INVALID_UNACCEPTABLE_MAILING_INST = 8;
  static const int INVALID_UNACCEPTABLE_INVESTOR_ID = 9;
  static const int INVALID_UNACCEPTABLE_INVESTOR_ID_SOURCE = 10;
  static const int INVALID_UNACCEPTABLE_DATE_OF_BIRTH = 11;
  static const int INVALID_UNACCEPTABLE_INVESTOR_COUNTRY_OF_RESIDENCE = 12;
  static const int INVALID_UNACCEPTABLE_NODISTRIBINSTNS = 13;
  static const int INVALID_UNACCEPTABLE_DISTRIB_PERCENTAGE = 14;
  static const int INVALID_UNACCEPTABLE_DISTRIB_PAYMENT_METHOD = 15;
  static const int INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NAME = 16;
  static const int INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_CODE = 17;
  static const int INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NUM = 18;
  static const int OTHER = 99;
  RegistRejReasonCode() : IntField(507) {}
    RegistRejReasonCode(int data) : IntField(507, data) {}
    
  };
  
  public __gc class RegistRefID : public StringField
  {
  public:
  static const int FIELD = 508;
  RegistRefID() : StringField(508) {}
    RegistRefID(String* data) : StringField(508, data) {}
    
  };
  
  public __gc class RegistDtls : public StringField
  {
  public:
  static const int FIELD = 509;
  RegistDtls() : StringField(509) {}
    RegistDtls(String* data) : StringField(509, data) {}
    
  };
  
  public __gc class NoDistribInsts : public IntField
  {
  public:
  static const int FIELD = 510;
  NoDistribInsts() : IntField(510) {}
    NoDistribInsts(int data) : IntField(510, data) {}
    
  };
  
  public __gc class RegistEmail : public StringField
  {
  public:
  static const int FIELD = 511;
  RegistEmail() : StringField(511) {}
    RegistEmail(String* data) : StringField(511, data) {}
    
  };
  
  public __gc class DistribPercentage : public DoubleField
  {
  public:
  static const int FIELD = 512;
  DistribPercentage() : DoubleField(512) {}
    DistribPercentage(double data) : DoubleField(512, data) {}
    DistribPercentage(double data, int decimalPadding) : DoubleField(512, data, decimalPadding) {}
    
  };
  
  public __gc class RegistID : public StringField
  {
  public:
  static const int FIELD = 513;
  RegistID() : StringField(513) {}
    RegistID(String* data) : StringField(513, data) {}
    
  };
  
  public __gc class RegistTransType : public CharField
  {
  public:
  static const int FIELD = 514;
  static const __wchar_t NEW = '0';
  static const __wchar_t REPLACE = '1';
  static const __wchar_t CANCEL = '2';
  RegistTransType() : CharField(514) {}
    RegistTransType(__wchar_t data) : CharField(514, data) {}
    
  };
  
  public __gc class ExecValuationPoint : public UtcTimeStampField
  {
  public:
  static const int FIELD = 515;
  ExecValuationPoint() : UtcTimeStampField(515) {}
    ExecValuationPoint(DateTime data) : UtcTimeStampField(515, data) {}
    ExecValuationPoint(DateTime data, bool showMilliseconds) : UtcTimeStampField(515, data, showMilliseconds) {}
    
  };
  
  public __gc class OrderPercent : public DoubleField
  {
  public:
  static const int FIELD = 516;
  OrderPercent() : DoubleField(516) {}
    OrderPercent(double data) : DoubleField(516, data) {}
    OrderPercent(double data, int decimalPadding) : DoubleField(516, data, decimalPadding) {}
    
  };
  
  public __gc class OwnershipType : public CharField
  {
  public:
  static const int FIELD = 517;
  static const __wchar_t JOINT_INVESTORS = 'J';
  static const __wchar_t TENANTS_IN_COMMON = 'T';
  static const __wchar_t JOINT_TRUSTEES = '2';
  OwnershipType() : CharField(517) {}
    OwnershipType(__wchar_t data) : CharField(517, data) {}
    
  };
  
  public __gc class NoContAmts : public IntField
  {
  public:
  static const int FIELD = 518;
  NoContAmts() : IntField(518) {}
    NoContAmts(int data) : IntField(518, data) {}
    
  };
  
  public __gc class ContAmtType : public IntField
  {
  public:
  static const int FIELD = 519;
  static const int COMMISSION_AMOUNT = 1;
  static const int COMMISSION_PERCENT = 2;
  static const int INITIAL_CHARGE_AMOUNT = 3;
  static const int INITIAL_CHARGE_PERCENT = 4;
  static const int DISCOUNT_AMOUNT = 5;
  static const int DISCOUNT_PERCENT = 6;
  static const int DILUTION_LEVY_AMOUNT = 7;
  static const int DILUTION_LEVY_PERCENT = 8;
  static const int EXIT_CHARGE_AMOUNT = 9;
  static const int EXIT_CHARGE_PERCENT = 10;
  static const int FUND_BASED_RENEWAL_COMMISSION_PERCENT = 11;
  static const int PROJECTED_FUND_VALUE = 12;
  static const int FUND_BASED_RENEWAL_COMMISSION_AMOUNT = 13;
  static const int FUND_BASED_RENEWAL_COMMISSION_AMOUNT2 = 14;
  static const int NET_SETTLEMENT_AMOUNT = 15;
  ContAmtType() : IntField(519) {}
    ContAmtType(int data) : IntField(519, data) {}
    
  };
  
  public __gc class ContAmtValue : public DoubleField
  {
  public:
  static const int FIELD = 520;
  ContAmtValue() : DoubleField(520) {}
    ContAmtValue(double data) : DoubleField(520, data) {}
    ContAmtValue(double data, int decimalPadding) : DoubleField(520, data, decimalPadding) {}
    
  };
  
  public __gc class ContAmtCurr : public StringField
  {
  public:
  static const int FIELD = 521;
  ContAmtCurr() : StringField(521) {}
    ContAmtCurr(String* data) : StringField(521, data) {}
    
  };
  
  public __gc class OwnerType : public IntField
  {
  public:
  static const int FIELD = 522;
  static const int INDIVIDUAL_INVESTOR = 1;
  static const int PUBLIC_COMPANY = 2;
  static const int PRIVATE_COMPANY = 3;
  static const int INDIVIDUAL_TRUSTEE = 4;
  static const int COMPANY_TRUSTEE = 5;
  static const int PENSION_PLAN = 6;
  static const int CUSTODIAN_UNDER_GIFTS_TO_MINORS_ACT = 7;
  static const int TRUSTS = 8;
  static const int FIDUCIARIES = 9;
  static const int NETWORKING_SUB_ACCOUNT = 10;
  static const int NON_PROFIT_ORGANIZATION = 11;
  static const int CORPORATE_BODY = 12;
  static const int NOMINEE = 13;
  OwnerType() : IntField(522) {}
    OwnerType(int data) : IntField(522, data) {}
    
  };
  
  public __gc class PartySubID : public StringField
  {
  public:
  static const int FIELD = 523;
  PartySubID() : StringField(523) {}
    PartySubID(String* data) : StringField(523, data) {}
    
  };
  
  public __gc class NestedPartyID : public StringField
  {
  public:
  static const int FIELD = 524;
  NestedPartyID() : StringField(524) {}
    NestedPartyID(String* data) : StringField(524, data) {}
    
  };
  
  public __gc class NestedPartyIDSource : public CharField
  {
  public:
  static const int FIELD = 525;
  NestedPartyIDSource() : CharField(525) {}
    NestedPartyIDSource(__wchar_t data) : CharField(525, data) {}
    
  };
  
  public __gc class SecondaryClOrdID : public StringField
  {
  public:
  static const int FIELD = 526;
  SecondaryClOrdID() : StringField(526) {}
    SecondaryClOrdID(String* data) : StringField(526, data) {}
    
  };
  
  public __gc class SecondaryExecID : public StringField
  {
  public:
  static const int FIELD = 527;
  SecondaryExecID() : StringField(527) {}
    SecondaryExecID(String* data) : StringField(527, data) {}
    
  };
  
  public __gc class OrderCapacity : public CharField
  {
  public:
  static const int FIELD = 528;
  static const __wchar_t AGENCY = 'A';
  static const __wchar_t PROPRIETARY = 'G';
  static const __wchar_t INDIVIDUAL = 'I';
  static const __wchar_t PRINCIPAL = 'P';
  static const __wchar_t RISKLESS_PRINCIPAL = 'R';
  static const __wchar_t AGENT_FOR_OTHER_MEMBER = 'W';
  OrderCapacity() : CharField(528) {}
    OrderCapacity(__wchar_t data) : CharField(528, data) {}
    
  };
  
  public __gc class OrderRestrictions : public StringField
  {
  public:
  static const int FIELD = 529;
  static const __wchar_t PROGRAM_TRADE = '1';
  static const __wchar_t INDEX_ARBITRAGE = '2';
  static const __wchar_t NON_INDEX_ARBITRAGE = '3';
  static const __wchar_t COMPETING_MARKET_MAKER = '4';
  static const __wchar_t ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_SECURITY = '5';
  static const __wchar_t ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_UNDERLYING_SECURITY_OF_A_DERIVATIVE_SECURITY = '6';
  static const __wchar_t FOREIGN_ENTITY = '7';
  static const __wchar_t EXTERNAL_MARKET_PARTICIPANT = '8';
  static const __wchar_t EXTERNAL_INTER_CONNECTED_MARKET_LINKAGE = '9';
  static const __wchar_t RISKLESS_ARBITRAGE = 'A';
  OrderRestrictions() : StringField(529) {}
    OrderRestrictions(String* data) : StringField(529, data) {}
    
  };
  
  public __gc class MassCancelRequestType : public CharField
  {
  public:
  static const int FIELD = 530;
  static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITY = '1';
  static const __wchar_t CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = '2';
  static const __wchar_t CANCEL_ORDERS_FOR_A_PRODUCT = '3';
  static const __wchar_t CANCEL_ORDERS_FOR_A_CFICODE = '4';
  static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITYTYPE = '5';
  static const __wchar_t CANCEL_ORDERS_FOR_A_TRADING_SESSION = '6';
  static const __wchar_t CANCEL_ALL_ORDERS = '7';
  MassCancelRequestType() : CharField(530) {}
    MassCancelRequestType(__wchar_t data) : CharField(530, data) {}
    
  };
  
  public __gc class MassCancelResponse : public CharField
  {
  public:
  static const int FIELD = 531;
  static const __wchar_t CANCEL_REQUEST_REJECTED = '0';
  static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITY = '1';
  static const __wchar_t CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY = '2';
  static const __wchar_t CANCEL_ORDERS_FOR_A_PRODUCT = '3';
  static const __wchar_t CANCEL_ORDERS_FOR_A_CFICODE = '4';
  static const __wchar_t CANCEL_ORDERS_FOR_A_SECURITYTYPE = '5';
  static const __wchar_t CANCEL_ORDERS_FOR_A_TRADING_SESSION = '6';
  static const __wchar_t CANCEL_ALL_ORDERS = '7';
  MassCancelResponse() : CharField(531) {}
    MassCancelResponse(__wchar_t data) : CharField(531, data) {}
    
  };
  
  public __gc class MassCancelRejectReason : public IntField
  {
  public:
  static const int FIELD = 532;
  static const int MASS_CANCEL_NOT_SUPPORTED = 0;
  static const int INVALID_OR_UNKNOWN_SECURITY = 1;
  static const int INVALID_OR_UNKNOWN_UNDERLYING = 2;
  static const int INVALID_OR_UNKNOWN_PRODUCT = 3;
  static const int INVALID_OR_UNKNOWN_CFICODE = 4;
  static const int INVALID_OR_UNKNOWN_SECURITY_TYPE = 5;
  static const int INVALID_OR_UNKNOWN_TRADING_SESSION = 6;
  static const int OTHER = 99;
  MassCancelRejectReason() : IntField(532) {}
    MassCancelRejectReason(int data) : IntField(532, data) {}
    
  };
  
  public __gc class TotalAffectedOrders : public IntField
  {
  public:
  static const int FIELD = 533;
  TotalAffectedOrders() : IntField(533) {}
    TotalAffectedOrders(int data) : IntField(533, data) {}
    
  };
  
  public __gc class NoAffectedOrders : public IntField
  {
  public:
  static const int FIELD = 534;
  NoAffectedOrders() : IntField(534) {}
    NoAffectedOrders(int data) : IntField(534, data) {}
    
  };
  
  public __gc class AffectedOrderID : public StringField
  {
  public:
  static const int FIELD = 535;
  AffectedOrderID() : StringField(535) {}
    AffectedOrderID(String* data) : StringField(535, data) {}
    
  };
  
  public __gc class AffectedSecondaryOrderID : public StringField
  {
  public:
  static const int FIELD = 536;
  AffectedSecondaryOrderID() : StringField(536) {}
    AffectedSecondaryOrderID(String* data) : StringField(536, data) {}
    
  };
  
  public __gc class QuoteType : public IntField
  {
  public:
  static const int FIELD = 537;
  static const int INDICATIVE = 0;
  static const int TRADEABLE = 1;
  static const int RESTRICTED_TRADEABLE = 2;
  static const int COUNTER = 3;
  QuoteType() : IntField(537) {}
    QuoteType(int data) : IntField(537, data) {}
    
  };
  
  public __gc class NestedPartyRole : public IntField
  {
  public:
  static const int FIELD = 538;
  NestedPartyRole() : IntField(538) {}
    NestedPartyRole(int data) : IntField(538, data) {}
    
  };
  
  public __gc class NoNestedPartyIDs : public IntField
  {
  public:
  static const int FIELD = 539;
  NoNestedPartyIDs() : IntField(539) {}
    NoNestedPartyIDs(int data) : IntField(539, data) {}
    
  };
  
  public __gc class TotalAccruedInterestAmt : public DoubleField
  {
  public:
  static const int FIELD = 540;
  TotalAccruedInterestAmt() : DoubleField(540) {}
    TotalAccruedInterestAmt(double data) : DoubleField(540, data) {}
    TotalAccruedInterestAmt(double data, int decimalPadding) : DoubleField(540, data, decimalPadding) {}
    
  };
  
  public __gc class MaturityDate : public StringField
  {
  public:
  static const int FIELD = 541;
  MaturityDate() : StringField(541) {}
    MaturityDate(String* data) : StringField(541, data) {}
    
  };
  
  public __gc class UnderlyingMaturityDate : public StringField
  {
  public:
  static const int FIELD = 542;
  UnderlyingMaturityDate() : StringField(542) {}
    UnderlyingMaturityDate(String* data) : StringField(542, data) {}
    
  };
  
  public __gc class InstrRegistry : public StringField
  {
  public:
  static const int FIELD = 543;
  InstrRegistry() : StringField(543) {}
    InstrRegistry(String* data) : StringField(543, data) {}
    
  };
  
  public __gc class CashMargin : public CharField
  {
  public:
  static const int FIELD = 544;
  static const __wchar_t CASH = '1';
  static const __wchar_t MARGIN_OPEN = '2';
  static const __wchar_t MARGIN_CLOSE = '3';
  CashMargin() : CharField(544) {}
    CashMargin(__wchar_t data) : CharField(544, data) {}
    
  };
  
  public __gc class NestedPartySubID : public StringField
  {
  public:
  static const int FIELD = 545;
  NestedPartySubID() : StringField(545) {}
    NestedPartySubID(String* data) : StringField(545, data) {}
    
  };
  
  public __gc class Scope : public StringField
  {
  public:
  static const int FIELD = 546;
  static const __wchar_t LOCAL = '1';
  static const __wchar_t NATIONAL = '2';
  static const __wchar_t GLOBAL = '3';
  Scope() : StringField(546) {}
    Scope(String* data) : StringField(546, data) {}
    
  };
  
  public __gc class MDImplicitDelete : public BooleanField
  {
  public:
  static const int FIELD = 547;
  MDImplicitDelete() : BooleanField(547) {}
    MDImplicitDelete(bool data) : BooleanField(547, data) {}
    
  };
  
  public __gc class CrossID : public StringField
  {
  public:
  static const int FIELD = 548;
  CrossID() : StringField(548) {}
    CrossID(String* data) : StringField(548, data) {}
    
  };
  
  public __gc class CrossType : public IntField
  {
  public:
  static const int FIELD = 549;
  static const int CROSS_TRADE_WHICH_IS_EXECUTED_COMPLETELY_OR_NOT = 1;
  static const int CROSS_TRADE_WHICH_IS_EXECUTED_PARTIALLY_AND_THE_REST_IS_CANCELLED = 2;
  static const int CROSS_TRADE_WHICH_IS_PARTIALLY_EXECUTED_WITH_THE_UNFILLED_PORTIONS_REMAINING_ACTIVE = 3;
  static const int CROSS_TRADE_IS_EXECUTED_WITH_EXISTING_ORDERS_WITH_THE_SAME_PRICE = 4;
  CrossType() : IntField(549) {}
    CrossType(int data) : IntField(549, data) {}
    
  };
  
  public __gc class CrossPrioritization : public IntField
  {
  public:
  static const int FIELD = 550;
  static const int NONE = 0;
  static const int BUY_SIDE_IS_PRIORITIZED = 1;
  static const int SELL_SIDE_IS_PRIORITIZED = 2;
  CrossPrioritization() : IntField(550) {}
    CrossPrioritization(int data) : IntField(550, data) {}
    
  };
  
  public __gc class OrigCrossID : public StringField
  {
  public:
  static const int FIELD = 551;
  OrigCrossID() : StringField(551) {}
    OrigCrossID(String* data) : StringField(551, data) {}
    
  };
  
  public __gc class NoSides : public IntField
  {
  public:
  static const int FIELD = 552;
  static const __wchar_t ONE_SIDE = '1';
  static const __wchar_t BOTH_SIDES = '2';
  NoSides() : IntField(552) {}
    NoSides(int data) : IntField(552, data) {}
    
  };
  
  public __gc class NoLegs : public IntField
  {
  public:
  static const int FIELD = 555;
  NoLegs() : IntField(555) {}
    NoLegs(int data) : IntField(555, data) {}
    
  };
  
  public __gc class LegCurrency : public StringField
  {
  public:
  static const int FIELD = 556;
  LegCurrency() : StringField(556) {}
    LegCurrency(String* data) : StringField(556, data) {}
    
  };
  
  public __gc class TotNoSecurityTypes : public IntField
  {
  public:
  static const int FIELD = 557;
  TotNoSecurityTypes() : IntField(557) {}
    TotNoSecurityTypes(int data) : IntField(557, data) {}
    
  };
  
  public __gc class NoSecurityTypes : public IntField
  {
  public:
  static const int FIELD = 558;
  NoSecurityTypes() : IntField(558) {}
    NoSecurityTypes(int data) : IntField(558, data) {}
    
  };
  
  public __gc class SecurityListRequestType : public IntField
  {
  public:
  static const int FIELD = 559;
  static const int SYMBOL = 0;
  static const int SECURITYTYPE_AND_OR_CFICODE = 1;
  static const int PRODUCT = 2;
  static const int TRADINGSESSIONID = 3;
  static const int ALL_SECURITIES = 4;
  SecurityListRequestType() : IntField(559) {}
    SecurityListRequestType(int data) : IntField(559, data) {}
    
  };
  
  public __gc class SecurityRequestResult : public IntField
  {
  public:
  static const int FIELD = 560;
  static const int VALID_REQUEST = 0;
  static const int INVALID_OR_UNSUPPORTED_REQUEST = 1;
  static const int NO_INSTRUMENTS_FOUND_THAT_MATCH_SELECTION_CRITERIA = 2;
  static const int NOT_AUTHORIZED_TO_RETRIEVE_INSTRUMENT_DATA = 3;
  static const int INSTRUMENT_DATA_TEMPORARILY_UNAVAILABLE = 4;
  static const int REQUEST_FOR_INSTRUMENT_DATA_NOT_SUPPORTED = 5;
  SecurityRequestResult() : IntField(560) {}
    SecurityRequestResult(int data) : IntField(560, data) {}
    
  };
  
  public __gc class RoundLot : public DoubleField
  {
  public:
  static const int FIELD = 561;
  RoundLot() : DoubleField(561) {}
    RoundLot(double data) : DoubleField(561, data) {}
    RoundLot(double data, int decimalPadding) : DoubleField(561, data, decimalPadding) {}
    
  };
  
  public __gc class MinTradeVol : public DoubleField
  {
  public:
  static const int FIELD = 562;
  MinTradeVol() : DoubleField(562) {}
    MinTradeVol(double data) : DoubleField(562, data) {}
    MinTradeVol(double data, int decimalPadding) : DoubleField(562, data, decimalPadding) {}
    
  };
  
  public __gc class MultiLegRptTypeReq : public IntField
  {
  public:
  static const int FIELD = 563;
  static const int REPORT_BY_MULITLEG_SECURITY_ONLY = 0;
  static const int REPORT_BY_MULTILEG_SECURITY_AND_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY = 1;
  static const int REPORT_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY_ONLY = 2;
  MultiLegRptTypeReq() : IntField(563) {}
    MultiLegRptTypeReq(int data) : IntField(563, data) {}
    
  };
  
  public __gc class LegPositionEffect : public CharField
  {
  public:
  static const int FIELD = 564;
  LegPositionEffect() : CharField(564) {}
    LegPositionEffect(__wchar_t data) : CharField(564, data) {}
    
  };
  
  public __gc class LegCoveredOrUncovered : public IntField
  {
  public:
  static const int FIELD = 565;
  LegCoveredOrUncovered() : IntField(565) {}
    LegCoveredOrUncovered(int data) : IntField(565, data) {}
    
  };
  
  public __gc class LegPrice : public DoubleField
  {
  public:
  static const int FIELD = 566;
  LegPrice() : DoubleField(566) {}
    LegPrice(double data) : DoubleField(566, data) {}
    LegPrice(double data, int decimalPadding) : DoubleField(566, data, decimalPadding) {}
    
  };
  
  public __gc class TradSesStatusRejReason : public IntField
  {
  public:
  static const int FIELD = 567;
  static const int UNKNOWN_OR_INVALID_TRADINGSESSIONID = 1;
  static const int OTHER = 99;
  TradSesStatusRejReason() : IntField(567) {}
    TradSesStatusRejReason(int data) : IntField(567, data) {}
    
  };
  
  public __gc class TradeRequestID : public StringField
  {
  public:
  static const int FIELD = 568;
  TradeRequestID() : StringField(568) {}
    TradeRequestID(String* data) : StringField(568, data) {}
    
  };
  
  public __gc class TradeRequestType : public IntField
  {
  public:
  static const int FIELD = 569;
  static const int ALL_TRADES = 0;
  static const int MATCHED_TRADES_MATCHING_CRITERIA_PROVIDED_ON_REQUEST = 1;
  static const int UNMATCHED_TRADES_THAT_MATCH_CRITERIA = 2;
  static const int UNREPORTED_TRADES_THAT_MATCH_CRITERIA = 3;
  static const int ADVISORIES_THAT_MATCH_CRITERIA = 4;
  TradeRequestType() : IntField(569) {}
    TradeRequestType(int data) : IntField(569, data) {}
    
  };
  
  public __gc class PreviouslyReported : public BooleanField
  {
  public:
  static const int FIELD = 570;
  PreviouslyReported() : BooleanField(570) {}
    PreviouslyReported(bool data) : BooleanField(570, data) {}
    
  };
  
  public __gc class TradeReportID : public StringField
  {
  public:
  static const int FIELD = 571;
  TradeReportID() : StringField(571) {}
    TradeReportID(String* data) : StringField(571, data) {}
    
  };
  
  public __gc class TradeReportRefID : public StringField
  {
  public:
  static const int FIELD = 572;
  TradeReportRefID() : StringField(572) {}
    TradeReportRefID(String* data) : StringField(572, data) {}
    
  };
  
  public __gc class MatchStatus : public CharField
  {
  public:
  static const int FIELD = 573;
  static const __wchar_t COMPARED_MATCHED_OR_AFFIRMED = '0';
  static const __wchar_t UNCOMPARED_UNMATCHED_OR_UNAFFIRMED = '1';
  static const __wchar_t ADVISORY_OR_ALERT = '2';
  MatchStatus() : CharField(573) {}
    MatchStatus(__wchar_t data) : CharField(573, data) {}
    
  };
  
  public __gc class MatchType : public StringField
  {
  public:
  static const int FIELD = 574;
  static const String* ONE_PARTY_TRADE_REPORT = "1";
  static const String* TWO_PARTY_TRADE_REPORT = "2";
  static const String* CONFIRMED_TRADE_REPORT = "3";
  static const String* AUTO_MATCH = "4";
  static const String* CROSS_AUCTION = "5";
  static const String* COUNTER_ORDER_SELECTION = "6";
  static const String* CALL_AUCTION = "7";
  static const String* EXACT_PLUS_FOUR_BADGES_AND_EXECUTION_TIME = "A1";
  static const String* EXACT_PLUS_FOUR_BADGES = "A2";
  static const String* EXACT_PLUS_TWO_BADGES_AND_EXECUTION_TIME = "A3";
  static const String* EXACT_PLUS_TWO_BADGES = "A4";
  static const String* EXACT_PLUS_EXECUTION_TIME = "A5";
  static const String* ACT_ACCEPTED_TRADE = "M3";
  static const String* ACT_DEFAULT_TRADE = "M4";
  static const String* ACT_DEFAULT_AFTER_M2 = "M5";
  static const String* ACT_M6_MATCH = "M6";
  static const String* COMPARED_RECORDS_RESULTING_FROM_STAMPED_ADVISORIES_OR_SPECIALIST_ACCEPTS_PAIR_OFFS = "AQ";
  static const String* EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND_SPECIAL_TRADE_INDICATOR_MINUS_BADGES_AND_TIMES_ACT_M1_MATCH = "M1";
  static const String* SUMMARIZED_MATCH_MINUS_BADGES_AND_TIMES_ACT_M2_MATCH = "M2";
  static const String* OCS_LOCKED_IN_NON_ACT = "MT";
  static const String* SUMMARIZED_MATCH_USING_A1_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIED = "S1";
  static const String* SUMMARIZED_MATCH_USING_A2_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S2";
  static const String* SUMMARIZED_MATCH_USING_A3_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S3";
  static const String* SUMMARIZED_MATCH_USING_A4_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S4";
  static const String* SUMMARIZED_MATCH_USING_A5_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_IS_SUMMARIZED = "S5";
  static const String* ONE_PARTY_PRIVATELY_NEGOTIATED_TRADE_REPORT = "60";
  static const String* TWO_PARTY_PRIVATELY_NEGOTIATED_TRADE_REPORT = "61";
  static const String* CONTINUOUS_AUTO_MATCH = "62";
  static const String* CROSS_AUCTION2 = "63";
  static const String* COUNTER_ORDER_SELECTION2 = "64";
  static const String* CALL_AUCTION2 = "65";
  MatchType() : StringField(574) {}
    MatchType(String* data) : StringField(574, data) {}
    
  };
  
  public __gc class OddLot : public BooleanField
  {
  public:
  static const int FIELD = 575;
  OddLot() : BooleanField(575) {}
    OddLot(bool data) : BooleanField(575, data) {}
    
  };
  
  public __gc class NoClearingInstructions : public IntField
  {
  public:
  static const int FIELD = 576;
  NoClearingInstructions() : IntField(576) {}
    NoClearingInstructions(int data) : IntField(576, data) {}
    
  };
  
  public __gc class ClearingInstruction : public IntField
  {
  public:
  static const int FIELD = 577;
  static const int PROCESS_NORMALLY = 0;
  static const int EXCLUDE_FROM_ALL_NETTING = 1;
  static const int BILATERAL_NETTING_ONLY = 2;
  static const int EX_CLEARING = 3;
  static const int SPECIAL_TRADE = 4;
  static const int MULTILATERAL_NETTING = 5;
  static const int CLEAR_AGAINST_CENTRAL_COUNTERPARTY = 6;
  static const int EXCLUDE_FROM_CENTRAL_COUNTERPARTY = 7;
  static const int MANUAL_MODE = 8;
  static const int AUTOMATIC_POSTING_MODE = 9;
  static const int AUTOMATIC_GIVE_UP_MODE = 10;
  static const int QUALIFIED_SERVICE_REPRESENTATIVE_QSR = 11;
  static const int CUSTOMER_TRADE = 12;
  static const int SELF_CLEARING = 13;
  ClearingInstruction() : IntField(577) {}
    ClearingInstruction(int data) : IntField(577, data) {}
    
  };
  
  public __gc class TradeInputSource : public StringField
  {
  public:
  static const int FIELD = 578;
  TradeInputSource() : StringField(578) {}
    TradeInputSource(String* data) : StringField(578, data) {}
    
  };
  
  public __gc class TradeInputDevice : public StringField
  {
  public:
  static const int FIELD = 579;
  TradeInputDevice() : StringField(579) {}
    TradeInputDevice(String* data) : StringField(579, data) {}
    
  };
  
  public __gc class NoDates : public IntField
  {
  public:
  static const int FIELD = 580;
  NoDates() : IntField(580) {}
    NoDates(int data) : IntField(580, data) {}
    
  };
  
  public __gc class AccountType : public IntField
  {
  public:
  static const int FIELD = 581;
  static const int ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS = 1;
  static const int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS = 2;
  static const int HOUSE_TRADER = 3;
  static const int FLOOR_TRADER = 4;
  static const int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED = 6;
  static const int ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED = 7;
  static const int JOINT_BACKOFFICE_ACCOUNT = 8;
  AccountType() : IntField(581) {}
    AccountType(int data) : IntField(581, data) {}
    
  };
  
  public __gc class CustOrderCapacity : public IntField
  {
  public:
  static const int FIELD = 582;
  static const int MEMBER_TRADING_FOR_THEIR_OWN_ACCOUNT = 1;
  static const int CLEARING_FIRM_TRADING_FOR_ITS_PROPRIETARY_ACCOUNT = 2;
  static const int MEMBER_TRADING_FOR_ANOTHER_MEMBER = 3;
  static const int ALL_OTHER = 4;
  CustOrderCapacity() : IntField(582) {}
    CustOrderCapacity(int data) : IntField(582, data) {}
    
  };
  
  public __gc class ClOrdLinkID : public StringField
  {
  public:
  static const int FIELD = 583;
  ClOrdLinkID() : StringField(583) {}
    ClOrdLinkID(String* data) : StringField(583, data) {}
    
  };
  
  public __gc class MassStatusReqID : public StringField
  {
  public:
  static const int FIELD = 584;
  MassStatusReqID() : StringField(584) {}
    MassStatusReqID(String* data) : StringField(584, data) {}
    
  };
  
  public __gc class MassStatusReqType : public IntField
  {
  public:
  static const int FIELD = 585;
  static const int STATUS_FOR_ORDERS_FOR_A_SECURITY = 1;
  static const int STATUS_FOR_ORDERS_FOR_AN_UNDERLYING_SECURITY = 2;
  static const int STATUS_FOR_ORDERS_FOR_A_PRODUCT = 3;
  static const int STATUS_FOR_ORDERS_FOR_A_CFICODE = 4;
  static const int STATUS_FOR_ORDERS_FOR_A_SECURITYTYPE = 5;
  static const int STATUS_FOR_ORDERS_FOR_A_TRADING_SESSION = 6;
  static const int STATUS_FOR_ALL_ORDERS = 7;
  static const int STATUS_FOR_ORDERS_FOR_A_PARTYID = 8;
  MassStatusReqType() : IntField(585) {}
    MassStatusReqType(int data) : IntField(585, data) {}
    
  };
  
  public __gc class OrigOrdModTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 586;
  OrigOrdModTime() : UtcTimeStampField(586) {}
    OrigOrdModTime(DateTime data) : UtcTimeStampField(586, data) {}
    OrigOrdModTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(586, data, showMilliseconds) {}
    
  };
  
  public __gc class LegSettlType : public CharField
  {
  public:
  static const int FIELD = 587;
  LegSettlType() : CharField(587) {}
    LegSettlType(__wchar_t data) : CharField(587, data) {}
    
  };
  
  public __gc class LegSettlDate : public StringField
  {
  public:
  static const int FIELD = 588;
  LegSettlDate() : StringField(588) {}
    LegSettlDate(String* data) : StringField(588, data) {}
    
  };
  
  public __gc class DayBookingInst : public CharField
  {
  public:
  static const int FIELD = 589;
  static const __wchar_t CAN_TRIGGER_BOOKING_WITHOUT_REFERENCE_TO_THE_ORDER_INITIATOR = '0';
  static const __wchar_t SPEAK_WITH_ORDER_INITIATOR_BEFORE_BOOKING = '1';
  static const __wchar_t ACCUMULATE = '2';
  DayBookingInst() : CharField(589) {}
    DayBookingInst(__wchar_t data) : CharField(589, data) {}
    
  };
  
  public __gc class BookingUnit : public CharField
  {
  public:
  static const int FIELD = 590;
  static const __wchar_t EACH_PARTIAL_EXECUTION_IS_A_BOOKABLE_UNIT = '0';
  static const __wchar_t AGGREGATE_PARTIAL_EXECUTIONS_ON_THIS_ORDER_AND_BOOK_ONE_TRADE_PER_ORDER = '1';
  static const __wchar_t AGGREGATE_EXECUTIONS_FOR_THIS_SYMBOL_SIDE_AND_SETTLEMENT_DATE = '2';
  BookingUnit() : CharField(590) {}
    BookingUnit(__wchar_t data) : CharField(590, data) {}
    
  };
  
  public __gc class PreallocMethod : public CharField
  {
  public:
  static const int FIELD = 591;
  static const __wchar_t PRO_RATA = '0';
  static const __wchar_t DO_NOT_PRO_RATA = '1';
  PreallocMethod() : CharField(591) {}
    PreallocMethod(__wchar_t data) : CharField(591, data) {}
    
  };
  
  public __gc class UnderlyingCountryOfIssue : public StringField
  {
  public:
  static const int FIELD = 592;
  UnderlyingCountryOfIssue() : StringField(592) {}
    UnderlyingCountryOfIssue(String* data) : StringField(592, data) {}
    
  };
  
  public __gc class UnderlyingStateOrProvinceOfIssue : public StringField
  {
  public:
  static const int FIELD = 593;
  UnderlyingStateOrProvinceOfIssue() : StringField(593) {}
    UnderlyingStateOrProvinceOfIssue(String* data) : StringField(593, data) {}
    
  };
  
  public __gc class UnderlyingLocaleOfIssue : public StringField
  {
  public:
  static const int FIELD = 594;
  UnderlyingLocaleOfIssue() : StringField(594) {}
    UnderlyingLocaleOfIssue(String* data) : StringField(594, data) {}
    
  };
  
  public __gc class UnderlyingInstrRegistry : public StringField
  {
  public:
  static const int FIELD = 595;
  UnderlyingInstrRegistry() : StringField(595) {}
    UnderlyingInstrRegistry(String* data) : StringField(595, data) {}
    
  };
  
  public __gc class LegCountryOfIssue : public StringField
  {
  public:
  static const int FIELD = 596;
  LegCountryOfIssue() : StringField(596) {}
    LegCountryOfIssue(String* data) : StringField(596, data) {}
    
  };
  
  public __gc class LegStateOrProvinceOfIssue : public StringField
  {
  public:
  static const int FIELD = 597;
  LegStateOrProvinceOfIssue() : StringField(597) {}
    LegStateOrProvinceOfIssue(String* data) : StringField(597, data) {}
    
  };
  
  public __gc class LegLocaleOfIssue : public StringField
  {
  public:
  static const int FIELD = 598;
  LegLocaleOfIssue() : StringField(598) {}
    LegLocaleOfIssue(String* data) : StringField(598, data) {}
    
  };
  
  public __gc class LegInstrRegistry : public StringField
  {
  public:
  static const int FIELD = 599;
  LegInstrRegistry() : StringField(599) {}
    LegInstrRegistry(String* data) : StringField(599, data) {}
    
  };
  
  public __gc class LegSymbol : public StringField
  {
  public:
  static const int FIELD = 600;
  LegSymbol() : StringField(600) {}
    LegSymbol(String* data) : StringField(600, data) {}
    
  };
  
  public __gc class LegSymbolSfx : public StringField
  {
  public:
  static const int FIELD = 601;
  LegSymbolSfx() : StringField(601) {}
    LegSymbolSfx(String* data) : StringField(601, data) {}
    
  };
  
  public __gc class LegSecurityID : public StringField
  {
  public:
  static const int FIELD = 602;
  LegSecurityID() : StringField(602) {}
    LegSecurityID(String* data) : StringField(602, data) {}
    
  };
  
  public __gc class LegSecurityIDSource : public StringField
  {
  public:
  static const int FIELD = 603;
  LegSecurityIDSource() : StringField(603) {}
    LegSecurityIDSource(String* data) : StringField(603, data) {}
    
  };
  
  public __gc class NoLegSecurityAltID : public StringField
  {
  public:
  static const int FIELD = 604;
  NoLegSecurityAltID() : StringField(604) {}
    NoLegSecurityAltID(String* data) : StringField(604, data) {}
    
  };
  
  public __gc class LegSecurityAltID : public StringField
  {
  public:
  static const int FIELD = 605;
  LegSecurityAltID() : StringField(605) {}
    LegSecurityAltID(String* data) : StringField(605, data) {}
    
  };
  
  public __gc class LegSecurityAltIDSource : public StringField
  {
  public:
  static const int FIELD = 606;
  LegSecurityAltIDSource() : StringField(606) {}
    LegSecurityAltIDSource(String* data) : StringField(606, data) {}
    
  };
  
  public __gc class LegProduct : public IntField
  {
  public:
  static const int FIELD = 607;
  LegProduct() : IntField(607) {}
    LegProduct(int data) : IntField(607, data) {}
    
  };
  
  public __gc class LegCFICode : public StringField
  {
  public:
  static const int FIELD = 608;
  LegCFICode() : StringField(608) {}
    LegCFICode(String* data) : StringField(608, data) {}
    
  };
  
  public __gc class LegSecurityType : public StringField
  {
  public:
  static const int FIELD = 609;
  LegSecurityType() : StringField(609) {}
    LegSecurityType(String* data) : StringField(609, data) {}
    
  };
  
  public __gc class LegMaturityMonthYear : public StringField
  {
  public:
  static const int FIELD = 610;
  LegMaturityMonthYear() : StringField(610) {}
    LegMaturityMonthYear(String* data) : StringField(610, data) {}
    
  };
  
  public __gc class LegMaturityDate : public StringField
  {
  public:
  static const int FIELD = 611;
  LegMaturityDate() : StringField(611) {}
    LegMaturityDate(String* data) : StringField(611, data) {}
    
  };
  
  public __gc class LegStrikePrice : public DoubleField
  {
  public:
  static const int FIELD = 612;
  LegStrikePrice() : DoubleField(612) {}
    LegStrikePrice(double data) : DoubleField(612, data) {}
    LegStrikePrice(double data, int decimalPadding) : DoubleField(612, data, decimalPadding) {}
    
  };
  
  public __gc class LegOptAttribute : public CharField
  {
  public:
  static const int FIELD = 613;
  LegOptAttribute() : CharField(613) {}
    LegOptAttribute(__wchar_t data) : CharField(613, data) {}
    
  };
  
  public __gc class LegContractMultiplier : public DoubleField
  {
  public:
  static const int FIELD = 614;
  LegContractMultiplier() : DoubleField(614) {}
    LegContractMultiplier(double data) : DoubleField(614, data) {}
    LegContractMultiplier(double data, int decimalPadding) : DoubleField(614, data, decimalPadding) {}
    
  };
  
  public __gc class LegCouponRate : public DoubleField
  {
  public:
  static const int FIELD = 615;
  LegCouponRate() : DoubleField(615) {}
    LegCouponRate(double data) : DoubleField(615, data) {}
    LegCouponRate(double data, int decimalPadding) : DoubleField(615, data, decimalPadding) {}
    
  };
  
  public __gc class LegSecurityExchange : public StringField
  {
  public:
  static const int FIELD = 616;
  LegSecurityExchange() : StringField(616) {}
    LegSecurityExchange(String* data) : StringField(616, data) {}
    
  };
  
  public __gc class LegIssuer : public StringField
  {
  public:
  static const int FIELD = 617;
  LegIssuer() : StringField(617) {}
    LegIssuer(String* data) : StringField(617, data) {}
    
  };
  
  public __gc class EncodedLegIssuerLen : public IntField
  {
  public:
  static const int FIELD = 618;
  EncodedLegIssuerLen() : IntField(618) {}
    EncodedLegIssuerLen(int data) : IntField(618, data) {}
    
  };
  
  public __gc class EncodedLegIssuer : public StringField
  {
  public:
  static const int FIELD = 619;
  EncodedLegIssuer() : StringField(619) {}
    EncodedLegIssuer(String* data) : StringField(619, data) {}
    
  };
  
  public __gc class LegSecurityDesc : public StringField
  {
  public:
  static const int FIELD = 620;
  LegSecurityDesc() : StringField(620) {}
    LegSecurityDesc(String* data) : StringField(620, data) {}
    
  };
  
  public __gc class EncodedLegSecurityDescLen : public IntField
  {
  public:
  static const int FIELD = 621;
  EncodedLegSecurityDescLen() : IntField(621) {}
    EncodedLegSecurityDescLen(int data) : IntField(621, data) {}
    
  };
  
  public __gc class EncodedLegSecurityDesc : public StringField
  {
  public:
  static const int FIELD = 622;
  EncodedLegSecurityDesc() : StringField(622) {}
    EncodedLegSecurityDesc(String* data) : StringField(622, data) {}
    
  };
  
  public __gc class LegRatioQty : public DoubleField
  {
  public:
  static const int FIELD = 623;
  LegRatioQty() : DoubleField(623) {}
    LegRatioQty(double data) : DoubleField(623, data) {}
    LegRatioQty(double data, int decimalPadding) : DoubleField(623, data, decimalPadding) {}
    
  };
  
  public __gc class LegSide : public CharField
  {
  public:
  static const int FIELD = 624;
  LegSide() : CharField(624) {}
    LegSide(__wchar_t data) : CharField(624, data) {}
    
  };
  
  public __gc class TradingSessionSubID : public StringField
  {
  public:
  static const int FIELD = 625;
  TradingSessionSubID() : StringField(625) {}
    TradingSessionSubID(String* data) : StringField(625, data) {}
    
  };
  
  public __gc class AllocType : public IntField
  {
  public:
  static const int FIELD = 626;
  static const int CALCULATED = 1;
  static const int PRELIMINARY = 2;
  static const int SELLSIDE_CALCULATED_USING_PRELIMINARY = 3;
  static const int SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY = 4;
  static const int READY_TO_BOOK_SINGLE_ORDER = 5;
  static const int BUYSIDE_READY_TO_BOOK = 6;
  static const int WAREHOUSE_INSTRUCTION = 7;
  static const int REQUEST_TO_INTERMEDIARY = 8;
  static const int ACCEPT = 9;
  static const int REJECT = 10;
  static const int ACCEPT_PENDING = 11;
  static const int INCOMPLETE_GROUP = 12;
  static const int COMPLETE_GROUP = 13;
  static const int REVERSAL_PENDING = 14;
  AllocType() : IntField(626) {}
    AllocType(int data) : IntField(626, data) {}
    
  };
  
  public __gc class MidPx : public DoubleField
  {
  public:
  static const int FIELD = 631;
  MidPx() : DoubleField(631) {}
    MidPx(double data) : DoubleField(631, data) {}
    MidPx(double data, int decimalPadding) : DoubleField(631, data, decimalPadding) {}
    
  };
  
  public __gc class BidYield : public DoubleField
  {
  public:
  static const int FIELD = 632;
  BidYield() : DoubleField(632) {}
    BidYield(double data) : DoubleField(632, data) {}
    BidYield(double data, int decimalPadding) : DoubleField(632, data, decimalPadding) {}
    
  };
  
  public __gc class MidYield : public DoubleField
  {
  public:
  static const int FIELD = 633;
  MidYield() : DoubleField(633) {}
    MidYield(double data) : DoubleField(633, data) {}
    MidYield(double data, int decimalPadding) : DoubleField(633, data, decimalPadding) {}
    
  };
  
  public __gc class OfferYield : public DoubleField
  {
  public:
  static const int FIELD = 634;
  OfferYield() : DoubleField(634) {}
    OfferYield(double data) : DoubleField(634, data) {}
    OfferYield(double data, int decimalPadding) : DoubleField(634, data, decimalPadding) {}
    
  };
  
  public __gc class ClearingFeeIndicator : public StringField
  {
  public:
  static const int FIELD = 635;
  static const String* CBOE_MEMBER = "B";
  static const String* NON_MEMBER_AND_CUSTOMER = "C";
  static const String* EQUITY_MEMBER_AND_CLEARING_MEMBER = "E";
  static const String* FULL_AND_ASSOCIATE_MEMBER_TRADING_FOR_OWN_ACCOUNT_AND_AS_FLOOR_BROKERS = "F";
  static const String* FIRMS_106H_AND_106J = "H";
  static const String* GIM_IDEM_AND_COM_MEMBERSHIP_INTEREST_HOLDERS = "I";
  static const String* LESSEE_AND_106F_EMPLOYEES = "L";
  static const String* ALL_OTHER_OWNERSHIP_TYPES = "M";
  static const String* _1ST_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "1";
  static const String* _2ND_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "2";
  static const String* _3RD_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "3";
  static const String* _4TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "4";
  static const String* _5TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "5";
  static const String* _6TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT = "9";
  ClearingFeeIndicator() : StringField(635) {}
    ClearingFeeIndicator(String* data) : StringField(635, data) {}
    
  };
  
  public __gc class WorkingIndicator : public BooleanField
  {
  public:
  static const int FIELD = 636;
  WorkingIndicator() : BooleanField(636) {}
    WorkingIndicator(bool data) : BooleanField(636, data) {}
    
  };
  
  public __gc class LegLastPx : public DoubleField
  {
  public:
  static const int FIELD = 637;
  LegLastPx() : DoubleField(637) {}
    LegLastPx(double data) : DoubleField(637, data) {}
    LegLastPx(double data, int decimalPadding) : DoubleField(637, data, decimalPadding) {}
    
  };
  
  public __gc class PriorityIndicator : public IntField
  {
  public:
  static const int FIELD = 638;
  static const int PRIORITY_UNCHANGED = 0;
  static const int LOST_PRIORITY_AS_RESULT_OF_ORDER_CHANGE = 1;
  PriorityIndicator() : IntField(638) {}
    PriorityIndicator(int data) : IntField(638, data) {}
    
  };
  
  public __gc class PriceImprovement : public DoubleField
  {
  public:
  static const int FIELD = 639;
  PriceImprovement() : DoubleField(639) {}
    PriceImprovement(double data) : DoubleField(639, data) {}
    PriceImprovement(double data, int decimalPadding) : DoubleField(639, data, decimalPadding) {}
    
  };
  
  public __gc class Price2 : public DoubleField
  {
  public:
  static const int FIELD = 640;
  Price2() : DoubleField(640) {}
    Price2(double data) : DoubleField(640, data) {}
    Price2(double data, int decimalPadding) : DoubleField(640, data, decimalPadding) {}
    
  };
  
  public __gc class LastForwardPoints2 : public DoubleField
  {
  public:
  static const int FIELD = 641;
  LastForwardPoints2() : DoubleField(641) {}
    LastForwardPoints2(double data) : DoubleField(641, data) {}
    LastForwardPoints2(double data, int decimalPadding) : DoubleField(641, data, decimalPadding) {}
    
  };
  
  public __gc class BidForwardPoints2 : public DoubleField
  {
  public:
  static const int FIELD = 642;
  BidForwardPoints2() : DoubleField(642) {}
    BidForwardPoints2(double data) : DoubleField(642, data) {}
    BidForwardPoints2(double data, int decimalPadding) : DoubleField(642, data, decimalPadding) {}
    
  };
  
  public __gc class OfferForwardPoints2 : public DoubleField
  {
  public:
  static const int FIELD = 643;
  OfferForwardPoints2() : DoubleField(643) {}
    OfferForwardPoints2(double data) : DoubleField(643, data) {}
    OfferForwardPoints2(double data, int decimalPadding) : DoubleField(643, data, decimalPadding) {}
    
  };
  
  public __gc class RFQReqID : public StringField
  {
  public:
  static const int FIELD = 644;
  RFQReqID() : StringField(644) {}
    RFQReqID(String* data) : StringField(644, data) {}
    
  };
  
  public __gc class MktBidPx : public DoubleField
  {
  public:
  static const int FIELD = 645;
  MktBidPx() : DoubleField(645) {}
    MktBidPx(double data) : DoubleField(645, data) {}
    MktBidPx(double data, int decimalPadding) : DoubleField(645, data, decimalPadding) {}
    
  };
  
  public __gc class MktOfferPx : public DoubleField
  {
  public:
  static const int FIELD = 646;
  MktOfferPx() : DoubleField(646) {}
    MktOfferPx(double data) : DoubleField(646, data) {}
    MktOfferPx(double data, int decimalPadding) : DoubleField(646, data, decimalPadding) {}
    
  };
  
  public __gc class MinBidSize : public DoubleField
  {
  public:
  static const int FIELD = 647;
  MinBidSize() : DoubleField(647) {}
    MinBidSize(double data) : DoubleField(647, data) {}
    MinBidSize(double data, int decimalPadding) : DoubleField(647, data, decimalPadding) {}
    
  };
  
  public __gc class MinOfferSize : public DoubleField
  {
  public:
  static const int FIELD = 648;
  MinOfferSize() : DoubleField(648) {}
    MinOfferSize(double data) : DoubleField(648, data) {}
    MinOfferSize(double data, int decimalPadding) : DoubleField(648, data, decimalPadding) {}
    
  };
  
  public __gc class QuoteStatusReqID : public StringField
  {
  public:
  static const int FIELD = 649;
  QuoteStatusReqID() : StringField(649) {}
    QuoteStatusReqID(String* data) : StringField(649, data) {}
    
  };
  
  public __gc class LegalConfirm : public BooleanField
  {
  public:
  static const int FIELD = 650;
  LegalConfirm() : BooleanField(650) {}
    LegalConfirm(bool data) : BooleanField(650, data) {}
    
  };
  
  public __gc class UnderlyingLastPx : public DoubleField
  {
  public:
  static const int FIELD = 651;
  UnderlyingLastPx() : DoubleField(651) {}
    UnderlyingLastPx(double data) : DoubleField(651, data) {}
    UnderlyingLastPx(double data, int decimalPadding) : DoubleField(651, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingLastQty : public DoubleField
  {
  public:
  static const int FIELD = 652;
  UnderlyingLastQty() : DoubleField(652) {}
    UnderlyingLastQty(double data) : DoubleField(652, data) {}
    UnderlyingLastQty(double data, int decimalPadding) : DoubleField(652, data, decimalPadding) {}
    
  };
  
  public __gc class SecDefStatus : public IntField
  {
  public:
  static const int FIELD = 653;
  static const int PENDING_APPROVAL = 0;
  static const int APPROVED = 1;
  static const int REJECTED = 2;
  static const int UNAUTHORIZED_REQUEST = 3;
  static const int INVALID_DEFINITION_REQUEST = 4;
  SecDefStatus() : IntField(653) {}
    SecDefStatus(int data) : IntField(653, data) {}
    
  };
  
  public __gc class LegRefID : public StringField
  {
  public:
  static const int FIELD = 654;
  LegRefID() : StringField(654) {}
    LegRefID(String* data) : StringField(654, data) {}
    
  };
  
  public __gc class ContraLegRefID : public StringField
  {
  public:
  static const int FIELD = 655;
  ContraLegRefID() : StringField(655) {}
    ContraLegRefID(String* data) : StringField(655, data) {}
    
  };
  
  public __gc class SettlCurrBidFxRate : public DoubleField
  {
  public:
  static const int FIELD = 656;
  SettlCurrBidFxRate() : DoubleField(656) {}
    SettlCurrBidFxRate(double data) : DoubleField(656, data) {}
    SettlCurrBidFxRate(double data, int decimalPadding) : DoubleField(656, data, decimalPadding) {}
    
  };
  
  public __gc class SettlCurrOfferFxRate : public DoubleField
  {
  public:
  static const int FIELD = 657;
  SettlCurrOfferFxRate() : DoubleField(657) {}
    SettlCurrOfferFxRate(double data) : DoubleField(657, data) {}
    SettlCurrOfferFxRate(double data, int decimalPadding) : DoubleField(657, data, decimalPadding) {}
    
  };
  
  public __gc class QuoteRequestRejectReason : public IntField
  {
  public:
  static const int FIELD = 658;
  static const int UNKNOWN_SYMBOL = 1;
  static const int EXCHANGE_CLOSED = 2;
  static const int QUOTE_REQUEST_EXCEEDS_LIMIT = 3;
  static const int TOO_LATE_TO_ENTER = 4;
  static const int INVALID_PRICE = 5;
  static const int NOT_AUTHORIZED_TO_REQUEST_QUOTE = 6;
  static const int NO_MATCH_FOR_INQUIRY = 7;
  static const int NO_MARKET_FOR_INSTRUMENT = 8;
  static const int NO_INVENTORY = 9;
  static const int PASS = 10;
  static const int INSUFFICIENT_CREDIT = 11;
  static const int OTHER = 99;
  QuoteRequestRejectReason() : IntField(658) {}
    QuoteRequestRejectReason(int data) : IntField(658, data) {}
    
  };
  
  public __gc class SideComplianceID : public StringField
  {
  public:
  static const int FIELD = 659;
  SideComplianceID() : StringField(659) {}
    SideComplianceID(String* data) : StringField(659, data) {}
    
  };
  
  public __gc class AcctIDSource : public IntField
  {
  public:
  static const int FIELD = 660;
  static const int BIC = 1;
  static const int SID_CODE = 2;
  static const int TFM = 3;
  static const int OMGEO = 4;
  static const int DTCC_CODE = 5;
  static const int OTHER = 99;
  AcctIDSource() : IntField(660) {}
    AcctIDSource(int data) : IntField(660, data) {}
    
  };
  
  public __gc class AllocAcctIDSource : public IntField
  {
  public:
  static const int FIELD = 661;
  AllocAcctIDSource() : IntField(661) {}
    AllocAcctIDSource(int data) : IntField(661, data) {}
    
  };
  
  public __gc class BenchmarkPrice : public DoubleField
  {
  public:
  static const int FIELD = 662;
  BenchmarkPrice() : DoubleField(662) {}
    BenchmarkPrice(double data) : DoubleField(662, data) {}
    BenchmarkPrice(double data, int decimalPadding) : DoubleField(662, data, decimalPadding) {}
    
  };
  
  public __gc class BenchmarkPriceType : public IntField
  {
  public:
  static const int FIELD = 663;
  BenchmarkPriceType() : IntField(663) {}
    BenchmarkPriceType(int data) : IntField(663, data) {}
    
  };
  
  public __gc class ConfirmID : public StringField
  {
  public:
  static const int FIELD = 664;
  ConfirmID() : StringField(664) {}
    ConfirmID(String* data) : StringField(664, data) {}
    
  };
  
  public __gc class ConfirmStatus : public IntField
  {
  public:
  static const int FIELD = 665;
  static const int RECEIVED = 1;
  static const int MISMATCHED_ACCOUNT = 2;
  static const int MISSING_SETTLEMENT_INSTRUCTIONS = 3;
  static const int CONFIRMED = 4;
  static const int REQUEST_REJECTED = 5;
  ConfirmStatus() : IntField(665) {}
    ConfirmStatus(int data) : IntField(665, data) {}
    
  };
  
  public __gc class ConfirmTransType : public IntField
  {
  public:
  static const int FIELD = 666;
  static const int NEW = 0;
  static const int REPLACE = 1;
  static const int CANCEL = 2;
  ConfirmTransType() : IntField(666) {}
    ConfirmTransType(int data) : IntField(666, data) {}
    
  };
  
  public __gc class ContractSettlMonth : public StringField
  {
  public:
  static const int FIELD = 667;
  ContractSettlMonth() : StringField(667) {}
    ContractSettlMonth(String* data) : StringField(667, data) {}
    
  };
  
  public __gc class DeliveryForm : public IntField
  {
  public:
  static const int FIELD = 668;
  static const int BOOKENTRY = 1;
  static const int BEARER = 2;
  DeliveryForm() : IntField(668) {}
    DeliveryForm(int data) : IntField(668, data) {}
    
  };
  
  public __gc class LastParPx : public DoubleField
  {
  public:
  static const int FIELD = 669;
  LastParPx() : DoubleField(669) {}
    LastParPx(double data) : DoubleField(669, data) {}
    LastParPx(double data, int decimalPadding) : DoubleField(669, data, decimalPadding) {}
    
  };
  
  public __gc class NoLegAllocs : public IntField
  {
  public:
  static const int FIELD = 670;
  NoLegAllocs() : IntField(670) {}
    NoLegAllocs(int data) : IntField(670, data) {}
    
  };
  
  public __gc class LegAllocAccount : public StringField
  {
  public:
  static const int FIELD = 671;
  LegAllocAccount() : StringField(671) {}
    LegAllocAccount(String* data) : StringField(671, data) {}
    
  };
  
  public __gc class LegIndividualAllocID : public StringField
  {
  public:
  static const int FIELD = 672;
  LegIndividualAllocID() : StringField(672) {}
    LegIndividualAllocID(String* data) : StringField(672, data) {}
    
  };
  
  public __gc class LegAllocQty : public DoubleField
  {
  public:
  static const int FIELD = 673;
  LegAllocQty() : DoubleField(673) {}
    LegAllocQty(double data) : DoubleField(673, data) {}
    LegAllocQty(double data, int decimalPadding) : DoubleField(673, data, decimalPadding) {}
    
  };
  
  public __gc class LegAllocAcctIDSource : public StringField
  {
  public:
  static const int FIELD = 674;
  LegAllocAcctIDSource() : StringField(674) {}
    LegAllocAcctIDSource(String* data) : StringField(674, data) {}
    
  };
  
  public __gc class LegSettlCurrency : public StringField
  {
  public:
  static const int FIELD = 675;
  LegSettlCurrency() : StringField(675) {}
    LegSettlCurrency(String* data) : StringField(675, data) {}
    
  };
  
  public __gc class LegBenchmarkCurveCurrency : public StringField
  {
  public:
  static const int FIELD = 676;
  LegBenchmarkCurveCurrency() : StringField(676) {}
    LegBenchmarkCurveCurrency(String* data) : StringField(676, data) {}
    
  };
  
  public __gc class LegBenchmarkCurveName : public StringField
  {
  public:
  static const int FIELD = 677;
  LegBenchmarkCurveName() : StringField(677) {}
    LegBenchmarkCurveName(String* data) : StringField(677, data) {}
    
  };
  
  public __gc class LegBenchmarkCurvePoint : public StringField
  {
  public:
  static const int FIELD = 678;
  LegBenchmarkCurvePoint() : StringField(678) {}
    LegBenchmarkCurvePoint(String* data) : StringField(678, data) {}
    
  };
  
  public __gc class LegBenchmarkPrice : public DoubleField
  {
  public:
  static const int FIELD = 679;
  LegBenchmarkPrice() : DoubleField(679) {}
    LegBenchmarkPrice(double data) : DoubleField(679, data) {}
    LegBenchmarkPrice(double data, int decimalPadding) : DoubleField(679, data, decimalPadding) {}
    
  };
  
  public __gc class LegBenchmarkPriceType : public IntField
  {
  public:
  static const int FIELD = 680;
  LegBenchmarkPriceType() : IntField(680) {}
    LegBenchmarkPriceType(int data) : IntField(680, data) {}
    
  };
  
  public __gc class LegBidPx : public DoubleField
  {
  public:
  static const int FIELD = 681;
  LegBidPx() : DoubleField(681) {}
    LegBidPx(double data) : DoubleField(681, data) {}
    LegBidPx(double data, int decimalPadding) : DoubleField(681, data, decimalPadding) {}
    
  };
  
  public __gc class LegIOIQty : public StringField
  {
  public:
  static const int FIELD = 682;
  LegIOIQty() : StringField(682) {}
    LegIOIQty(String* data) : StringField(682, data) {}
    
  };
  
  public __gc class NoLegStipulations : public IntField
  {
  public:
  static const int FIELD = 683;
  NoLegStipulations() : IntField(683) {}
    NoLegStipulations(int data) : IntField(683, data) {}
    
  };
  
  public __gc class LegOfferPx : public DoubleField
  {
  public:
  static const int FIELD = 684;
  LegOfferPx() : DoubleField(684) {}
    LegOfferPx(double data) : DoubleField(684, data) {}
    LegOfferPx(double data, int decimalPadding) : DoubleField(684, data, decimalPadding) {}
    
  };
  
  public __gc class LegOrderQty : public DoubleField
  {
  public:
  static const int FIELD = 685;
  LegOrderQty() : DoubleField(685) {}
    LegOrderQty(double data) : DoubleField(685, data) {}
    LegOrderQty(double data, int decimalPadding) : DoubleField(685, data, decimalPadding) {}
    
  };
  
  public __gc class LegPriceType : public IntField
  {
  public:
  static const int FIELD = 686;
  LegPriceType() : IntField(686) {}
    LegPriceType(int data) : IntField(686, data) {}
    
  };
  
  public __gc class LegQty : public DoubleField
  {
  public:
  static const int FIELD = 687;
  LegQty() : DoubleField(687) {}
    LegQty(double data) : DoubleField(687, data) {}
    LegQty(double data, int decimalPadding) : DoubleField(687, data, decimalPadding) {}
    
  };
  
  public __gc class LegStipulationType : public StringField
  {
  public:
  static const int FIELD = 688;
  LegStipulationType() : StringField(688) {}
    LegStipulationType(String* data) : StringField(688, data) {}
    
  };
  
  public __gc class LegStipulationValue : public StringField
  {
  public:
  static const int FIELD = 689;
  LegStipulationValue() : StringField(689) {}
    LegStipulationValue(String* data) : StringField(689, data) {}
    
  };
  
  public __gc class LegSwapType : public IntField
  {
  public:
  static const int FIELD = 690;
  static const int PAR_FOR_PAR = 1;
  static const int MODIFIED_DURATION = 2;
  static const int RISK = 4;
  static const int PROCEEDS = 5;
  LegSwapType() : IntField(690) {}
    LegSwapType(int data) : IntField(690, data) {}
    
  };
  
  public __gc class Pool : public StringField
  {
  public:
  static const int FIELD = 691;
  Pool() : StringField(691) {}
    Pool(String* data) : StringField(691, data) {}
    
  };
  
  public __gc class QuotePriceType : public IntField
  {
  public:
  static const int FIELD = 692;
  static const int PERCENT = 1;
  static const int PER_SHARE = 2;
  static const int FIXED_AMOUNT = 3;
  static const int DISCOUNT = 4;
  static const int PREMIUM = 5;
  static const int BASIS_POINTS_RELATIVE_TO_BENCHMARK = 6;
  static const int TED_PRICE = 7;
  static const int TED_YIELD = 8;
  static const int YIELD_SPREAD = 9;
  static const int YIELD = 10;
  QuotePriceType() : IntField(692) {}
    QuotePriceType(int data) : IntField(692, data) {}
    
  };
  
  public __gc class QuoteRespID : public StringField
  {
  public:
  static const int FIELD = 693;
  QuoteRespID() : StringField(693) {}
    QuoteRespID(String* data) : StringField(693, data) {}
    
  };
  
  public __gc class QuoteRespType : public IntField
  {
  public:
  static const int FIELD = 694;
  static const int HIT_LIFT = 1;
  static const int COUNTER = 2;
  static const int EXPIRED = 3;
  static const int COVER = 4;
  static const int DONE_AWAY = 5;
  static const int PASS = 6;
  QuoteRespType() : IntField(694) {}
    QuoteRespType(int data) : IntField(694, data) {}
    
  };
  
  public __gc class QuoteQualifier : public CharField
  {
  public:
  static const int FIELD = 695;
  QuoteQualifier() : CharField(695) {}
    QuoteQualifier(__wchar_t data) : CharField(695, data) {}
    
  };
  
  public __gc class YieldRedemptionDate : public StringField
  {
  public:
  static const int FIELD = 696;
  YieldRedemptionDate() : StringField(696) {}
    YieldRedemptionDate(String* data) : StringField(696, data) {}
    
  };
  
  public __gc class YieldRedemptionPrice : public DoubleField
  {
  public:
  static const int FIELD = 697;
  YieldRedemptionPrice() : DoubleField(697) {}
    YieldRedemptionPrice(double data) : DoubleField(697, data) {}
    YieldRedemptionPrice(double data, int decimalPadding) : DoubleField(697, data, decimalPadding) {}
    
  };
  
  public __gc class YieldRedemptionPriceType : public IntField
  {
  public:
  static const int FIELD = 698;
  YieldRedemptionPriceType() : IntField(698) {}
    YieldRedemptionPriceType(int data) : IntField(698, data) {}
    
  };
  
  public __gc class BenchmarkSecurityID : public StringField
  {
  public:
  static const int FIELD = 699;
  BenchmarkSecurityID() : StringField(699) {}
    BenchmarkSecurityID(String* data) : StringField(699, data) {}
    
  };
  
  public __gc class ReversalIndicator : public BooleanField
  {
  public:
  static const int FIELD = 700;
  ReversalIndicator() : BooleanField(700) {}
    ReversalIndicator(bool data) : BooleanField(700, data) {}
    
  };
  
  public __gc class YieldCalcDate : public StringField
  {
  public:
  static const int FIELD = 701;
  YieldCalcDate() : StringField(701) {}
    YieldCalcDate(String* data) : StringField(701, data) {}
    
  };
  
  public __gc class NoPositions : public IntField
  {
  public:
  static const int FIELD = 702;
  NoPositions() : IntField(702) {}
    NoPositions(int data) : IntField(702, data) {}
    
  };
  
  public __gc class PosType : public StringField
  {
  public:
  static const int FIELD = 703;
  static const String* TRANSACTION_QUANTITY = "TQ";
  static const String* INTRA_SPREAD_QTY = "IAS";
  static const String* INTER_SPREAD_QTY = "IES";
  static const String* END_OF_DAY_QTY = "FIN";
  static const String* START_OF_DAY_QTY = "SOD";
  static const String* OPTION_EXERCISE_QTY = "EX";
  static const String* OPTION_ASSIGNMENT = "AS";
  static const String* TRANSACTION_FROM_EXERCISE = "TX";
  static const String* TRANSACTION_FROM_ASSIGNMENT = "TA";
  static const String* PIT_TRADE_QTY = "PIT";
  static const String* TRANSFER_TRADE_QTY = "TRF";
  static const String* ELECTRONIC_TRADE_QTY = "ETR";
  static const String* ALLOCATION_TRADE_QTY = "ALC";
  static const String* ADJUSTMENT_QTY = "PA";
  static const String* AS_OF_TRADE_QTY = "ASF";
  static const String* DELIVERY_QTY = "DLV";
  static const String* TOTAL_TRANSACTION_QTY = "TOT";
  static const String* CROSS_MARGIN_QTY = "XM";
  static const String* INTEGRAL_SPLIT = "SPL";
  static const String* RECEIVE_QUANTITY = "RCV";
  static const String* CORPORATE_ACTION_ADJUSTMENT = "CAA";
  static const String* DELIVERY_NOTICE_QTY = "DN";
  static const String* EXCHANGE_FOR_PHYSICAL_QTY = "EP";
  PosType() : StringField(703) {}
    PosType(String* data) : StringField(703, data) {}
    
  };
  
  public __gc class LongQty : public DoubleField
  {
  public:
  static const int FIELD = 704;
  LongQty() : DoubleField(704) {}
    LongQty(double data) : DoubleField(704, data) {}
    LongQty(double data, int decimalPadding) : DoubleField(704, data, decimalPadding) {}
    
  };
  
  public __gc class ShortQty : public DoubleField
  {
  public:
  static const int FIELD = 705;
  ShortQty() : DoubleField(705) {}
    ShortQty(double data) : DoubleField(705, data) {}
    ShortQty(double data, int decimalPadding) : DoubleField(705, data, decimalPadding) {}
    
  };
  
  public __gc class PosQtyStatus : public IntField
  {
  public:
  static const int FIELD = 706;
  static const int SUBMITTED = 0;
  static const int ACCEPTED = 1;
  static const int REJECTED = 2;
  PosQtyStatus() : IntField(706) {}
    PosQtyStatus(int data) : IntField(706, data) {}
    
  };
  
  public __gc class PosAmtType : public StringField
  {
  public:
  static const int FIELD = 707;
  static const String* FINAL_MARK_TO_MARKET_AMOUNT = "FMTM";
  static const String* INCREMENTAL_MARK_TO_MARKET_AMOUNT = "IMTM";
  static const String* TRADE_VARIATION_AMOUNT = "TVAR";
  static const String* START_OF_DAY_MARK_TO_MARKET_AMOUNT = "SMTM";
  static const String* PREMIUM_AMOUNT = "PREM";
  static const String* CASH_RESIDUAL_AMOUNT = "CRES";
  static const String* CASH_AMOUNT = "CASH";
  static const String* VALUE_ADJUSTED_AMOUNT = "VADJ";
  static const String* SETTLEMENT_VALUE = "SETL";
  PosAmtType() : StringField(707) {}
    PosAmtType(String* data) : StringField(707, data) {}
    
  };
  
  public __gc class PosAmt : public DoubleField
  {
  public:
  static const int FIELD = 708;
  PosAmt() : DoubleField(708) {}
    PosAmt(double data) : DoubleField(708, data) {}
    PosAmt(double data, int decimalPadding) : DoubleField(708, data, decimalPadding) {}
    
  };
  
  public __gc class PosTransType : public IntField
  {
  public:
  static const int FIELD = 709;
  static const int EXERCISE = 1;
  static const int DO_NOT_EXERCISE = 2;
  static const int POSITION_ADJUSTMENT = 3;
  static const int POSITION_CHANGE_SUBMISSION_MARGIN_DISPOSITION = 4;
  static const int PLEDGE = 5;
  static const int LARGE_TRADER_SUBMISSION = 6;
  PosTransType() : IntField(709) {}
    PosTransType(int data) : IntField(709, data) {}
    
  };
  
  public __gc class PosReqID : public StringField
  {
  public:
  static const int FIELD = 710;
  PosReqID() : StringField(710) {}
    PosReqID(String* data) : StringField(710, data) {}
    
  };
  
  public __gc class NoUnderlyings : public IntField
  {
  public:
  static const int FIELD = 711;
  NoUnderlyings() : IntField(711) {}
    NoUnderlyings(int data) : IntField(711, data) {}
    
  };
  
  public __gc class PosMaintAction : public IntField
  {
  public:
  static const int FIELD = 712;
  static const int NEW = 1;
  static const int REPLACE = 2;
  static const int CANCEL = 3;
  static const int REVERSE = 4;
  PosMaintAction() : IntField(712) {}
    PosMaintAction(int data) : IntField(712, data) {}
    
  };
  
  public __gc class OrigPosReqRefID : public StringField
  {
  public:
  static const int FIELD = 713;
  OrigPosReqRefID() : StringField(713) {}
    OrigPosReqRefID(String* data) : StringField(713, data) {}
    
  };
  
  public __gc class PosMaintRptRefID : public StringField
  {
  public:
  static const int FIELD = 714;
  PosMaintRptRefID() : StringField(714) {}
    PosMaintRptRefID(String* data) : StringField(714, data) {}
    
  };
  
  public __gc class ClearingBusinessDate : public StringField
  {
  public:
  static const int FIELD = 715;
  ClearingBusinessDate() : StringField(715) {}
    ClearingBusinessDate(String* data) : StringField(715, data) {}
    
  };
  
  public __gc class SettlSessID : public StringField
  {
  public:
  static const int FIELD = 716;
  static const String* INTRADAY = "ITD";
  static const String* REGULAR_TRADING_HOURS = "RTH";
  static const String* ELECTRONIC_TRADING_HOURS = "ETH";
  static const String* END_OF_DAY = "EOD";
  SettlSessID() : StringField(716) {}
    SettlSessID(String* data) : StringField(716, data) {}
    
  };
  
  public __gc class SettlSessSubID : public StringField
  {
  public:
  static const int FIELD = 717;
  SettlSessSubID() : StringField(717) {}
    SettlSessSubID(String* data) : StringField(717, data) {}
    
  };
  
  public __gc class AdjustmentType : public IntField
  {
  public:
  static const int FIELD = 718;
  static const int PROCESS_REQUEST_AS_MARGIN_DISPOSITION = 0;
  static const int DELTA_PLUS = 1;
  static const int DELTA_MINUS = 2;
  static const int FINAL = 3;
  AdjustmentType() : IntField(718) {}
    AdjustmentType(int data) : IntField(718, data) {}
    
  };
  
  public __gc class ContraryInstructionIndicator : public BooleanField
  {
  public:
  static const int FIELD = 719;
  ContraryInstructionIndicator() : BooleanField(719) {}
    ContraryInstructionIndicator(bool data) : BooleanField(719, data) {}
    
  };
  
  public __gc class PriorSpreadIndicator : public BooleanField
  {
  public:
  static const int FIELD = 720;
  PriorSpreadIndicator() : BooleanField(720) {}
    PriorSpreadIndicator(bool data) : BooleanField(720, data) {}
    
  };
  
  public __gc class PosMaintRptID : public StringField
  {
  public:
  static const int FIELD = 721;
  PosMaintRptID() : StringField(721) {}
    PosMaintRptID(String* data) : StringField(721, data) {}
    
  };
  
  public __gc class PosMaintStatus : public IntField
  {
  public:
  static const int FIELD = 722;
  static const int ACCEPTED = 0;
  static const int ACCEPTED_WITH_WARNINGS = 1;
  static const int REJECTED = 2;
  static const int COMPLETED = 3;
  static const int COMPLETED_WITH_WARNINGS = 4;
  PosMaintStatus() : IntField(722) {}
    PosMaintStatus(int data) : IntField(722, data) {}
    
  };
  
  public __gc class PosMaintResult : public IntField
  {
  public:
  static const int FIELD = 723;
  static const int SUCCESSFUL_COMPLETION_NO_WARNINGS_OR_ERRORS = 0;
  static const int REJECTED = 1;
  static const int OTHER = 99;
  PosMaintResult() : IntField(723) {}
    PosMaintResult(int data) : IntField(723, data) {}
    
  };
  
  public __gc class PosReqType : public IntField
  {
  public:
  static const int FIELD = 724;
  static const int POSITIONS = 0;
  static const int TRADES = 1;
  static const int EXERCISES = 2;
  static const int ASSIGNMENTS = 3;
  static const int SETTLEMENT_ACTIVITY = 4;
  static const int BACKOUT_MESSAGE = 5;
  PosReqType() : IntField(724) {}
    PosReqType(int data) : IntField(724, data) {}
    
  };
  
  public __gc class ResponseTransportType : public IntField
  {
  public:
  static const int FIELD = 725;
  static const int INBAND = 0;
  static const int OUT_OF_BAND = 1;
  ResponseTransportType() : IntField(725) {}
    ResponseTransportType(int data) : IntField(725, data) {}
    
  };
  
  public __gc class ResponseDestination : public StringField
  {
  public:
  static const int FIELD = 726;
  ResponseDestination() : StringField(726) {}
    ResponseDestination(String* data) : StringField(726, data) {}
    
  };
  
  public __gc class TotalNumPosReports : public IntField
  {
  public:
  static const int FIELD = 727;
  TotalNumPosReports() : IntField(727) {}
    TotalNumPosReports(int data) : IntField(727, data) {}
    
  };
  
  public __gc class PosReqResult : public IntField
  {
  public:
  static const int FIELD = 728;
  static const int VALID_REQUEST = 0;
  static const int INVALID_OR_UNSUPPORTED_REQUEST = 1;
  static const int NO_POSITIONS_FOUND_THAT_MATCH_CRITERIA = 2;
  static const int NOT_AUTHORIZED_TO_REQUEST_POSITIONS = 3;
  static const int REQUEST_FOR_POSITION_NOT_SUPPORTED = 4;
  static const int OTHER = 99;
  PosReqResult() : IntField(728) {}
    PosReqResult(int data) : IntField(728, data) {}
    
  };
  
  public __gc class PosReqStatus : public IntField
  {
  public:
  static const int FIELD = 729;
  static const int COMPLETED = 0;
  static const int COMPLETED_WITH_WARNINGS = 1;
  static const int REJECTED = 2;
  PosReqStatus() : IntField(729) {}
    PosReqStatus(int data) : IntField(729, data) {}
    
  };
  
  public __gc class SettlPrice : public DoubleField
  {
  public:
  static const int FIELD = 730;
  SettlPrice() : DoubleField(730) {}
    SettlPrice(double data) : DoubleField(730, data) {}
    SettlPrice(double data, int decimalPadding) : DoubleField(730, data, decimalPadding) {}
    
  };
  
  public __gc class SettlPriceType : public IntField
  {
  public:
  static const int FIELD = 731;
  static const int FINAL = 1;
  static const int THEORETICAL = 2;
  SettlPriceType() : IntField(731) {}
    SettlPriceType(int data) : IntField(731, data) {}
    
  };
  
  public __gc class UnderlyingSettlPrice : public DoubleField
  {
  public:
  static const int FIELD = 732;
  UnderlyingSettlPrice() : DoubleField(732) {}
    UnderlyingSettlPrice(double data) : DoubleField(732, data) {}
    UnderlyingSettlPrice(double data, int decimalPadding) : DoubleField(732, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingSettlPriceType : public IntField
  {
  public:
  static const int FIELD = 733;
  UnderlyingSettlPriceType() : IntField(733) {}
    UnderlyingSettlPriceType(int data) : IntField(733, data) {}
    
  };
  
  public __gc class PriorSettlPrice : public DoubleField
  {
  public:
  static const int FIELD = 734;
  PriorSettlPrice() : DoubleField(734) {}
    PriorSettlPrice(double data) : DoubleField(734, data) {}
    PriorSettlPrice(double data, int decimalPadding) : DoubleField(734, data, decimalPadding) {}
    
  };
  
  public __gc class NoQuoteQualifiers : public IntField
  {
  public:
  static const int FIELD = 735;
  NoQuoteQualifiers() : IntField(735) {}
    NoQuoteQualifiers(int data) : IntField(735, data) {}
    
  };
  
  public __gc class AllocSettlCurrency : public StringField
  {
  public:
  static const int FIELD = 736;
  AllocSettlCurrency() : StringField(736) {}
    AllocSettlCurrency(String* data) : StringField(736, data) {}
    
  };
  
  public __gc class AllocSettlCurrAmt : public DoubleField
  {
  public:
  static const int FIELD = 737;
  AllocSettlCurrAmt() : DoubleField(737) {}
    AllocSettlCurrAmt(double data) : DoubleField(737, data) {}
    AllocSettlCurrAmt(double data, int decimalPadding) : DoubleField(737, data, decimalPadding) {}
    
  };
  
  public __gc class InterestAtMaturity : public DoubleField
  {
  public:
  static const int FIELD = 738;
  InterestAtMaturity() : DoubleField(738) {}
    InterestAtMaturity(double data) : DoubleField(738, data) {}
    InterestAtMaturity(double data, int decimalPadding) : DoubleField(738, data, decimalPadding) {}
    
  };
  
  public __gc class LegDatedDate : public StringField
  {
  public:
  static const int FIELD = 739;
  LegDatedDate() : StringField(739) {}
    LegDatedDate(String* data) : StringField(739, data) {}
    
  };
  
  public __gc class LegPool : public StringField
  {
  public:
  static const int FIELD = 740;
  LegPool() : StringField(740) {}
    LegPool(String* data) : StringField(740, data) {}
    
  };
  
  public __gc class AllocInterestAtMaturity : public DoubleField
  {
  public:
  static const int FIELD = 741;
  AllocInterestAtMaturity() : DoubleField(741) {}
    AllocInterestAtMaturity(double data) : DoubleField(741, data) {}
    AllocInterestAtMaturity(double data, int decimalPadding) : DoubleField(741, data, decimalPadding) {}
    
  };
  
  public __gc class AllocAccruedInterestAmt : public DoubleField
  {
  public:
  static const int FIELD = 742;
  AllocAccruedInterestAmt() : DoubleField(742) {}
    AllocAccruedInterestAmt(double data) : DoubleField(742, data) {}
    AllocAccruedInterestAmt(double data, int decimalPadding) : DoubleField(742, data, decimalPadding) {}
    
  };
  
  public __gc class DeliveryDate : public StringField
  {
  public:
  static const int FIELD = 743;
  DeliveryDate() : StringField(743) {}
    DeliveryDate(String* data) : StringField(743, data) {}
    
  };
  
  public __gc class AssignmentMethod : public CharField
  {
  public:
  static const int FIELD = 744;
  static const __wchar_t RANDOM = 'R';
  static const __wchar_t PRORATA = 'P';
  AssignmentMethod() : CharField(744) {}
    AssignmentMethod(__wchar_t data) : CharField(744, data) {}
    
  };
  
  public __gc class AssignmentUnit : public DoubleField
  {
  public:
  static const int FIELD = 745;
  AssignmentUnit() : DoubleField(745) {}
    AssignmentUnit(double data) : DoubleField(745, data) {}
    AssignmentUnit(double data, int decimalPadding) : DoubleField(745, data, decimalPadding) {}
    
  };
  
  public __gc class OpenInterest : public DoubleField
  {
  public:
  static const int FIELD = 746;
  OpenInterest() : DoubleField(746) {}
    OpenInterest(double data) : DoubleField(746, data) {}
    OpenInterest(double data, int decimalPadding) : DoubleField(746, data, decimalPadding) {}
    
  };
  
  public __gc class ExerciseMethod : public CharField
  {
  public:
  static const int FIELD = 747;
  static const __wchar_t AUTOMATIC = 'A';
  static const __wchar_t MANUAL = 'M';
  ExerciseMethod() : CharField(747) {}
    ExerciseMethod(__wchar_t data) : CharField(747, data) {}
    
  };
  
  public __gc class TotNumTradeReports : public IntField
  {
  public:
  static const int FIELD = 748;
  TotNumTradeReports() : IntField(748) {}
    TotNumTradeReports(int data) : IntField(748, data) {}
    
  };
  
  public __gc class TradeRequestResult : public IntField
  {
  public:
  static const int FIELD = 749;
  static const int SUCCESSFUL = 0;
  static const int INVALID_OR_UNKNOWN_INSTRUMENT = 1;
  static const int INVALID_TYPE_OF_TRADE_REQUESTED = 2;
  static const int INVALID_PARTIES = 3;
  static const int INVALID_TRANSPORT_TYPE_REQUESTED = 4;
  static const int INVALID_DESTINATION_REQUESTED = 5;
  static const int TRADEREQUESTTYPE_NOT_SUPPORTED = 8;
  static const int UNAUTHORIZED_FOR_TRADE_CAPTURE_REPORT_REQUEST = 9;
  static const int OTHER = 99;
  TradeRequestResult() : IntField(749) {}
    TradeRequestResult(int data) : IntField(749, data) {}
    
  };
  
  public __gc class TradeRequestStatus : public IntField
  {
  public:
  static const int FIELD = 750;
  static const int ACCEPTED = 0;
  static const int COMPLETED = 1;
  static const int REJECTED = 2;
  TradeRequestStatus() : IntField(750) {}
    TradeRequestStatus(int data) : IntField(750, data) {}
    
  };
  
  public __gc class TradeReportRejectReason : public IntField
  {
  public:
  static const int FIELD = 751;
  static const int SUCCESSFUL = 0;
  static const int INVALID_PARTY_INFORMATION = 1;
  static const int UNKNOWN_INSTRUMENT = 2;
  static const int UNAUTHORIZED_TO_REPORT_TRADES = 3;
  static const int INVALID_TRADE_TYPE = 4;
  static const int OTHER = 99;
  TradeReportRejectReason() : IntField(751) {}
    TradeReportRejectReason(int data) : IntField(751, data) {}
    
  };
  
  public __gc class SideMultiLegReportingType : public IntField
  {
  public:
  static const int FIELD = 752;
  static const int SINGLE_SECURITY = 1;
  static const int INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY = 2;
  static const int MULTI_LEG_SECURITY = 3;
  SideMultiLegReportingType() : IntField(752) {}
    SideMultiLegReportingType(int data) : IntField(752, data) {}
    
  };
  
  public __gc class NoPosAmt : public IntField
  {
  public:
  static const int FIELD = 753;
  NoPosAmt() : IntField(753) {}
    NoPosAmt(int data) : IntField(753, data) {}
    
  };
  
  public __gc class AutoAcceptIndicator : public BooleanField
  {
  public:
  static const int FIELD = 754;
  AutoAcceptIndicator() : BooleanField(754) {}
    AutoAcceptIndicator(bool data) : BooleanField(754, data) {}
    
  };
  
  public __gc class AllocReportID : public StringField
  {
  public:
  static const int FIELD = 755;
  AllocReportID() : StringField(755) {}
    AllocReportID(String* data) : StringField(755, data) {}
    
  };
  
  public __gc class NoNested2PartyIDs : public IntField
  {
  public:
  static const int FIELD = 756;
  NoNested2PartyIDs() : IntField(756) {}
    NoNested2PartyIDs(int data) : IntField(756, data) {}
    
  };
  
  public __gc class Nested2PartyID : public StringField
  {
  public:
  static const int FIELD = 757;
  Nested2PartyID() : StringField(757) {}
    Nested2PartyID(String* data) : StringField(757, data) {}
    
  };
  
  public __gc class Nested2PartyIDSource : public CharField
  {
  public:
  static const int FIELD = 758;
  Nested2PartyIDSource() : CharField(758) {}
    Nested2PartyIDSource(__wchar_t data) : CharField(758, data) {}
    
  };
  
  public __gc class Nested2PartyRole : public IntField
  {
  public:
  static const int FIELD = 759;
  Nested2PartyRole() : IntField(759) {}
    Nested2PartyRole(int data) : IntField(759, data) {}
    
  };
  
  public __gc class Nested2PartySubID : public StringField
  {
  public:
  static const int FIELD = 760;
  Nested2PartySubID() : StringField(760) {}
    Nested2PartySubID(String* data) : StringField(760, data) {}
    
  };
  
  public __gc class BenchmarkSecurityIDSource : public StringField
  {
  public:
  static const int FIELD = 761;
  BenchmarkSecurityIDSource() : StringField(761) {}
    BenchmarkSecurityIDSource(String* data) : StringField(761, data) {}
    
  };
  
  public __gc class SecuritySubType : public StringField
  {
  public:
  static const int FIELD = 762;
  SecuritySubType() : StringField(762) {}
    SecuritySubType(String* data) : StringField(762, data) {}
    
  };
  
  public __gc class UnderlyingSecuritySubType : public StringField
  {
  public:
  static const int FIELD = 763;
  UnderlyingSecuritySubType() : StringField(763) {}
    UnderlyingSecuritySubType(String* data) : StringField(763, data) {}
    
  };
  
  public __gc class LegSecuritySubType : public StringField
  {
  public:
  static const int FIELD = 764;
  LegSecuritySubType() : StringField(764) {}
    LegSecuritySubType(String* data) : StringField(764, data) {}
    
  };
  
  public __gc class AllowableOneSidednessPct : public DoubleField
  {
  public:
  static const int FIELD = 765;
  AllowableOneSidednessPct() : DoubleField(765) {}
    AllowableOneSidednessPct(double data) : DoubleField(765, data) {}
    AllowableOneSidednessPct(double data, int decimalPadding) : DoubleField(765, data, decimalPadding) {}
    
  };
  
  public __gc class AllowableOneSidednessValue : public DoubleField
  {
  public:
  static const int FIELD = 766;
  AllowableOneSidednessValue() : DoubleField(766) {}
    AllowableOneSidednessValue(double data) : DoubleField(766, data) {}
    AllowableOneSidednessValue(double data, int decimalPadding) : DoubleField(766, data, decimalPadding) {}
    
  };
  
  public __gc class AllowableOneSidednessCurr : public StringField
  {
  public:
  static const int FIELD = 767;
  AllowableOneSidednessCurr() : StringField(767) {}
    AllowableOneSidednessCurr(String* data) : StringField(767, data) {}
    
  };
  
  public __gc class NoTrdRegTimestamps : public IntField
  {
  public:
  static const int FIELD = 768;
  NoTrdRegTimestamps() : IntField(768) {}
    NoTrdRegTimestamps(int data) : IntField(768, data) {}
    
  };
  
  public __gc class TrdRegTimestamp : public UtcTimeStampField
  {
  public:
  static const int FIELD = 769;
  TrdRegTimestamp() : UtcTimeStampField(769) {}
    TrdRegTimestamp(DateTime data) : UtcTimeStampField(769, data) {}
    TrdRegTimestamp(DateTime data, bool showMilliseconds) : UtcTimeStampField(769, data, showMilliseconds) {}
    
  };
  
  public __gc class TrdRegTimestampType : public IntField
  {
  public:
  static const int FIELD = 770;
  static const int EXECUTION_TIME = 1;
  static const int TIME_IN = 2;
  static const int TIME_OUT = 3;
  static const int BROKER_RECEIPT = 4;
  static const int BROKER_EXECUTION = 5;
  static const int DESK_RECEIPT = 6;
  TrdRegTimestampType() : IntField(770) {}
    TrdRegTimestampType(int data) : IntField(770, data) {}
    
  };
  
  public __gc class TrdRegTimestampOrigin : public StringField
  {
  public:
  static const int FIELD = 771;
  TrdRegTimestampOrigin() : StringField(771) {}
    TrdRegTimestampOrigin(String* data) : StringField(771, data) {}
    
  };
  
  public __gc class ConfirmRefID : public StringField
  {
  public:
  static const int FIELD = 772;
  ConfirmRefID() : StringField(772) {}
    ConfirmRefID(String* data) : StringField(772, data) {}
    
  };
  
  public __gc class ConfirmType : public IntField
  {
  public:
  static const int FIELD = 773;
  static const int STATUS = 1;
  static const int CONFIRMATION = 2;
  static const int CONFIRMATION_REQUEST_REJECTED = 3;
  ConfirmType() : IntField(773) {}
    ConfirmType(int data) : IntField(773, data) {}
    
  };
  
  public __gc class ConfirmRejReason : public IntField
  {
  public:
  static const int FIELD = 774;
  static const int MISMATCHED_ACCOUNT = 1;
  static const int MISSING_SETTLEMENT_INSTRUCTIONS = 2;
  static const int OTHER = 99;
  ConfirmRejReason() : IntField(774) {}
    ConfirmRejReason(int data) : IntField(774, data) {}
    
  };
  
  public __gc class BookingType : public IntField
  {
  public:
  static const int FIELD = 775;
  static const int REGULAR_BOOKING = 0;
  static const int CFD = 1;
  static const int TOTAL_RETURN_SWAP = 2;
  BookingType() : IntField(775) {}
    BookingType(int data) : IntField(775, data) {}
    
  };
  
  public __gc class IndividualAllocRejCode : public IntField
  {
  public:
  static const int FIELD = 776;
  IndividualAllocRejCode() : IntField(776) {}
    IndividualAllocRejCode(int data) : IntField(776, data) {}
    
  };
  
  public __gc class SettlInstMsgID : public StringField
  {
  public:
  static const int FIELD = 777;
  SettlInstMsgID() : StringField(777) {}
    SettlInstMsgID(String* data) : StringField(777, data) {}
    
  };
  
  public __gc class NoSettlInst : public IntField
  {
  public:
  static const int FIELD = 778;
  NoSettlInst() : IntField(778) {}
    NoSettlInst(int data) : IntField(778, data) {}
    
  };
  
  public __gc class LastUpdateTime : public UtcTimeStampField
  {
  public:
  static const int FIELD = 779;
  LastUpdateTime() : UtcTimeStampField(779) {}
    LastUpdateTime(DateTime data) : UtcTimeStampField(779, data) {}
    LastUpdateTime(DateTime data, bool showMilliseconds) : UtcTimeStampField(779, data, showMilliseconds) {}
    
  };
  
  public __gc class AllocSettlInstType : public IntField
  {
  public:
  static const int FIELD = 780;
  static const int USE_DEFAULT_INSTRUCTIONS = 0;
  static const int DERIVE_FROM_PARAMETERS_PROVIDED = 1;
  static const int FULL_DETAILS_PROVIDED = 2;
  static const int SSI_DB_IDS_PROVIDED = 3;
  static const int PHONE_FOR_INSTRUCTIONS = 4;
  AllocSettlInstType() : IntField(780) {}
    AllocSettlInstType(int data) : IntField(780, data) {}
    
  };
  
  public __gc class NoSettlPartyIDs : public IntField
  {
  public:
  static const int FIELD = 781;
  NoSettlPartyIDs() : IntField(781) {}
    NoSettlPartyIDs(int data) : IntField(781, data) {}
    
  };
  
  public __gc class SettlPartyID : public StringField
  {
  public:
  static const int FIELD = 782;
  SettlPartyID() : StringField(782) {}
    SettlPartyID(String* data) : StringField(782, data) {}
    
  };
  
  public __gc class SettlPartyIDSource : public CharField
  {
  public:
  static const int FIELD = 783;
  SettlPartyIDSource() : CharField(783) {}
    SettlPartyIDSource(__wchar_t data) : CharField(783, data) {}
    
  };
  
  public __gc class SettlPartyRole : public IntField
  {
  public:
  static const int FIELD = 784;
  SettlPartyRole() : IntField(784) {}
    SettlPartyRole(int data) : IntField(784, data) {}
    
  };
  
  public __gc class SettlPartySubID : public StringField
  {
  public:
  static const int FIELD = 785;
  SettlPartySubID() : StringField(785) {}
    SettlPartySubID(String* data) : StringField(785, data) {}
    
  };
  
  public __gc class SettlPartySubIDType : public IntField
  {
  public:
  static const int FIELD = 786;
  SettlPartySubIDType() : IntField(786) {}
    SettlPartySubIDType(int data) : IntField(786, data) {}
    
  };
  
  public __gc class DlvyInstType : public CharField
  {
  public:
  static const int FIELD = 787;
  static const __wchar_t SECURITIES = 'S';
  static const __wchar_t CASH = 'C';
  DlvyInstType() : CharField(787) {}
    DlvyInstType(__wchar_t data) : CharField(787, data) {}
    
  };
  
  public __gc class TerminationType : public IntField
  {
  public:
  static const int FIELD = 788;
  static const int OVERNIGHT = 1;
  static const int TERM = 2;
  static const int FLEXIBLE = 3;
  static const int OPEN = 4;
  TerminationType() : IntField(788) {}
    TerminationType(int data) : IntField(788, data) {}
    
  };
  
  public __gc class OrdStatusReqID : public StringField
  {
  public:
  static const int FIELD = 790;
  OrdStatusReqID() : StringField(790) {}
    OrdStatusReqID(String* data) : StringField(790, data) {}
    
  };
  
  public __gc class SettlInstReqID : public StringField
  {
  public:
  static const int FIELD = 791;
  SettlInstReqID() : StringField(791) {}
    SettlInstReqID(String* data) : StringField(791, data) {}
    
  };
  
  public __gc class SettlInstReqRejCode : public IntField
  {
  public:
  static const int FIELD = 792;
  static const int UNABLE_TO_PROCESS_REQUEST = 0;
  static const int UNKNOWN_ACCOUNT = 1;
  static const int NO_MATCHING_SETTLEMENT_INSTRUCTIONS_FOUND = 2;
  static const int OTHER = 99;
  SettlInstReqRejCode() : IntField(792) {}
    SettlInstReqRejCode(int data) : IntField(792, data) {}
    
  };
  
  public __gc class SecondaryAllocID : public StringField
  {
  public:
  static const int FIELD = 793;
  SecondaryAllocID() : StringField(793) {}
    SecondaryAllocID(String* data) : StringField(793, data) {}
    
  };
  
  public __gc class AllocReportType : public IntField
  {
  public:
  static const int FIELD = 794;
  static const int SELLSIDE_CALCULATED_USING_PRELIMINARY = 3;
  static const int SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY = 4;
  static const int WAREHOUSE_RECAP = 5;
  static const int REQUEST_TO_INTERMEDIARY = 8;
  static const int PRELIMINARY_REQUEST_TO_INTERMEDIARY = 2;
  static const int ACCEPT = 9;
  static const int REJECT = 10;
  static const int ACCEPT_PENDING = 11;
  static const int COMPLETE = 12;
  static const int REVERSE_PENDING = 14;
  AllocReportType() : IntField(794) {}
    AllocReportType(int data) : IntField(794, data) {}
    
  };
  
  public __gc class AllocReportRefID : public StringField
  {
  public:
  static const int FIELD = 795;
  AllocReportRefID() : StringField(795) {}
    AllocReportRefID(String* data) : StringField(795, data) {}
    
  };
  
  public __gc class AllocCancReplaceReason : public IntField
  {
  public:
  static const int FIELD = 796;
  static const int ORIGINAL_DETAILS_INCOMPLETE_INCORRECT = 1;
  static const int CHANGE_IN_UNDERLYING_ORDER_DETAILS = 2;
  static const int OTHER = 99;
  AllocCancReplaceReason() : IntField(796) {}
    AllocCancReplaceReason(int data) : IntField(796, data) {}
    
  };
  
  public __gc class CopyMsgIndicator : public BooleanField
  {
  public:
  static const int FIELD = 797;
  CopyMsgIndicator() : BooleanField(797) {}
    CopyMsgIndicator(bool data) : BooleanField(797, data) {}
    
  };
  
  public __gc class AllocAccountType : public IntField
  {
  public:
  static const int FIELD = 798;
  static const int ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS = 1;
  static const int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS = 2;
  static const int HOUSE_TRADER = 3;
  static const int FLOOR_TRADER = 4;
  static const int ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_AND_IS_CROSS_MARGINED = 6;
  static const int ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED = 7;
  static const int JOINT_BACKOFFICE_ACCOUNT = 8;
  AllocAccountType() : IntField(798) {}
    AllocAccountType(int data) : IntField(798, data) {}
    
  };
  
  public __gc class OrderAvgPx : public DoubleField
  {
  public:
  static const int FIELD = 799;
  OrderAvgPx() : DoubleField(799) {}
    OrderAvgPx(double data) : DoubleField(799, data) {}
    OrderAvgPx(double data, int decimalPadding) : DoubleField(799, data, decimalPadding) {}
    
  };
  
  public __gc class OrderBookingQty : public DoubleField
  {
  public:
  static const int FIELD = 800;
  OrderBookingQty() : DoubleField(800) {}
    OrderBookingQty(double data) : DoubleField(800, data) {}
    OrderBookingQty(double data, int decimalPadding) : DoubleField(800, data, decimalPadding) {}
    
  };
  
  public __gc class NoSettlPartySubIDs : public IntField
  {
  public:
  static const int FIELD = 801;
  NoSettlPartySubIDs() : IntField(801) {}
    NoSettlPartySubIDs(int data) : IntField(801, data) {}
    
  };
  
  public __gc class NoPartySubIDs : public IntField
  {
  public:
  static const int FIELD = 802;
  NoPartySubIDs() : IntField(802) {}
    NoPartySubIDs(int data) : IntField(802, data) {}
    
  };
  
  public __gc class PartySubIDType : public IntField
  {
  public:
  static const int FIELD = 803;
  static const int FIRM = 1;
  static const int PERSON = 2;
  static const int SYSTEM = 3;
  static const int APPLICATION = 4;
  static const int FULL_LEGAL_NAME_OF_FIRM = 5;
  static const int POSTAL_ADDRESS = 6;
  static const int PHONE_NUMBER = 7;
  static const int EMAIL_ADDRESS = 8;
  static const int CONTACT_NAME = 9;
  static const int SECURITIES_ACCOUNT_NUMBER = 10;
  static const int REGISTRATION_NUMBER = 11;
  static const int REGISTERED_ADDRESS = 12;
  static const int REGULATORY_STATUS = 13;
  static const int REGISTRATION_NAME = 14;
  static const int CASH_ACCOUNT_NUMBER = 15;
  static const int BIC = 16;
  static const int CSD_PARTICIPANT_MEMBER_CODE = 17;
  static const int REGISTERED_ADDRESS2 = 18;
  static const int FUND_ACCOUNT_NAME = 19;
  static const int TELEX_NUMBER = 20;
  static const int FAX_NUMBER = 21;
  static const int SECURITIES_ACCOUNT_NAME = 22;
  static const int CASH_ACCOUNT_NAME = 23;
  static const int DEPARTMENT = 24;
  static const int LOCATION_DESK = 25;
  static const int POSITION_ACCOUNT_TYPE = 26;
  static const int SECURITY_LOCATE_ID = 27;
  static const int MARKET_MAKER = 28;
  static const int ELIGIBLE_COUNTERPARTY = 29;
  static const int PROFESSIONAL_CLIENT = 30;
  static const int LOCATION = 31;
  static const int EXECUTION_VENUE = 32;
  PartySubIDType() : IntField(803) {}
    PartySubIDType(int data) : IntField(803, data) {}
    
  };
  
  public __gc class NoNestedPartySubIDs : public IntField
  {
  public:
  static const int FIELD = 804;
  NoNestedPartySubIDs() : IntField(804) {}
    NoNestedPartySubIDs(int data) : IntField(804, data) {}
    
  };
  
  public __gc class NestedPartySubIDType : public IntField
  {
  public:
  static const int FIELD = 805;
  NestedPartySubIDType() : IntField(805) {}
    NestedPartySubIDType(int data) : IntField(805, data) {}
    
  };
  
  public __gc class NoNested2PartySubIDs : public IntField
  {
  public:
  static const int FIELD = 806;
  NoNested2PartySubIDs() : IntField(806) {}
    NoNested2PartySubIDs(int data) : IntField(806, data) {}
    
  };
  
  public __gc class Nested2PartySubIDType : public IntField
  {
  public:
  static const int FIELD = 807;
  Nested2PartySubIDType() : IntField(807) {}
    Nested2PartySubIDType(int data) : IntField(807, data) {}
    
  };
  
  public __gc class AllocIntermedReqType : public IntField
  {
  public:
  static const int FIELD = 808;
  static const int PENDING_ACCEPT = 1;
  static const int PENDING_RELEASE = 2;
  static const int PENDING_REVERSAL = 3;
  static const int ACCEPT = 4;
  static const int BLOCK_LEVEL_REJECT = 5;
  static const int ACCOUNT_LEVEL_REJECT = 6;
  AllocIntermedReqType() : IntField(808) {}
    AllocIntermedReqType(int data) : IntField(808, data) {}
    
  };
  
  public __gc class UnderlyingPx : public DoubleField
  {
  public:
  static const int FIELD = 810;
  UnderlyingPx() : DoubleField(810) {}
    UnderlyingPx(double data) : DoubleField(810, data) {}
    UnderlyingPx(double data, int decimalPadding) : DoubleField(810, data, decimalPadding) {}
    
  };
  
  public __gc class PriceDelta : public DoubleField
  {
  public:
  static const int FIELD = 811;
  PriceDelta() : DoubleField(811) {}
    PriceDelta(double data) : DoubleField(811, data) {}
    PriceDelta(double data, int decimalPadding) : DoubleField(811, data, decimalPadding) {}
    
  };
  
  public __gc class ApplQueueMax : public IntField
  {
  public:
  static const int FIELD = 812;
  ApplQueueMax() : IntField(812) {}
    ApplQueueMax(int data) : IntField(812, data) {}
    
  };
  
  public __gc class ApplQueueDepth : public IntField
  {
  public:
  static const int FIELD = 813;
  ApplQueueDepth() : IntField(813) {}
    ApplQueueDepth(int data) : IntField(813, data) {}
    
  };
  
  public __gc class ApplQueueResolution : public IntField
  {
  public:
  static const int FIELD = 814;
  static const int NO_ACTION_TAKEN = 0;
  static const int QUEUE_FLUSHED = 1;
  static const int OVERLAY_LAST = 2;
  static const int END_SESSION = 3;
  ApplQueueResolution() : IntField(814) {}
    ApplQueueResolution(int data) : IntField(814, data) {}
    
  };
  
  public __gc class ApplQueueAction : public IntField
  {
  public:
  static const int FIELD = 815;
  static const int NO_ACTION_TAKEN = 0;
  static const int QUEUE_FLUSHED = 1;
  static const int OVERLAY_LAST = 2;
  static const int END_SESSION = 3;
  ApplQueueAction() : IntField(815) {}
    ApplQueueAction(int data) : IntField(815, data) {}
    
  };
  
  public __gc class NoAltMDSource : public IntField
  {
  public:
  static const int FIELD = 816;
  NoAltMDSource() : IntField(816) {}
    NoAltMDSource(int data) : IntField(816, data) {}
    
  };
  
  public __gc class AltMDSourceID : public StringField
  {
  public:
  static const int FIELD = 817;
  AltMDSourceID() : StringField(817) {}
    AltMDSourceID(String* data) : StringField(817, data) {}
    
  };
  
  public __gc class SecondaryTradeReportID : public StringField
  {
  public:
  static const int FIELD = 818;
  SecondaryTradeReportID() : StringField(818) {}
    SecondaryTradeReportID(String* data) : StringField(818, data) {}
    
  };
  
  public __gc class AvgPxIndicator : public IntField
  {
  public:
  static const int FIELD = 819;
  static const int NO_AVERAGE_PRICING = 0;
  static const int TRADE_IS_PART_OF_AN_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID = 1;
  static const int LAST_TRADE_IN_THE_AVERAGE_PRICE_GROUP_IDENTIFIED_BY_THE_TRADELINKID = 2;
  AvgPxIndicator() : IntField(819) {}
    AvgPxIndicator(int data) : IntField(819, data) {}
    
  };
  
  public __gc class TradeLinkID : public StringField
  {
  public:
  static const int FIELD = 820;
  TradeLinkID() : StringField(820) {}
    TradeLinkID(String* data) : StringField(820, data) {}
    
  };
  
  public __gc class OrderInputDevice : public StringField
  {
  public:
  static const int FIELD = 821;
  OrderInputDevice() : StringField(821) {}
    OrderInputDevice(String* data) : StringField(821, data) {}
    
  };
  
  public __gc class UnderlyingTradingSessionID : public StringField
  {
  public:
  static const int FIELD = 822;
  UnderlyingTradingSessionID() : StringField(822) {}
    UnderlyingTradingSessionID(String* data) : StringField(822, data) {}
    
  };
  
  public __gc class UnderlyingTradingSessionSubID : public StringField
  {
  public:
  static const int FIELD = 823;
  UnderlyingTradingSessionSubID() : StringField(823) {}
    UnderlyingTradingSessionSubID(String* data) : StringField(823, data) {}
    
  };
  
  public __gc class TradeLegRefID : public StringField
  {
  public:
  static const int FIELD = 824;
  TradeLegRefID() : StringField(824) {}
    TradeLegRefID(String* data) : StringField(824, data) {}
    
  };
  
  public __gc class ExchangeRule : public StringField
  {
  public:
  static const int FIELD = 825;
  ExchangeRule() : StringField(825) {}
    ExchangeRule(String* data) : StringField(825, data) {}
    
  };
  
  public __gc class TradeAllocIndicator : public IntField
  {
  public:
  static const int FIELD = 826;
  static const int ALLOCATION_NOT_REQUIRED = 0;
  static const int ALLOCATION_REQUIRED = 1;
  static const int USE_ALLOCATION_PROVIDED_WITH_THE_TRADE = 2;
  static const int ALLOCATION_GIVE_UP_EXECUTOR = 3;
  static const int ALLOCATION_FROM_EXECUTOR = 4;
  static const int ALLOCATION_TO_CLAIM_ACCOUNT = 5;
  TradeAllocIndicator() : IntField(826) {}
    TradeAllocIndicator(int data) : IntField(826, data) {}
    
  };
  
  public __gc class ExpirationCycle : public IntField
  {
  public:
  static const int FIELD = 827;
  static const int EXPIRE_ON_TRADING_SESSION_CLOSE = 0;
  static const int EXPIRE_ON_TRADING_SESSION_OPEN = 1;
  ExpirationCycle() : IntField(827) {}
    ExpirationCycle(int data) : IntField(827, data) {}
    
  };
  
  public __gc class TrdType : public IntField
  {
  public:
  static const int FIELD = 828;
  static const int REGULAR_TRADE = 0;
  static const int BLOCK_TRADE = 1;
  static const int AFTER_HOURS_TRADE = 10;
  static const int EFP = 2;
  static const int TRANSFER = 3;
  static const int LATE_TRADE = 4;
  static const int T_TRADE = 5;
  static const int WEIGHTED_AVERAGE_PRICE_TRADE = 6;
  static const int BUNCHED_TRADE = 7;
  static const int LATE_BUNCHED_TRADE = 8;
  static const int PRIOR_REFERENCE_PRICE_TRADE = 9;
  static const int EXCHANGE_FOR_RISK = 11;
  static const int EXCHANGE_FOR_SWAP = 12;
  static const int EXCHANGE_OF_FUTURES_FOR = 13;
  static const int EXCHANGE_OF_OPTIONS_FOR_OPTIONS = 14;
  static const int TRADING_AT_SETTLEMENT = 15;
  static const int ALL_OR_NONE = 16;
  static const int FUTURES_LARGE_ORDER_EXECUTION = 17;
  static const int EXCHANGE_OF_FUTURES_FOR_FUTURES = 18;
  static const int OPTION_INTERIM_TRADE = 19;
  static const int OPTION_CABINET_TRADE = 20;
  static const int PRIVATELY_NEGOTIATED_TRADES = 22;
  static const int SUBSTITUTION_OF_FUTURES_FOR_FORWARDS = 23;
  static const int ERROR_TRADE = 24;
  static const int SPECIAL_CUM_DIVIDEND = 25;
  static const int SPECIAL_EX_DIVIDEND = 26;
  static const int SPECIAL_CUM_COUPON = 27;
  static const int SPECIAL_EX_COUPON = 28;
  static const int CASH_SETTLEMENT = 29;
  static const int SPECIAL_PRICE = 30;
  static const int GUARANTEED_DELIVERY = 31;
  static const int SPECIAL_CUM_RIGHTS = 32;
  static const int SPECIAL_EX_RIGHTS = 33;
  static const int SPECIAL_CUM_CAPITAL_REPAYMENTS = 34;
  static const int SPECIAL_EX_CAPITAL_REPAYMENTS = 35;
  static const int SPECIAL_CUM_BONUS = 36;
  static const int SPECIAL_EX_BONUS = 37;
  static const int BLOCK_TRADE2 = 38;
  static const int WORKED_PRINCIPAL_TRADE = 39;
  static const int BLOCK_TRADES = 40;
  static const int NAME_CHANGE = 41;
  static const int PORTFOLIO_TRANSFER = 42;
  static const int PROROGATION_BUY = 43;
  static const int PROROGATION_SELL = 44;
  static const int OPTION_EXERCISE = 45;
  static const int DELTA_NEUTRAL_TRANSACTION = 46;
  static const int FINANCING_TRANSACTION = 47;
  TrdType() : IntField(828) {}
    TrdType(int data) : IntField(828, data) {}
    
  };
  
  public __gc class TrdSubType : public IntField
  {
  public:
  static const int FIELD = 829;
  static const int CMTA = 0;
  static const int INTERNAL_TRANSFER_OR_ADJUSTMENT = 1;
  static const int EXTERNAL_TRANSFER_OR_TRANSFER_OF_ACCOUNT = 2;
  static const int REJECT_FOR_SUBMITTING_SIDE = 3;
  static const int ADVISORY_FOR_CONTRA_SIDE = 4;
  static const int OFFSET_DUE_TO_AN_ALLOCATION = 5;
  static const int ONSET_DUT_TO_AN_ALLOCATION = 6;
  static const int DIFFERENTIAL_SPREAD = 7;
  static const int IMPLIED_SPREAD_LEG_EXECUTED_AGAINST_AN_OUTRIGHT = 8;
  static const int TRANSACTION_FROM_EXERCISE = 9;
  static const int TRANSACTION_FROM_ASSIGNMENT = 10;
  static const int ACATS = 11;
  static const int AI = 14;
  static const int B = 15;
  static const int K = 16;
  static const int LC = 17;
  static const int M = 18;
  static const int N = 19;
  static const int NM = 20;
  static const int NR = 21;
  static const int P = 22;
  static const int PA = 23;
  static const int PC = 24;
  static const int PN = 25;
  static const int R = 26;
  static const int RO = 27;
  static const int RT = 28;
  static const int SW = 29;
  static const int T = 30;
  static const int WN = 31;
  static const int WT = 32;
  TrdSubType() : IntField(829) {}
    TrdSubType(int data) : IntField(829, data) {}
    
  };
  
  public __gc class TransferReason : public StringField
  {
  public:
  static const int FIELD = 830;
  TransferReason() : StringField(830) {}
    TransferReason(String* data) : StringField(830, data) {}
    
  };
  
  public __gc class AsgnReqID : public StringField
  {
  public:
  static const int FIELD = 831;
  AsgnReqID() : StringField(831) {}
    AsgnReqID(String* data) : StringField(831, data) {}
    
  };
  
  public __gc class TotNumAssignmentReports : public IntField
  {
  public:
  static const int FIELD = 832;
  TotNumAssignmentReports() : IntField(832) {}
    TotNumAssignmentReports(int data) : IntField(832, data) {}
    
  };
  
  public __gc class AsgnRptID : public StringField
  {
  public:
  static const int FIELD = 833;
  AsgnRptID() : StringField(833) {}
    AsgnRptID(String* data) : StringField(833, data) {}
    
  };
  
  public __gc class ThresholdAmount : public DoubleField
  {
  public:
  static const int FIELD = 834;
  ThresholdAmount() : DoubleField(834) {}
    ThresholdAmount(double data) : DoubleField(834, data) {}
    ThresholdAmount(double data, int decimalPadding) : DoubleField(834, data, decimalPadding) {}
    
  };
  
  public __gc class PegMoveType : public IntField
  {
  public:
  static const int FIELD = 835;
  static const int FLOATING = 0;
  static const int FIXED = 1;
  PegMoveType() : IntField(835) {}
    PegMoveType(int data) : IntField(835, data) {}
    
  };
  
  public __gc class PegOffsetType : public IntField
  {
  public:
  static const int FIELD = 836;
  static const int PRICE = 0;
  static const int BASIS_POINTS = 1;
  static const int TICKS = 2;
  static const int PRICE_TIER_LEVEL = 3;
  PegOffsetType() : IntField(836) {}
    PegOffsetType(int data) : IntField(836, data) {}
    
  };
  
  public __gc class PegLimitType : public IntField
  {
  public:
  static const int FIELD = 837;
  static const int OR_BETTER = 0;
  static const int STRICT = 1;
  static const int OR_WORSE = 2;
  PegLimitType() : IntField(837) {}
    PegLimitType(int data) : IntField(837, data) {}
    
  };
  
  public __gc class PegRoundDirection : public IntField
  {
  public:
  static const int FIELD = 838;
  static const int MORE_AGGRESSIVE = 1;
  static const int MORE_PASSIVE = 2;
  PegRoundDirection() : IntField(838) {}
    PegRoundDirection(int data) : IntField(838, data) {}
    
  };
  
  public __gc class PeggedPrice : public DoubleField
  {
  public:
  static const int FIELD = 839;
  PeggedPrice() : DoubleField(839) {}
    PeggedPrice(double data) : DoubleField(839, data) {}
    PeggedPrice(double data, int decimalPadding) : DoubleField(839, data, decimalPadding) {}
    
  };
  
  public __gc class PegScope : public IntField
  {
  public:
  static const int FIELD = 840;
  static const int LOCAL = 1;
  static const int NATIONAL = 2;
  static const int GLOBAL = 3;
  static const int NATIONAL_EXCLUDING_LOCAL = 4;
  PegScope() : IntField(840) {}
    PegScope(int data) : IntField(840, data) {}
    
  };
  
  public __gc class DiscretionMoveType : public IntField
  {
  public:
  static const int FIELD = 841;
  static const int FLOATING = 0;
  static const int FIXED = 1;
  DiscretionMoveType() : IntField(841) {}
    DiscretionMoveType(int data) : IntField(841, data) {}
    
  };
  
  public __gc class DiscretionOffsetType : public IntField
  {
  public:
  static const int FIELD = 842;
  static const int PRICE = 0;
  static const int BASIS_POINTS = 1;
  static const int TICKS = 2;
  static const int PRICE_TIER_LEVEL = 3;
  DiscretionOffsetType() : IntField(842) {}
    DiscretionOffsetType(int data) : IntField(842, data) {}
    
  };
  
  public __gc class DiscretionLimitType : public IntField
  {
  public:
  static const int FIELD = 843;
  static const int OR_BETTER = 0;
  static const int STRICT = 1;
  static const int OR_WORSE = 2;
  DiscretionLimitType() : IntField(843) {}
    DiscretionLimitType(int data) : IntField(843, data) {}
    
  };
  
  public __gc class DiscretionRoundDirection : public IntField
  {
  public:
  static const int FIELD = 844;
  static const int MORE_AGGRESSIVE = 1;
  static const int MORE_PASSIVE = 2;
  DiscretionRoundDirection() : IntField(844) {}
    DiscretionRoundDirection(int data) : IntField(844, data) {}
    
  };
  
  public __gc class DiscretionPrice : public DoubleField
  {
  public:
  static const int FIELD = 845;
  DiscretionPrice() : DoubleField(845) {}
    DiscretionPrice(double data) : DoubleField(845, data) {}
    DiscretionPrice(double data, int decimalPadding) : DoubleField(845, data, decimalPadding) {}
    
  };
  
  public __gc class DiscretionScope : public IntField
  {
  public:
  static const int FIELD = 846;
  static const int LOCAL = 1;
  static const int NATIONAL = 2;
  static const int GLOBAL = 3;
  static const int NATIONAL_EXCLUDING_LOCAL = 4;
  DiscretionScope() : IntField(846) {}
    DiscretionScope(int data) : IntField(846, data) {}
    
  };
  
  public __gc class TargetStrategy : public IntField
  {
  public:
  static const int FIELD = 847;
  static const int VWAP = 1;
  static const int PARTICIPATE = 2;
  static const int MININIZE_MARKET_IMPACT = 3;
  TargetStrategy() : IntField(847) {}
    TargetStrategy(int data) : IntField(847, data) {}
    
  };
  
  public __gc class TargetStrategyParameters : public StringField
  {
  public:
  static const int FIELD = 848;
  TargetStrategyParameters() : StringField(848) {}
    TargetStrategyParameters(String* data) : StringField(848, data) {}
    
  };
  
  public __gc class ParticipationRate : public DoubleField
  {
  public:
  static const int FIELD = 849;
  ParticipationRate() : DoubleField(849) {}
    ParticipationRate(double data) : DoubleField(849, data) {}
    ParticipationRate(double data, int decimalPadding) : DoubleField(849, data, decimalPadding) {}
    
  };
  
  public __gc class TargetStrategyPerformance : public DoubleField
  {
  public:
  static const int FIELD = 850;
  TargetStrategyPerformance() : DoubleField(850) {}
    TargetStrategyPerformance(double data) : DoubleField(850, data) {}
    TargetStrategyPerformance(double data, int decimalPadding) : DoubleField(850, data, decimalPadding) {}
    
  };
  
  public __gc class LastLiquidityInd : public IntField
  {
  public:
  static const int FIELD = 851;
  static const int ADDED_LIQUIDITY = 1;
  static const int REMOVED_LIQUIDITY = 2;
  static const int LIQUIDITY_ROUTED_OUT = 3;
  LastLiquidityInd() : IntField(851) {}
    LastLiquidityInd(int data) : IntField(851, data) {}
    
  };
  
  public __gc class PublishTrdIndicator : public BooleanField
  {
  public:
  static const int FIELD = 852;
  PublishTrdIndicator() : BooleanField(852) {}
    PublishTrdIndicator(bool data) : BooleanField(852, data) {}
    
  };
  
  public __gc class ShortSaleReason : public IntField
  {
  public:
  static const int FIELD = 853;
  static const int DEALER_SOLD_SHORT = 0;
  static const int DEALER_SOLD_SHORT_EXEMPT = 1;
  static const int SELLING_CUSTOMER_SOLD_SHORT = 2;
  static const int SELLING_CUSTOMER_SOLD_SHORT_EXEMPT = 3;
  static const int QUALIFED_SERVICE_REPRESENTATIVE_OR_AUTOMATIC_GIVEUP_CONTRA_SIDE_SOLD_SHORT = 4;
  static const int QSR_OR_AGU_CONTRA_SIDE_SOLD_SHORT_EXEMPT = 5;
  ShortSaleReason() : IntField(853) {}
    ShortSaleReason(int data) : IntField(853, data) {}
    
  };
  
  public __gc class QtyType : public IntField
  {
  public:
  static const int FIELD = 854;
  static const int UNITS = 0;
  static const int CONTRACTS = 1;
  static const int UNITS_OF_MEASURE_PER_TIME_UNIT = 2;
  QtyType() : IntField(854) {}
    QtyType(int data) : IntField(854, data) {}
    
  };
  
  public __gc class SecondaryTrdType : public IntField
  {
  public:
  static const int FIELD = 855;
  SecondaryTrdType() : IntField(855) {}
    SecondaryTrdType(int data) : IntField(855, data) {}
    
  };
  
  public __gc class TradeReportType : public IntField
  {
  public:
  static const int FIELD = 856;
  static const int SUBMIT = 0;
  static const int ALLEGED = 1;
  static const int ACCEPT = 2;
  static const int DECLINE = 3;
  static const int ADDENDUM = 4;
  static const int NO_WAS = 5;
  static const int TRADE_REPORT_CANCEL = 6;
  static const int LOCKED_IN_TRADE_BREAK = 7;
  static const int DEFAULTED = 8;
  static const int INVALID_CMTA = 9;
  static const int PENDED = 10;
  static const int ALLEGED_NEW = 11;
  static const int ALLEGED_ADDENDUM = 12;
  static const int ALLEGED_NO_WAS = 13;
  static const int ALLEGED_TRADE_REPORT_CANCEL = 14;
  static const int ALLEGED2 = 15;
  TradeReportType() : IntField(856) {}
    TradeReportType(int data) : IntField(856, data) {}
    
  };
  
  public __gc class AllocNoOrdersType : public IntField
  {
  public:
  static const int FIELD = 857;
  static const int NOT_SPECIFIED = 0;
  static const int EXPLICIT_LIST_PROVIDED = 1;
  AllocNoOrdersType() : IntField(857) {}
    AllocNoOrdersType(int data) : IntField(857, data) {}
    
  };
  
  public __gc class SharedCommission : public DoubleField
  {
  public:
  static const int FIELD = 858;
  SharedCommission() : DoubleField(858) {}
    SharedCommission(double data) : DoubleField(858, data) {}
    SharedCommission(double data, int decimalPadding) : DoubleField(858, data, decimalPadding) {}
    
  };
  
  public __gc class ConfirmReqID : public StringField
  {
  public:
  static const int FIELD = 859;
  ConfirmReqID() : StringField(859) {}
    ConfirmReqID(String* data) : StringField(859, data) {}
    
  };
  
  public __gc class AvgParPx : public DoubleField
  {
  public:
  static const int FIELD = 860;
  AvgParPx() : DoubleField(860) {}
    AvgParPx(double data) : DoubleField(860, data) {}
    AvgParPx(double data, int decimalPadding) : DoubleField(860, data, decimalPadding) {}
    
  };
  
  public __gc class ReportedPx : public DoubleField
  {
  public:
  static const int FIELD = 861;
  ReportedPx() : DoubleField(861) {}
    ReportedPx(double data) : DoubleField(861, data) {}
    ReportedPx(double data, int decimalPadding) : DoubleField(861, data, decimalPadding) {}
    
  };
  
  public __gc class NoCapacities : public IntField
  {
  public:
  static const int FIELD = 862;
  NoCapacities() : IntField(862) {}
    NoCapacities(int data) : IntField(862, data) {}
    
  };
  
  public __gc class OrderCapacityQty : public DoubleField
  {
  public:
  static const int FIELD = 863;
  OrderCapacityQty() : DoubleField(863) {}
    OrderCapacityQty(double data) : DoubleField(863, data) {}
    OrderCapacityQty(double data, int decimalPadding) : DoubleField(863, data, decimalPadding) {}
    
  };
  
  public __gc class NoEvents : public IntField
  {
  public:
  static const int FIELD = 864;
  NoEvents() : IntField(864) {}
    NoEvents(int data) : IntField(864, data) {}
    
  };
  
  public __gc class EventType : public IntField
  {
  public:
  static const int FIELD = 865;
  static const int PUT = 1;
  static const int CALL = 2;
  static const int TENDER = 3;
  static const int SINKING_FUND_CALL = 4;
  static const int ACTIVATION = 5;
  static const int INACTIVIATION = 6;
  static const int OTHER = 99;
  EventType() : IntField(865) {}
    EventType(int data) : IntField(865, data) {}
    
  };
  
  public __gc class EventDate : public StringField
  {
  public:
  static const int FIELD = 866;
  EventDate() : StringField(866) {}
    EventDate(String* data) : StringField(866, data) {}
    
  };
  
  public __gc class EventPx : public DoubleField
  {
  public:
  static const int FIELD = 867;
  EventPx() : DoubleField(867) {}
    EventPx(double data) : DoubleField(867, data) {}
    EventPx(double data, int decimalPadding) : DoubleField(867, data, decimalPadding) {}
    
  };
  
  public __gc class EventText : public StringField
  {
  public:
  static const int FIELD = 868;
  EventText() : StringField(868) {}
    EventText(String* data) : StringField(868, data) {}
    
  };
  
  public __gc class PctAtRisk : public DoubleField
  {
  public:
  static const int FIELD = 869;
  PctAtRisk() : DoubleField(869) {}
    PctAtRisk(double data) : DoubleField(869, data) {}
    PctAtRisk(double data, int decimalPadding) : DoubleField(869, data, decimalPadding) {}
    
  };
  
  public __gc class NoInstrAttrib : public IntField
  {
  public:
  static const int FIELD = 870;
  NoInstrAttrib() : IntField(870) {}
    NoInstrAttrib(int data) : IntField(870, data) {}
    
  };
  
  public __gc class InstrAttribType : public IntField
  {
  public:
  static const int FIELD = 871;
  static const int FLAT = 1;
  static const int ZERO_COUPON = 2;
  static const int INTEREST_BEARING = 3;
  static const int NO_PERIODIC_PAYMENTS = 4;
  static const int VARIABLE_RATE = 5;
  static const int LESS_FEE_FOR_PUT = 6;
  static const int STEPPED_COUPON = 7;
  static const int COUPON_PERIOD = 8;
  static const int WHEN_AND_IF_ISSUED = 9;
  static const int ORIGINAL_ISSUE_DISCOUNT = 10;
  static const int CALLABLE_PUTTABLE = 11;
  static const int ESCROWED_TO_MATURITY = 12;
  static const int ESCROWED_TO_REDEMPTION_DATE = 13;
  static const int PRE_REFUNDED = 14;
  static const int IN_DEFAULT = 15;
  static const int UNRATED = 16;
  static const int TAXABLE = 17;
  static const int INDEXED = 18;
  static const int SUBJECT_TO_ALTERNATIVE_MINIMUM_TAX = 19;
  static const int ORIGINAL_ISSUE_DISCOUNT_PRICE_SUPPLY_PRICE_IN_THE_INSTRATTRIBVALUE = 20;
  static const int CALLABLE_BELOW_MATURITY_VALUE = 21;
  static const int CALLABLE_WITHOUT_NOTICE_BY_MAIL_TO_HOLDER_UNLESS_REGISTERED = 22;
  static const int TEXT_SUPPLY_THE_TEXT_OF_THE_ATTRIBUTE_OR_DISCLAIMER_IN_THE_INSTRATTRIBVALUE = 99;
  InstrAttribType() : IntField(871) {}
    InstrAttribType(int data) : IntField(871, data) {}
    
  };
  
  public __gc class InstrAttribValue : public StringField
  {
  public:
  static const int FIELD = 872;
  InstrAttribValue() : StringField(872) {}
    InstrAttribValue(String* data) : StringField(872, data) {}
    
  };
  
  public __gc class DatedDate : public StringField
  {
  public:
  static const int FIELD = 873;
  DatedDate() : StringField(873) {}
    DatedDate(String* data) : StringField(873, data) {}
    
  };
  
  public __gc class InterestAccrualDate : public StringField
  {
  public:
  static const int FIELD = 874;
  InterestAccrualDate() : StringField(874) {}
    InterestAccrualDate(String* data) : StringField(874, data) {}
    
  };
  
  public __gc class CPProgram : public IntField
  {
  public:
  static const int FIELD = 875;
  static const int _3_A = 1;
  static const int _4_2 = 2;
  static const int OTHER = 99;
  CPProgram() : IntField(875) {}
    CPProgram(int data) : IntField(875, data) {}
    
  };
  
  public __gc class CPRegType : public StringField
  {
  public:
  static const int FIELD = 876;
  CPRegType() : StringField(876) {}
    CPRegType(String* data) : StringField(876, data) {}
    
  };
  
  public __gc class UnderlyingCPProgram : public StringField
  {
  public:
  static const int FIELD = 877;
  UnderlyingCPProgram() : StringField(877) {}
    UnderlyingCPProgram(String* data) : StringField(877, data) {}
    
  };
  
  public __gc class UnderlyingCPRegType : public StringField
  {
  public:
  static const int FIELD = 878;
  UnderlyingCPRegType() : StringField(878) {}
    UnderlyingCPRegType(String* data) : StringField(878, data) {}
    
  };
  
  public __gc class UnderlyingQty : public DoubleField
  {
  public:
  static const int FIELD = 879;
  UnderlyingQty() : DoubleField(879) {}
    UnderlyingQty(double data) : DoubleField(879, data) {}
    UnderlyingQty(double data, int decimalPadding) : DoubleField(879, data, decimalPadding) {}
    
  };
  
  public __gc class TrdMatchID : public StringField
  {
  public:
  static const int FIELD = 880;
  TrdMatchID() : StringField(880) {}
    TrdMatchID(String* data) : StringField(880, data) {}
    
  };
  
  public __gc class SecondaryTradeReportRefID : public StringField
  {
  public:
  static const int FIELD = 881;
  SecondaryTradeReportRefID() : StringField(881) {}
    SecondaryTradeReportRefID(String* data) : StringField(881, data) {}
    
  };
  
  public __gc class UnderlyingDirtyPrice : public DoubleField
  {
  public:
  static const int FIELD = 882;
  UnderlyingDirtyPrice() : DoubleField(882) {}
    UnderlyingDirtyPrice(double data) : DoubleField(882, data) {}
    UnderlyingDirtyPrice(double data, int decimalPadding) : DoubleField(882, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingEndPrice : public DoubleField
  {
  public:
  static const int FIELD = 883;
  UnderlyingEndPrice() : DoubleField(883) {}
    UnderlyingEndPrice(double data) : DoubleField(883, data) {}
    UnderlyingEndPrice(double data, int decimalPadding) : DoubleField(883, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingStartValue : public DoubleField
  {
  public:
  static const int FIELD = 884;
  UnderlyingStartValue() : DoubleField(884) {}
    UnderlyingStartValue(double data) : DoubleField(884, data) {}
    UnderlyingStartValue(double data, int decimalPadding) : DoubleField(884, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingCurrentValue : public DoubleField
  {
  public:
  static const int FIELD = 885;
  UnderlyingCurrentValue() : DoubleField(885) {}
    UnderlyingCurrentValue(double data) : DoubleField(885, data) {}
    UnderlyingCurrentValue(double data, int decimalPadding) : DoubleField(885, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingEndValue : public DoubleField
  {
  public:
  static const int FIELD = 886;
  UnderlyingEndValue() : DoubleField(886) {}
    UnderlyingEndValue(double data) : DoubleField(886, data) {}
    UnderlyingEndValue(double data, int decimalPadding) : DoubleField(886, data, decimalPadding) {}
    
  };
  
  public __gc class NoUnderlyingStips : public IntField
  {
  public:
  static const int FIELD = 887;
  NoUnderlyingStips() : IntField(887) {}
    NoUnderlyingStips(int data) : IntField(887, data) {}
    
  };
  
  public __gc class UnderlyingStipType : public StringField
  {
  public:
  static const int FIELD = 888;
  UnderlyingStipType() : StringField(888) {}
    UnderlyingStipType(String* data) : StringField(888, data) {}
    
  };
  
  public __gc class UnderlyingStipValue : public StringField
  {
  public:
  static const int FIELD = 889;
  UnderlyingStipValue() : StringField(889) {}
    UnderlyingStipValue(String* data) : StringField(889, data) {}
    
  };
  
  public __gc class MaturityNetMoney : public DoubleField
  {
  public:
  static const int FIELD = 890;
  MaturityNetMoney() : DoubleField(890) {}
    MaturityNetMoney(double data) : DoubleField(890, data) {}
    MaturityNetMoney(double data, int decimalPadding) : DoubleField(890, data, decimalPadding) {}
    
  };
  
  public __gc class MiscFeeBasis : public IntField
  {
  public:
  static const int FIELD = 891;
  static const int ABSOLUTE = 0;
  static const int PER_UNIT = 1;
  static const int PERCENTAGE = 2;
  MiscFeeBasis() : IntField(891) {}
    MiscFeeBasis(int data) : IntField(891, data) {}
    
  };
  
  public __gc class TotNoAllocs : public IntField
  {
  public:
  static const int FIELD = 892;
  TotNoAllocs() : IntField(892) {}
    TotNoAllocs(int data) : IntField(892, data) {}
    
  };
  
  public __gc class LastFragment : public BooleanField
  {
  public:
  static const int FIELD = 893;
  LastFragment() : BooleanField(893) {}
    LastFragment(bool data) : BooleanField(893, data) {}
    
  };
  
  public __gc class CollReqID : public StringField
  {
  public:
  static const int FIELD = 894;
  CollReqID() : StringField(894) {}
    CollReqID(String* data) : StringField(894, data) {}
    
  };
  
  public __gc class CollAsgnReason : public IntField
  {
  public:
  static const int FIELD = 895;
  static const int INITIAL = 0;
  static const int SCHEDULED = 1;
  static const int TIME_WARNING = 2;
  static const int MARGIN_DEFICIENCY = 3;
  static const int MARGIN_EXCESS = 4;
  static const int FORWARD_COLLATERAL_DEMAND = 5;
  static const int EVENT_OF_DEFAULT = 6;
  static const int ADVERSE_TAX_EVENT = 7;
  CollAsgnReason() : IntField(895) {}
    CollAsgnReason(int data) : IntField(895, data) {}
    
  };
  
  public __gc class CollInquiryQualifier : public IntField
  {
  public:
  static const int FIELD = 896;
  static const int TRADEDATE = 0;
  static const int GC_INSTRUMENT = 1;
  static const int COLLATERALINSTRUMENT = 2;
  static const int SUBSTITUTION_ELIGIBLE = 3;
  static const int NOT_ASSIGNED = 4;
  static const int PARTIALLY_ASSIGNED = 5;
  static const int FULLY_ASSIGNED = 6;
  static const int OUTSTANDING_TRADES = 7;
  CollInquiryQualifier() : IntField(896) {}
    CollInquiryQualifier(int data) : IntField(896, data) {}
    
  };
  
  public __gc class NoTrades : public IntField
  {
  public:
  static const int FIELD = 897;
  NoTrades() : IntField(897) {}
    NoTrades(int data) : IntField(897, data) {}
    
  };
  
  public __gc class MarginRatio : public DoubleField
  {
  public:
  static const int FIELD = 898;
  MarginRatio() : DoubleField(898) {}
    MarginRatio(double data) : DoubleField(898, data) {}
    MarginRatio(double data, int decimalPadding) : DoubleField(898, data, decimalPadding) {}
    
  };
  
  public __gc class MarginExcess : public DoubleField
  {
  public:
  static const int FIELD = 899;
  MarginExcess() : DoubleField(899) {}
    MarginExcess(double data) : DoubleField(899, data) {}
    MarginExcess(double data, int decimalPadding) : DoubleField(899, data, decimalPadding) {}
    
  };
  
  public __gc class TotalNetValue : public DoubleField
  {
  public:
  static const int FIELD = 900;
  TotalNetValue() : DoubleField(900) {}
    TotalNetValue(double data) : DoubleField(900, data) {}
    TotalNetValue(double data, int decimalPadding) : DoubleField(900, data, decimalPadding) {}
    
  };
  
  public __gc class CashOutstanding : public DoubleField
  {
  public:
  static const int FIELD = 901;
  CashOutstanding() : DoubleField(901) {}
    CashOutstanding(double data) : DoubleField(901, data) {}
    CashOutstanding(double data, int decimalPadding) : DoubleField(901, data, decimalPadding) {}
    
  };
  
  public __gc class CollAsgnID : public StringField
  {
  public:
  static const int FIELD = 902;
  CollAsgnID() : StringField(902) {}
    CollAsgnID(String* data) : StringField(902, data) {}
    
  };
  
  public __gc class CollAsgnTransType : public IntField
  {
  public:
  static const int FIELD = 903;
  static const int NEW = 0;
  static const int REPLACE = 1;
  static const int CANCEL = 2;
  static const int RELEASE = 3;
  static const int REVERSE = 4;
  CollAsgnTransType() : IntField(903) {}
    CollAsgnTransType(int data) : IntField(903, data) {}
    
  };
  
  public __gc class CollRespID : public StringField
  {
  public:
  static const int FIELD = 904;
  CollRespID() : StringField(904) {}
    CollRespID(String* data) : StringField(904, data) {}
    
  };
  
  public __gc class CollAsgnRespType : public IntField
  {
  public:
  static const int FIELD = 905;
  static const int RECEIVED = 0;
  static const int ACCEPTED = 1;
  static const int DECLINED = 2;
  static const int REJECTED = 3;
  CollAsgnRespType() : IntField(905) {}
    CollAsgnRespType(int data) : IntField(905, data) {}
    
  };
  
  public __gc class CollAsgnRejectReason : public IntField
  {
  public:
  static const int FIELD = 906;
  static const int UNKNOWN_DEAL = 0;
  static const int UNKNOWN_OR_INVALID_INSTRUMENT = 1;
  static const int UNAUTHORIZED_TRANSACTION = 2;
  static const int INSUFFICIENT_COLLATERAL = 3;
  static const int INVALID_TYPE_OF_COLLATERAL = 4;
  static const int EXCESSIVE_SUBSTITUTION = 5;
  static const int OTHER = 99;
  CollAsgnRejectReason() : IntField(906) {}
    CollAsgnRejectReason(int data) : IntField(906, data) {}
    
  };
  
  public __gc class CollAsgnRefID : public StringField
  {
  public:
  static const int FIELD = 907;
  CollAsgnRefID() : StringField(907) {}
    CollAsgnRefID(String* data) : StringField(907, data) {}
    
  };
  
  public __gc class CollRptID : public StringField
  {
  public:
  static const int FIELD = 908;
  CollRptID() : StringField(908) {}
    CollRptID(String* data) : StringField(908, data) {}
    
  };
  
  public __gc class CollInquiryID : public StringField
  {
  public:
  static const int FIELD = 909;
  CollInquiryID() : StringField(909) {}
    CollInquiryID(String* data) : StringField(909, data) {}
    
  };
  
  public __gc class CollStatus : public IntField
  {
  public:
  static const int FIELD = 910;
  static const int UNASSIGNED = 0;
  static const int PARTIALLY_ASSIGNED = 1;
  static const int ASSIGNMENT_PROPOSED = 2;
  static const int ASSIGNED = 3;
  static const int CHALLENGED = 4;
  CollStatus() : IntField(910) {}
    CollStatus(int data) : IntField(910, data) {}
    
  };
  
  public __gc class TotNumReports : public IntField
  {
  public:
  static const int FIELD = 911;
  TotNumReports() : IntField(911) {}
    TotNumReports(int data) : IntField(911, data) {}
    
  };
  
  public __gc class LastRptRequested : public BooleanField
  {
  public:
  static const int FIELD = 912;
  LastRptRequested() : BooleanField(912) {}
    LastRptRequested(bool data) : BooleanField(912, data) {}
    
  };
  
  public __gc class AgreementDesc : public StringField
  {
  public:
  static const int FIELD = 913;
  AgreementDesc() : StringField(913) {}
    AgreementDesc(String* data) : StringField(913, data) {}
    
  };
  
  public __gc class AgreementID : public StringField
  {
  public:
  static const int FIELD = 914;
  AgreementID() : StringField(914) {}
    AgreementID(String* data) : StringField(914, data) {}
    
  };
  
  public __gc class AgreementDate : public StringField
  {
  public:
  static const int FIELD = 915;
  AgreementDate() : StringField(915) {}
    AgreementDate(String* data) : StringField(915, data) {}
    
  };
  
  public __gc class StartDate : public StringField
  {
  public:
  static const int FIELD = 916;
  StartDate() : StringField(916) {}
    StartDate(String* data) : StringField(916, data) {}
    
  };
  
  public __gc class EndDate : public StringField
  {
  public:
  static const int FIELD = 917;
  EndDate() : StringField(917) {}
    EndDate(String* data) : StringField(917, data) {}
    
  };
  
  public __gc class AgreementCurrency : public StringField
  {
  public:
  static const int FIELD = 918;
  AgreementCurrency() : StringField(918) {}
    AgreementCurrency(String* data) : StringField(918, data) {}
    
  };
  
  public __gc class DeliveryType : public IntField
  {
  public:
  static const int FIELD = 919;
  static const int VERSUS_PAYMENT = 0;
  static const int FREE = 1;
  static const int TRI_PARTY = 2;
  static const int HOLD_IN_CUSTODY = 3;
  DeliveryType() : IntField(919) {}
    DeliveryType(int data) : IntField(919, data) {}
    
  };
  
  public __gc class EndAccruedInterestAmt : public DoubleField
  {
  public:
  static const int FIELD = 920;
  EndAccruedInterestAmt() : DoubleField(920) {}
    EndAccruedInterestAmt(double data) : DoubleField(920, data) {}
    EndAccruedInterestAmt(double data, int decimalPadding) : DoubleField(920, data, decimalPadding) {}
    
  };
  
  public __gc class StartCash : public DoubleField
  {
  public:
  static const int FIELD = 921;
  StartCash() : DoubleField(921) {}
    StartCash(double data) : DoubleField(921, data) {}
    StartCash(double data, int decimalPadding) : DoubleField(921, data, decimalPadding) {}
    
  };
  
  public __gc class EndCash : public DoubleField
  {
  public:
  static const int FIELD = 922;
  EndCash() : DoubleField(922) {}
    EndCash(double data) : DoubleField(922, data) {}
    EndCash(double data, int decimalPadding) : DoubleField(922, data, decimalPadding) {}
    
  };
  
  public __gc class UserRequestID : public StringField
  {
  public:
  static const int FIELD = 923;
  UserRequestID() : StringField(923) {}
    UserRequestID(String* data) : StringField(923, data) {}
    
  };
  
  public __gc class UserRequestType : public IntField
  {
  public:
  static const int FIELD = 924;
  static const int LOGONUSER = 1;
  static const int LOGOFFUSER = 2;
  static const int CHANGEPASSWORDFORUSER = 3;
  static const int REQUEST_INDIVIDUAL_USER_STATUS = 4;
  UserRequestType() : IntField(924) {}
    UserRequestType(int data) : IntField(924, data) {}
    
  };
  
  public __gc class NewPassword : public StringField
  {
  public:
  static const int FIELD = 925;
  NewPassword() : StringField(925) {}
    NewPassword(String* data) : StringField(925, data) {}
    
  };
  
  public __gc class UserStatus : public IntField
  {
  public:
  static const int FIELD = 926;
  static const int LOGGED_IN = 1;
  static const int NOT_LOGGED_IN = 2;
  static const int USER_NOT_RECOGNISED = 3;
  static const int PASSWORD_INCORRECT = 4;
  static const int PASSWORD_CHANGED = 5;
  static const int OTHER = 6;
  UserStatus() : IntField(926) {}
    UserStatus(int data) : IntField(926, data) {}
    
  };
  
  public __gc class UserStatusText : public StringField
  {
  public:
  static const int FIELD = 927;
  UserStatusText() : StringField(927) {}
    UserStatusText(String* data) : StringField(927, data) {}
    
  };
  
  public __gc class StatusValue : public IntField
  {
  public:
  static const int FIELD = 928;
  static const int CONNECTED = 1;
  static const int NOT_CONNECTED_DOWN_EXPECTED_UP = 2;
  static const int NOT_CONNECTED_DOWN_EXPECTED_DOWN = 3;
  static const int IN_PROCESS = 4;
  StatusValue() : IntField(928) {}
    StatusValue(int data) : IntField(928, data) {}
    
  };
  
  public __gc class StatusText : public StringField
  {
  public:
  static const int FIELD = 929;
  StatusText() : StringField(929) {}
    StatusText(String* data) : StringField(929, data) {}
    
  };
  
  public __gc class RefCompID : public StringField
  {
  public:
  static const int FIELD = 930;
  RefCompID() : StringField(930) {}
    RefCompID(String* data) : StringField(930, data) {}
    
  };
  
  public __gc class RefSubID : public StringField
  {
  public:
  static const int FIELD = 931;
  RefSubID() : StringField(931) {}
    RefSubID(String* data) : StringField(931, data) {}
    
  };
  
  public __gc class NetworkResponseID : public StringField
  {
  public:
  static const int FIELD = 932;
  NetworkResponseID() : StringField(932) {}
    NetworkResponseID(String* data) : StringField(932, data) {}
    
  };
  
  public __gc class NetworkRequestID : public StringField
  {
  public:
  static const int FIELD = 933;
  NetworkRequestID() : StringField(933) {}
    NetworkRequestID(String* data) : StringField(933, data) {}
    
  };
  
  public __gc class LastNetworkResponseID : public StringField
  {
  public:
  static const int FIELD = 934;
  LastNetworkResponseID() : StringField(934) {}
    LastNetworkResponseID(String* data) : StringField(934, data) {}
    
  };
  
  public __gc class NetworkRequestType : public IntField
  {
  public:
  static const int FIELD = 935;
  static const int SNAPSHOT = 1;
  static const int SUBSCRIBE = 2;
  static const int STOP_SUBSCRIBING = 4;
  static const int LEVEL_OF_DETAIL = 8;
  NetworkRequestType() : IntField(935) {}
    NetworkRequestType(int data) : IntField(935, data) {}
    
  };
  
  public __gc class NoCompIDs : public IntField
  {
  public:
  static const int FIELD = 936;
  NoCompIDs() : IntField(936) {}
    NoCompIDs(int data) : IntField(936, data) {}
    
  };
  
  public __gc class NetworkStatusResponseType : public IntField
  {
  public:
  static const int FIELD = 937;
  static const int FULL = 1;
  static const int INCREMENTAL_UPDATE = 2;
  NetworkStatusResponseType() : IntField(937) {}
    NetworkStatusResponseType(int data) : IntField(937, data) {}
    
  };
  
  public __gc class NoCollInquiryQualifier : public IntField
  {
  public:
  static const int FIELD = 938;
  NoCollInquiryQualifier() : IntField(938) {}
    NoCollInquiryQualifier(int data) : IntField(938, data) {}
    
  };
  
  public __gc class TrdRptStatus : public IntField
  {
  public:
  static const int FIELD = 939;
  static const int ACCEPTED = 0;
  static const int REJECTED = 1;
  static const int ACCEPTED_WITH_ERRORS = 3;
  TrdRptStatus() : IntField(939) {}
    TrdRptStatus(int data) : IntField(939, data) {}
    
  };
  
  public __gc class AffirmStatus : public IntField
  {
  public:
  static const int FIELD = 940;
  static const int RECEIVED = 1;
  static const int CONFIRM_REJECTED = 2;
  static const int AFFIRMED = 3;
  AffirmStatus() : IntField(940) {}
    AffirmStatus(int data) : IntField(940, data) {}
    
  };
  
  public __gc class UnderlyingStrikeCurrency : public StringField
  {
  public:
  static const int FIELD = 941;
  UnderlyingStrikeCurrency() : StringField(941) {}
    UnderlyingStrikeCurrency(String* data) : StringField(941, data) {}
    
  };
  
  public __gc class LegStrikeCurrency : public StringField
  {
  public:
  static const int FIELD = 942;
  LegStrikeCurrency() : StringField(942) {}
    LegStrikeCurrency(String* data) : StringField(942, data) {}
    
  };
  
  public __gc class TimeBracket : public StringField
  {
  public:
  static const int FIELD = 943;
  TimeBracket() : StringField(943) {}
    TimeBracket(String* data) : StringField(943, data) {}
    
  };
  
  public __gc class CollAction : public IntField
  {
  public:
  static const int FIELD = 944;
  static const int RETAIN = 0;
  static const int ADD = 1;
  static const int REMOVE = 2;
  CollAction() : IntField(944) {}
    CollAction(int data) : IntField(944, data) {}
    
  };
  
  public __gc class CollInquiryStatus : public IntField
  {
  public:
  static const int FIELD = 945;
  static const int ACCEPTED = 0;
  static const int ACCEPTED_WITH_WARNINGS = 1;
  static const int COMPLETED = 2;
  static const int COMPLETED_WITH_WARNINGS = 3;
  static const int REJECTED = 4;
  CollInquiryStatus() : IntField(945) {}
    CollInquiryStatus(int data) : IntField(945, data) {}
    
  };
  
  public __gc class CollInquiryResult : public IntField
  {
  public:
  static const int FIELD = 946;
  static const int SUCCESSFUL = 0;
  static const int INVALID_OR_UNKNOWN_INSTRUMENT = 1;
  static const int INVALID_OR_UNKNOWN_COLLATERAL_TYPE = 2;
  static const int INVALID_PARTIES = 3;
  static const int INVALID_TRANSPORT_TYPE_REQUESTED = 4;
  static const int INVALID_DESTINATION_REQUESTED = 5;
  static const int NO_COLLATERAL_FOUND_FOR_THE_TRADE_SPECIFIED = 6;
  static const int NO_COLLATERAL_FOUND_FOR_THE_ORDER_SPECIFIED = 7;
  static const int COLLATERAL_INQUIRY_TYPE_NOT_SUPPORTED = 8;
  static const int UNAUTHORIZED_FOR_COLLATERAL_INQUIRY = 9;
  static const int OTHER = 99;
  CollInquiryResult() : IntField(946) {}
    CollInquiryResult(int data) : IntField(946, data) {}
    
  };
  
  public __gc class StrikeCurrency : public StringField
  {
  public:
  static const int FIELD = 947;
  StrikeCurrency() : StringField(947) {}
    StrikeCurrency(String* data) : StringField(947, data) {}
    
  };
  
  public __gc class NoNested3PartyIDs : public IntField
  {
  public:
  static const int FIELD = 948;
  NoNested3PartyIDs() : IntField(948) {}
    NoNested3PartyIDs(int data) : IntField(948, data) {}
    
  };
  
  public __gc class Nested3PartyID : public StringField
  {
  public:
  static const int FIELD = 949;
  Nested3PartyID() : StringField(949) {}
    Nested3PartyID(String* data) : StringField(949, data) {}
    
  };
  
  public __gc class Nested3PartyIDSource : public CharField
  {
  public:
  static const int FIELD = 950;
  Nested3PartyIDSource() : CharField(950) {}
    Nested3PartyIDSource(__wchar_t data) : CharField(950, data) {}
    
  };
  
  public __gc class Nested3PartyRole : public IntField
  {
  public:
  static const int FIELD = 951;
  Nested3PartyRole() : IntField(951) {}
    Nested3PartyRole(int data) : IntField(951, data) {}
    
  };
  
  public __gc class NoNested3PartySubIDs : public IntField
  {
  public:
  static const int FIELD = 952;
  NoNested3PartySubIDs() : IntField(952) {}
    NoNested3PartySubIDs(int data) : IntField(952, data) {}
    
  };
  
  public __gc class Nested3PartySubID : public StringField
  {
  public:
  static const int FIELD = 953;
  Nested3PartySubID() : StringField(953) {}
    Nested3PartySubID(String* data) : StringField(953, data) {}
    
  };
  
  public __gc class Nested3PartySubIDType : public IntField
  {
  public:
  static const int FIELD = 954;
  Nested3PartySubIDType() : IntField(954) {}
    Nested3PartySubIDType(int data) : IntField(954, data) {}
    
  };
  
  public __gc class LegContractSettlMonth : public StringField
  {
  public:
  static const int FIELD = 955;
  LegContractSettlMonth() : StringField(955) {}
    LegContractSettlMonth(String* data) : StringField(955, data) {}
    
  };
  
  public __gc class LegInterestAccrualDate : public StringField
  {
  public:
  static const int FIELD = 956;
  LegInterestAccrualDate() : StringField(956) {}
    LegInterestAccrualDate(String* data) : StringField(956, data) {}
    
  };
  
  public __gc class NoStrategyParameters : public IntField
  {
  public:
  static const int FIELD = 957;
  NoStrategyParameters() : IntField(957) {}
    NoStrategyParameters(int data) : IntField(957, data) {}
    
  };
  
  public __gc class StrategyParameterName : public StringField
  {
  public:
  static const int FIELD = 958;
  StrategyParameterName() : StringField(958) {}
    StrategyParameterName(String* data) : StringField(958, data) {}
    
  };
  
  public __gc class StrategyParameterType : public IntField
  {
  public:
  static const int FIELD = 959;
  static const int INT = 1;
  static const int LENGTH = 2;
  static const int NUMINGROUP = 3;
  static const int SEQNUM = 4;
  static const int TAGNUM = 5;
  static const int FLOAT = 6;
  static const int QTY = 7;
  static const int PRICE = 8;
  static const int PRICEOFFSET = 9;
  static const int AMT = 10;
  static const int PERCENTAGE = 11;
  static const int CHAR = 12;
  static const int BOOLEAN = 13;
  static const int STRING = 14;
  static const int MULTIPLECHARVALUE = 15;
  static const int CURRENCY = 16;
  static const int EXCHANGE = 17;
  static const int MONTH_YEAR = 18;
  static const int UTCTIMESTAMP = 19;
  static const int UTCTIMEONLY = 20;
  static const int LOCALMKTTIME = 21;
  static const int UTCDATE = 22;
  static const int DATA = 23;
  static const int MULTIPLESTRINGVALUE = 24;
  StrategyParameterType() : IntField(959) {}
    StrategyParameterType(int data) : IntField(959, data) {}
    
  };
  
  public __gc class StrategyParameterValue : public StringField
  {
  public:
  static const int FIELD = 960;
  StrategyParameterValue() : StringField(960) {}
    StrategyParameterValue(String* data) : StringField(960, data) {}
    
  };
  
  public __gc class HostCrossID : public StringField
  {
  public:
  static const int FIELD = 961;
  HostCrossID() : StringField(961) {}
    HostCrossID(String* data) : StringField(961, data) {}
    
  };
  
  public __gc class SideTimeInForce : public UtcTimeStampField
  {
  public:
  static const int FIELD = 962;
  SideTimeInForce() : UtcTimeStampField(962) {}
    SideTimeInForce(DateTime data) : UtcTimeStampField(962, data) {}
    SideTimeInForce(DateTime data, bool showMilliseconds) : UtcTimeStampField(962, data, showMilliseconds) {}
    
  };
  
  public __gc class MDReportID : public IntField
  {
  public:
  static const int FIELD = 963;
  MDReportID() : IntField(963) {}
    MDReportID(int data) : IntField(963, data) {}
    
  };
  
  public __gc class SecurityReportID : public IntField
  {
  public:
  static const int FIELD = 964;
  SecurityReportID() : IntField(964) {}
    SecurityReportID(int data) : IntField(964, data) {}
    
  };
  
  public __gc class SecurityStatus : public StringField
  {
  public:
  static const int FIELD = 965;
  static const String* ACTIVE = "1";
  static const String* INACTIVE = "2";
  SecurityStatus() : StringField(965) {}
    SecurityStatus(String* data) : StringField(965, data) {}
    
  };
  
  public __gc class SettleOnOpenFlag : public StringField
  {
  public:
  static const int FIELD = 966;
  SettleOnOpenFlag() : StringField(966) {}
    SettleOnOpenFlag(String* data) : StringField(966, data) {}
    
  };
  
  public __gc class StrikeMultiplier : public DoubleField
  {
  public:
  static const int FIELD = 967;
  StrikeMultiplier() : DoubleField(967) {}
    StrikeMultiplier(double data) : DoubleField(967, data) {}
    StrikeMultiplier(double data, int decimalPadding) : DoubleField(967, data, decimalPadding) {}
    
  };
  
  public __gc class StrikeValue : public DoubleField
  {
  public:
  static const int FIELD = 968;
  StrikeValue() : DoubleField(968) {}
    StrikeValue(double data) : DoubleField(968, data) {}
    StrikeValue(double data, int decimalPadding) : DoubleField(968, data, decimalPadding) {}
    
  };
  
  public __gc class MinPriceIncrement : public DoubleField
  {
  public:
  static const int FIELD = 969;
  MinPriceIncrement() : DoubleField(969) {}
    MinPriceIncrement(double data) : DoubleField(969, data) {}
    MinPriceIncrement(double data, int decimalPadding) : DoubleField(969, data, decimalPadding) {}
    
  };
  
  public __gc class PositionLimit : public IntField
  {
  public:
  static const int FIELD = 970;
  PositionLimit() : IntField(970) {}
    PositionLimit(int data) : IntField(970, data) {}
    
  };
  
  public __gc class NTPositionLimit : public IntField
  {
  public:
  static const int FIELD = 971;
  NTPositionLimit() : IntField(971) {}
    NTPositionLimit(int data) : IntField(971, data) {}
    
  };
  
  public __gc class UnderlyingAllocationPercent : public DoubleField
  {
  public:
  static const int FIELD = 972;
  UnderlyingAllocationPercent() : DoubleField(972) {}
    UnderlyingAllocationPercent(double data) : DoubleField(972, data) {}
    UnderlyingAllocationPercent(double data, int decimalPadding) : DoubleField(972, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingCashAmount : public DoubleField
  {
  public:
  static const int FIELD = 973;
  UnderlyingCashAmount() : DoubleField(973) {}
    UnderlyingCashAmount(double data) : DoubleField(973, data) {}
    UnderlyingCashAmount(double data, int decimalPadding) : DoubleField(973, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingCashType : public StringField
  {
  public:
  static const int FIELD = 974;
  static const String* FIXED = "FIXED";
  static const String* DIFF = "DIFF";
  UnderlyingCashType() : StringField(974) {}
    UnderlyingCashType(String* data) : StringField(974, data) {}
    
  };
  
  public __gc class UnderlyingSettlementType : public IntField
  {
  public:
  static const int FIELD = 975;
  static const int Tp1 = 2;
  static const int Tp3 = 4;
  static const int Tp4 = 5;
  UnderlyingSettlementType() : IntField(975) {}
    UnderlyingSettlementType(int data) : IntField(975, data) {}
    
  };
  
  public __gc class QuantityDate : public StringField
  {
  public:
  static const int FIELD = 976;
  QuantityDate() : StringField(976) {}
    QuantityDate(String* data) : StringField(976, data) {}
    
  };
  
  public __gc class ContIntRptID : public StringField
  {
  public:
  static const int FIELD = 977;
  ContIntRptID() : StringField(977) {}
    ContIntRptID(String* data) : StringField(977, data) {}
    
  };
  
  public __gc class LateIndicator : public BooleanField
  {
  public:
  static const int FIELD = 978;
  LateIndicator() : BooleanField(978) {}
    LateIndicator(bool data) : BooleanField(978, data) {}
    
  };
  
  public __gc class InputSource : public StringField
  {
  public:
  static const int FIELD = 979;
  InputSource() : StringField(979) {}
    InputSource(String* data) : StringField(979, data) {}
    
  };
  
  public __gc class SecurityUpdateAction : public CharField
  {
  public:
  static const int FIELD = 980;
  static const __wchar_t ADD = 'A';
  static const __wchar_t DELETE = 'D';
  static const __wchar_t MODIFY = 'M';
  SecurityUpdateAction() : CharField(980) {}
    SecurityUpdateAction(__wchar_t data) : CharField(980, data) {}
    
  };
  
  public __gc class NoExpiration : public IntField
  {
  public:
  static const int FIELD = 981;
  NoExpiration() : IntField(981) {}
    NoExpiration(int data) : IntField(981, data) {}
    
  };
  
  public __gc class ExpType : public IntField
  {
  public:
  static const int FIELD = 982;
  static const int AUTO_EXERCISE = 1;
  static const int NON_AUTO_EXERCISE = 2;
  static const int FINAL_WILL_BE_EXERCISED = 3;
  static const int CONTRARY_INTENTION = 4;
  static const int DIFFERENCE = 5;
  ExpType() : IntField(982) {}
    ExpType(int data) : IntField(982, data) {}
    
  };
  
  public __gc class ExpQty : public DoubleField
  {
  public:
  static const int FIELD = 983;
  ExpQty() : DoubleField(983) {}
    ExpQty(double data) : DoubleField(983, data) {}
    ExpQty(double data, int decimalPadding) : DoubleField(983, data, decimalPadding) {}
    
  };
  
  public __gc class NoUnderlyingAmounts : public IntField
  {
  public:
  static const int FIELD = 984;
  NoUnderlyingAmounts() : IntField(984) {}
    NoUnderlyingAmounts(int data) : IntField(984, data) {}
    
  };
  
  public __gc class UnderlyingPayAmount : public DoubleField
  {
  public:
  static const int FIELD = 985;
  UnderlyingPayAmount() : DoubleField(985) {}
    UnderlyingPayAmount(double data) : DoubleField(985, data) {}
    UnderlyingPayAmount(double data, int decimalPadding) : DoubleField(985, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingCollectAmount : public DoubleField
  {
  public:
  static const int FIELD = 986;
  UnderlyingCollectAmount() : DoubleField(986) {}
    UnderlyingCollectAmount(double data) : DoubleField(986, data) {}
    UnderlyingCollectAmount(double data, int decimalPadding) : DoubleField(986, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingSettlementDate : public StringField
  {
  public:
  static const int FIELD = 987;
  UnderlyingSettlementDate() : StringField(987) {}
    UnderlyingSettlementDate(String* data) : StringField(987, data) {}
    
  };
  
  public __gc class UnderlyingSettlementStatus : public StringField
  {
  public:
  static const int FIELD = 988;
  UnderlyingSettlementStatus() : StringField(988) {}
    UnderlyingSettlementStatus(String* data) : StringField(988, data) {}
    
  };
  
  public __gc class SecondaryIndividualAllocID : public StringField
  {
  public:
  static const int FIELD = 989;
  SecondaryIndividualAllocID() : StringField(989) {}
    SecondaryIndividualAllocID(String* data) : StringField(989, data) {}
    
  };
  
  public __gc class LegReportID : public StringField
  {
  public:
  static const int FIELD = 990;
  LegReportID() : StringField(990) {}
    LegReportID(String* data) : StringField(990, data) {}
    
  };
  
  public __gc class RndPx : public DoubleField
  {
  public:
  static const int FIELD = 991;
  RndPx() : DoubleField(991) {}
    RndPx(double data) : DoubleField(991, data) {}
    RndPx(double data, int decimalPadding) : DoubleField(991, data, decimalPadding) {}
    
  };
  
  public __gc class IndividualAllocType : public IntField
  {
  public:
  static const int FIELD = 992;
  static const int SUB_ALLOCATE = 1;
  static const int THIRD_PARTY_ALLOCATION = 2;
  IndividualAllocType() : IntField(992) {}
    IndividualAllocType(int data) : IntField(992, data) {}
    
  };
  
  public __gc class AllocCustomerCapacity : public StringField
  {
  public:
  static const int FIELD = 993;
  AllocCustomerCapacity() : StringField(993) {}
    AllocCustomerCapacity(String* data) : StringField(993, data) {}
    
  };
  
  public __gc class TierCode : public StringField
  {
  public:
  static const int FIELD = 994;
  TierCode() : StringField(994) {}
    TierCode(String* data) : StringField(994, data) {}
    
  };
  
  public __gc class UnitofMeasure : public StringField
  {
  public:
  static const int FIELD = 996;
  static const String* MEGAWATT_HOURS = "MWh";
  static const String* ONE_MILLION_BTU = "MMBtu";
  static const String* BARRELS = "Bbl";
  static const String* GALLONS = "Gal";
  static const String* METRIC_TONS = "t";
  static const String* TONS = "tn";
  static const String* MILLION_BARRELS = "MMbbl";
  static const String* POUNDS = "lbs";
  static const String* TROY_OUNCES = "oz_tr";
  static const String* US_DOLLARS = "USD";
  static const String* BILLION_CUBIC_FEET = "Bcf";
  static const String* BUSHELS = "Bu";
  UnitofMeasure() : StringField(996) {}
    UnitofMeasure(String* data) : StringField(996, data) {}
    
  };
  
  public __gc class TimeUnit : public StringField
  {
  public:
  static const int FIELD = 997;
  static const String* SECOND = "S";
  static const String* MINUTE = "Min";
  static const String* HOUR = "H";
  static const String* DAY = "D";
  static const String* WEEK = "Wk";
  static const String* MONTH = "Mo";
  static const String* YEAR = "Yr";
  TimeUnit() : StringField(997) {}
    TimeUnit(String* data) : StringField(997, data) {}
    
  };
  
  public __gc class UnderlyingUnitofMeasure : public StringField
  {
  public:
  static const int FIELD = 998;
  UnderlyingUnitofMeasure() : StringField(998) {}
    UnderlyingUnitofMeasure(String* data) : StringField(998, data) {}
    
  };
  
  public __gc class LegUnitofMeasure : public StringField
  {
  public:
  static const int FIELD = 999;
  LegUnitofMeasure() : StringField(999) {}
    LegUnitofMeasure(String* data) : StringField(999, data) {}
    
  };
  
  public __gc class UnderlyingTimeUnit : public StringField
  {
  public:
  static const int FIELD = 1000;
  UnderlyingTimeUnit() : StringField(1000) {}
    UnderlyingTimeUnit(String* data) : StringField(1000, data) {}
    
  };
  
  public __gc class LegTimeUnit : public StringField
  {
  public:
  static const int FIELD = 1001;
  LegTimeUnit() : StringField(1001) {}
    LegTimeUnit(String* data) : StringField(1001, data) {}
    
  };
  
  public __gc class AllocMethod : public IntField
  {
  public:
  static const int FIELD = 1002;
  static const int AUTOMATIC = 1;
  static const int GUARANTOR = 2;
  static const int MANUAL = 3;
  AllocMethod() : IntField(1002) {}
    AllocMethod(int data) : IntField(1002, data) {}
    
  };
  
  public __gc class TradeID : public StringField
  {
  public:
  static const int FIELD = 1003;
  TradeID() : StringField(1003) {}
    TradeID(String* data) : StringField(1003, data) {}
    
  };
  
  public __gc class SideTradeReportID : public StringField
  {
  public:
  static const int FIELD = 1005;
  SideTradeReportID() : StringField(1005) {}
    SideTradeReportID(String* data) : StringField(1005, data) {}
    
  };
  
  public __gc class SideFillStationCd : public StringField
  {
  public:
  static const int FIELD = 1006;
  SideFillStationCd() : StringField(1006) {}
    SideFillStationCd(String* data) : StringField(1006, data) {}
    
  };
  
  public __gc class SideReasonCd : public StringField
  {
  public:
  static const int FIELD = 1007;
  SideReasonCd() : StringField(1007) {}
    SideReasonCd(String* data) : StringField(1007, data) {}
    
  };
  
  public __gc class SideTrdSubTyp : public IntField
  {
  public:
  static const int FIELD = 1008;
  static const int CMTA = 0;
  static const int INTERNAL_TRANSFER = 1;
  static const int EXTERNAL_TRANSFER = 2;
  static const int REJECT_FOR_SUBMITTING_TRADE = 3;
  static const int ADVISORY_FOR_CONTRA_SIDE = 4;
  static const int OFFSET_DUE_TO_AN_ALLOCATION = 5;
  static const int ONSET_DUE_TO_AN_ALLOCATION = 6;
  static const int DIFFERENTIAL_SPREAD = 7;
  static const int IMPLIED_SPREAD_LEG_EXECUTED_AGAINST_AN_OUTRIGHT = 8;
  static const int TRANSACTION_FROM_EXERCISE = 9;
  static const int TRANSACTION_FROM_ASSIGNMENT = 10;
  SideTrdSubTyp() : IntField(1008) {}
    SideTrdSubTyp(int data) : IntField(1008, data) {}
    
  };
  
  public __gc class SideQty : public IntField
  {
  public:
  static const int FIELD = 1009;
  SideQty() : IntField(1009) {}
    SideQty(int data) : IntField(1009, data) {}
    
  };
  
  public __gc class MessageEventSource : public StringField
  {
  public:
  static const int FIELD = 1011;
  MessageEventSource() : StringField(1011) {}
    MessageEventSource(String* data) : StringField(1011, data) {}
    
  };
  
  public __gc class SideTrdRegTimestamp : public UtcTimeStampField
  {
  public:
  static const int FIELD = 1012;
  SideTrdRegTimestamp() : UtcTimeStampField(1012) {}
    SideTrdRegTimestamp(DateTime data) : UtcTimeStampField(1012, data) {}
    SideTrdRegTimestamp(DateTime data, bool showMilliseconds) : UtcTimeStampField(1012, data, showMilliseconds) {}
    
  };
  
  public __gc class SideTrdRegTimestampType : public IntField
  {
  public:
  static const int FIELD = 1013;
  SideTrdRegTimestampType() : IntField(1013) {}
    SideTrdRegTimestampType(int data) : IntField(1013, data) {}
    
  };
  
  public __gc class SideTrdRegTimestampSrc : public StringField
  {
  public:
  static const int FIELD = 1014;
  SideTrdRegTimestampSrc() : StringField(1014) {}
    SideTrdRegTimestampSrc(String* data) : StringField(1014, data) {}
    
  };
  
  public __gc class AsOfIndicator : public CharField
  {
  public:
  static const int FIELD = 1015;
  static const __wchar_t FALSE = '0';
  static const __wchar_t TRUE = '1';
  AsOfIndicator() : CharField(1015) {}
    AsOfIndicator(__wchar_t data) : CharField(1015, data) {}
    
  };
  
  public __gc class NoSideTrdRegTS : public IntField
  {
  public:
  static const int FIELD = 1016;
  NoSideTrdRegTS() : IntField(1016) {}
    NoSideTrdRegTS(int data) : IntField(1016, data) {}
    
  };
  
  public __gc class LegOptionRatio : public DoubleField
  {
  public:
  static const int FIELD = 1017;
  LegOptionRatio() : DoubleField(1017) {}
    LegOptionRatio(double data) : DoubleField(1017, data) {}
    LegOptionRatio(double data, int decimalPadding) : DoubleField(1017, data, decimalPadding) {}
    
  };
  
  public __gc class NoInstrumentParties : public IntField
  {
  public:
  static const int FIELD = 1018;
  NoInstrumentParties() : IntField(1018) {}
    NoInstrumentParties(int data) : IntField(1018, data) {}
    
  };
  
  public __gc class InstrumentPartyID : public StringField
  {
  public:
  static const int FIELD = 1019;
  InstrumentPartyID() : StringField(1019) {}
    InstrumentPartyID(String* data) : StringField(1019, data) {}
    
  };
  
  public __gc class TradeVolume : public DoubleField
  {
  public:
  static const int FIELD = 1020;
  TradeVolume() : DoubleField(1020) {}
    TradeVolume(double data) : DoubleField(1020, data) {}
    TradeVolume(double data, int decimalPadding) : DoubleField(1020, data, decimalPadding) {}
    
  };
  
  public __gc class MDBookType : public IntField
  {
  public:
  static const int FIELD = 1021;
  static const int TOP_OF_BOOK = 1;
  static const int PRICE_DEPTH = 2;
  static const int ORDER_DEPTH = 3;
  MDBookType() : IntField(1021) {}
    MDBookType(int data) : IntField(1021, data) {}
    
  };
  
  public __gc class MDFeedType : public StringField
  {
  public:
  static const int FIELD = 1022;
  MDFeedType() : StringField(1022) {}
    MDFeedType(String* data) : StringField(1022, data) {}
    
  };
  
  public __gc class MDPriceLevel : public IntField
  {
  public:
  static const int FIELD = 1023;
  MDPriceLevel() : IntField(1023) {}
    MDPriceLevel(int data) : IntField(1023, data) {}
    
  };
  
  public __gc class MDOriginType : public IntField
  {
  public:
  static const int FIELD = 1024;
  static const int BOOK = 0;
  static const int OFF_BOOK = 1;
  static const int CROSS = 2;
  MDOriginType() : IntField(1024) {}
    MDOriginType(int data) : IntField(1024, data) {}
    
  };
  
  public __gc class FirstPx : public DoubleField
  {
  public:
  static const int FIELD = 1025;
  FirstPx() : DoubleField(1025) {}
    FirstPx(double data) : DoubleField(1025, data) {}
    FirstPx(double data, int decimalPadding) : DoubleField(1025, data, decimalPadding) {}
    
  };
  
  public __gc class MDEntrySpotRate : public DoubleField
  {
  public:
  static const int FIELD = 1026;
  MDEntrySpotRate() : DoubleField(1026) {}
    MDEntrySpotRate(double data) : DoubleField(1026, data) {}
    MDEntrySpotRate(double data, int decimalPadding) : DoubleField(1026, data, decimalPadding) {}
    
  };
  
  public __gc class MDEntryForwardPoints : public DoubleField
  {
  public:
  static const int FIELD = 1027;
  MDEntryForwardPoints() : DoubleField(1027) {}
    MDEntryForwardPoints(double data) : DoubleField(1027, data) {}
    MDEntryForwardPoints(double data, int decimalPadding) : DoubleField(1027, data, decimalPadding) {}
    
  };
  
  public __gc class ManualOrderIndicator : public BooleanField
  {
  public:
  static const int FIELD = 1028;
  ManualOrderIndicator() : BooleanField(1028) {}
    ManualOrderIndicator(bool data) : BooleanField(1028, data) {}
    
  };
  
  public __gc class CustDirectedOrder : public BooleanField
  {
  public:
  static const int FIELD = 1029;
  CustDirectedOrder() : BooleanField(1029) {}
    CustDirectedOrder(bool data) : BooleanField(1029, data) {}
    
  };
  
  public __gc class ReceivedDeptID : public StringField
  {
  public:
  static const int FIELD = 1030;
  ReceivedDeptID() : StringField(1030) {}
    ReceivedDeptID(String* data) : StringField(1030, data) {}
    
  };
  
  public __gc class CustOrderHandlingInst : public StringField
  {
  public:
  static const int FIELD = 1031;
  static const __wchar_t ADD_ON_ORDER = 'ADD';
  static const __wchar_t ALL_OR_NONE = 'AON';
  static const __wchar_t CASH_NOT_HELD = 'CNH';
  static const __wchar_t DIRECTED_ORDER = 'DIR';
  static const __wchar_t EXCHANGE_FOR_PHYSICAL_TRANSACTION = 'E.W';
  static const __wchar_t FILL_OR_KILL = 'FOK';
  static const __wchar_t IMBALANCE_ONLY = 'IO';
  static const __wchar_t IMMEDIATE_OR_CANCEL = 'IOC';
  static const __wchar_t LIMIT_ON_OPEN = 'LOO';
  static const __wchar_t LIMIT_ON_CLOSE = 'LOC';
  static const __wchar_t MARKET_AT_OPEN = 'MAO';
  static const __wchar_t MARKET_AT_CLOSE = 'MAC';
  static const __wchar_t MARKET_ON_OPEN = 'MOO';
  static const __wchar_t MARKET_ON_CLOSE = 'MOC';
  static const __wchar_t MINIMUM_QUANTITY = 'MQT';
  static const __wchar_t NOT_HELD = 'NH';
  static const __wchar_t OVER_THE_DAY = 'OVD';
  static const __wchar_t PEGGED = 'PEG';
  static const __wchar_t RESERVE_SIZE_ORDER = 'RSV';
  static const __wchar_t STOP_STOCK_TRANSACTION = 'S.W';
  static const __wchar_t SCALE = 'SCL';
  static const __wchar_t TIME_ORDER = 'TMO';
  static const __wchar_t TRAILING_STOP = 'TS';
  static const __wchar_t WORK = 'WRK';
  CustOrderHandlingInst() : StringField(1031) {}
    CustOrderHandlingInst(String* data) : StringField(1031, data) {}
    
  };
  
  public __gc class OrderHandlingInstSource : public IntField
  {
  public:
  static const int FIELD = 1032;
  static const int NASD_OATS = 1;
  OrderHandlingInstSource() : IntField(1032) {}
    OrderHandlingInstSource(int data) : IntField(1032, data) {}
    
  };
  
  public __gc class DeskType : public StringField
  {
  public:
  static const int FIELD = 1033;
  static const String* AGENCY = "A";
  static const String* ARBITRAGE = "AR";
  static const String* DERIVATIVES = "D";
  static const String* INTERNATIONAL = "IN";
  static const String* INSTITUTIONAL = "IS";
  static const String* OTHER = "O";
  static const String* PREFERRED_TRADING = "PF";
  static const String* PROPRIETARY = "PR";
  static const String* PROGRAM_TRADING = "PT";
  static const String* SALES = "S";
  static const String* TRADING = "T";
  DeskType() : StringField(1033) {}
    DeskType(String* data) : StringField(1033, data) {}
    
  };
  
  public __gc class DeskTypeSource : public IntField
  {
  public:
  static const int FIELD = 1034;
  static const int NASD_OATS = 1;
  DeskTypeSource() : IntField(1034) {}
    DeskTypeSource(int data) : IntField(1034, data) {}
    
  };
  
  public __gc class DeskOrderHandlingInst : public StringField
  {
  public:
  static const int FIELD = 1035;
  static const __wchar_t ADD_ON_ORDER = 'ADD';
  static const __wchar_t ALL_OR_NONE = 'AON';
  static const __wchar_t CASH_NOT_HELD = 'CNH';
  static const __wchar_t DIRECTED_ORDER = 'DIR';
  static const __wchar_t EXCHANGE_FOR_PHYSICAL_TRANSACTION = 'E.W';
  static const __wchar_t FILL_OR_KILL = 'FOK';
  static const __wchar_t IMBALANCE_ONLY = 'IO';
  static const __wchar_t IMMEDIATE_OR_CANCEL = 'IOC';
  static const __wchar_t LIMIT_ON_OPEN = 'LOO';
  static const __wchar_t LIMIT_ON_CLOSE = 'LOC';
  static const __wchar_t MARKET_AT_OPEN = 'MAO';
  static const __wchar_t MARKET_AT_CLOSE = 'MAC';
  static const __wchar_t MARKET_ON_OPEN = 'MOO';
  static const __wchar_t MARKET_ON_CLOSE = 'MOC';
  static const __wchar_t MINIMUM_QUANTITY = 'MQT';
  static const __wchar_t NOT_HELD = 'NH';
  static const __wchar_t OVER_THE_DAY = 'OVD';
  static const __wchar_t PEGGED = 'PEG';
  static const __wchar_t RESERVE_SIZE_ORDER = 'RSV';
  static const __wchar_t STOP_STOCK_TRANSACTION = 'S.W';
  static const __wchar_t SCALE = 'SCL';
  static const __wchar_t TIME_ORDER = 'TMO';
  static const __wchar_t TRAILING_STOP = 'TS';
  static const __wchar_t WORK = 'WRK';
  DeskOrderHandlingInst() : StringField(1035) {}
    DeskOrderHandlingInst(String* data) : StringField(1035, data) {}
    
  };
  
  public __gc class ExecAckStatus : public CharField
  {
  public:
  static const int FIELD = 1036;
  static const __wchar_t RECEIVED_NOT_YET_PROCESSED = '0';
  static const __wchar_t ACCEPTED = '1';
  static const __wchar_t DONT_KNOW = '2';
  ExecAckStatus() : CharField(1036) {}
    ExecAckStatus(__wchar_t data) : CharField(1036, data) {}
    
  };
  
  public __gc class UnderlyingDeliveryAmount : public DoubleField
  {
  public:
  static const int FIELD = 1037;
  UnderlyingDeliveryAmount() : DoubleField(1037) {}
    UnderlyingDeliveryAmount(double data) : DoubleField(1037, data) {}
    UnderlyingDeliveryAmount(double data, int decimalPadding) : DoubleField(1037, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingCapValue : public DoubleField
  {
  public:
  static const int FIELD = 1038;
  UnderlyingCapValue() : DoubleField(1038) {}
    UnderlyingCapValue(double data) : DoubleField(1038, data) {}
    UnderlyingCapValue(double data, int decimalPadding) : DoubleField(1038, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingSettlMethod : public StringField
  {
  public:
  static const int FIELD = 1039;
  UnderlyingSettlMethod() : StringField(1039) {}
    UnderlyingSettlMethod(String* data) : StringField(1039, data) {}
    
  };
  
  public __gc class SecondaryTradeID : public StringField
  {
  public:
  static const int FIELD = 1040;
  SecondaryTradeID() : StringField(1040) {}
    SecondaryTradeID(String* data) : StringField(1040, data) {}
    
  };
  
  public __gc class FirmTradeID : public StringField
  {
  public:
  static const int FIELD = 1041;
  FirmTradeID() : StringField(1041) {}
    FirmTradeID(String* data) : StringField(1041, data) {}
    
  };
  
  public __gc class SecondaryFirmTradeID : public StringField
  {
  public:
  static const int FIELD = 1042;
  SecondaryFirmTradeID() : StringField(1042) {}
    SecondaryFirmTradeID(String* data) : StringField(1042, data) {}
    
  };
  
  public __gc class CollApplType : public IntField
  {
  public:
  static const int FIELD = 1043;
  static const int SPECIFIC_DEPOSIT = 0;
  static const int GENERAL = 1;
  CollApplType() : IntField(1043) {}
    CollApplType(int data) : IntField(1043, data) {}
    
  };
  
  public __gc class UnderlyingAdjustedQuantity : public DoubleField
  {
  public:
  static const int FIELD = 1044;
  UnderlyingAdjustedQuantity() : DoubleField(1044) {}
    UnderlyingAdjustedQuantity(double data) : DoubleField(1044, data) {}
    UnderlyingAdjustedQuantity(double data, int decimalPadding) : DoubleField(1044, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingFXRate : public DoubleField
  {
  public:
  static const int FIELD = 1045;
  UnderlyingFXRate() : DoubleField(1045) {}
    UnderlyingFXRate(double data) : DoubleField(1045, data) {}
    UnderlyingFXRate(double data, int decimalPadding) : DoubleField(1045, data, decimalPadding) {}
    
  };
  
  public __gc class UnderlyingFXRateCalc : public CharField
  {
  public:
  static const int FIELD = 1046;
  static const __wchar_t MULTIPLY = 'M';
  static const __wchar_t DIVIDE = 'D';
  UnderlyingFXRateCalc() : CharField(1046) {}
    UnderlyingFXRateCalc(__wchar_t data) : CharField(1046, data) {}
    
  };
  
  public __gc class AllocPositionEffect : public CharField
  {
  public:
  static const int FIELD = 1047;
  static const __wchar_t OPEN = 'O';
  static const __wchar_t CLOSE = 'C';
  static const __wchar_t ROLLED = 'R';
  static const __wchar_t FIFO = 'F';
  AllocPositionEffect() : CharField(1047) {}
    AllocPositionEffect(__wchar_t data) : CharField(1047, data) {}
    
  };
  
  public __gc class DealingCapacity : public DoubleField
  {
  public:
  static const int FIELD = 1048;
  DealingCapacity() : DoubleField(1048) {}
    DealingCapacity(double data) : DoubleField(1048, data) {}
    DealingCapacity(double data, int decimalPadding) : DoubleField(1048, data, decimalPadding) {}
    
  };
  
  public __gc class InstrmtAssignmentMethod : public CharField
  {
  public:
  static const int FIELD = 1049;
  InstrmtAssignmentMethod() : CharField(1049) {}
    InstrmtAssignmentMethod(__wchar_t data) : CharField(1049, data) {}
    
  };
  
  public __gc class InstrumentPartyIDSource : public CharField
  {
  public:
  static const int FIELD = 1050;
  InstrumentPartyIDSource() : CharField(1050) {}
    InstrumentPartyIDSource(__wchar_t data) : CharField(1050, data) {}
    
  };
  
  public __gc class InstrumentPartyRole : public IntField
  {
  public:
  static const int FIELD = 1051;
  InstrumentPartyRole() : IntField(1051) {}
    InstrumentPartyRole(int data) : IntField(1051, data) {}
    
  };
  
  public __gc class NoInstrumentPartySubIDs : public IntField
  {
  public:
  static const int FIELD = 1052;
  NoInstrumentPartySubIDs() : IntField(1052) {}
    NoInstrumentPartySubIDs(int data) : IntField(1052, data) {}
    
  };
  
  public __gc class InstrumentPartySubID : public StringField
  {
  public:
  static const int FIELD = 1053;
  InstrumentPartySubID() : StringField(1053) {}
    InstrumentPartySubID(String* data) : StringField(1053, data) {}
    
  };
  
  public __gc class InstrumentPartySubIDType : public IntField
  {
  public:
  static const int FIELD = 1054;
  InstrumentPartySubIDType() : IntField(1054) {}
    InstrumentPartySubIDType(int data) : IntField(1054, data) {}
    
  };
  
  public __gc class PositionCurrency : public StringField
  {
  public:
  static const int FIELD = 1055;
  PositionCurrency() : StringField(1055) {}
    PositionCurrency(String* data) : StringField(1055, data) {}
    
  };
  
  public __gc class CalculatedCcyLastQty : public DoubleField
  {
  public:
  static const int FIELD = 1056;
  CalculatedCcyLastQty() : DoubleField(1056) {}
    CalculatedCcyLastQty(double data) : DoubleField(1056, data) {}
    CalculatedCcyLastQty(double data, int decimalPadding) : DoubleField(1056, data, decimalPadding) {}
    
  };
  
  public __gc class AggressorIndicator : public BooleanField
  {
  public:
  static const int FIELD = 1057;
  AggressorIndicator() : BooleanField(1057) {}
    AggressorIndicator(bool data) : BooleanField(1057, data) {}
    
  };
  
  public __gc class NoUndlyInstrumentParties : public IntField
  {
  public:
  static const int FIELD = 1058;
  NoUndlyInstrumentParties() : IntField(1058) {}
    NoUndlyInstrumentParties(int data) : IntField(1058, data) {}
    
  };
  
  public __gc class UndlyInstrumentPartyID : public StringField
  {
  public:
  static const int FIELD = 1059;
  UndlyInstrumentPartyID() : StringField(1059) {}
    UndlyInstrumentPartyID(String* data) : StringField(1059, data) {}
    
  };
  
  public __gc class UndlyInstrumentPartyIDSource : public CharField
  {
  public:
  static const int FIELD = 1060;
  UndlyInstrumentPartyIDSource() : CharField(1060) {}
    UndlyInstrumentPartyIDSource(__wchar_t data) : CharField(1060, data) {}
    
  };
  
  public __gc class UndlyInstrumentPartyRole : public IntField
  {
  public:
  static const int FIELD = 1061;
  UndlyInstrumentPartyRole() : IntField(1061) {}
    UndlyInstrumentPartyRole(int data) : IntField(1061, data) {}
    
  };
  
  public __gc class NoUndlyInstrumentPartySubIDs : public IntField
  {
  public:
  static const int FIELD = 1062;
  NoUndlyInstrumentPartySubIDs() : IntField(1062) {}
    NoUndlyInstrumentPartySubIDs(int data) : IntField(1062, data) {}
    
  };
  
  public __gc class UndlyInstrumentPartySubID : public StringField
  {
  public:
  static const int FIELD = 1063;
  UndlyInstrumentPartySubID() : StringField(1063) {}
    UndlyInstrumentPartySubID(String* data) : StringField(1063, data) {}
    
  };
  
  public __gc class UndlyInstrumentPartySubIDType : public IntField
  {
  public:
  static const int FIELD = 1064;
  UndlyInstrumentPartySubIDType() : IntField(1064) {}
    UndlyInstrumentPartySubIDType(int data) : IntField(1064, data) {}
    
  };
  
  public __gc class BidSwapPoints : public DoubleField
  {
  public:
  static const int FIELD = 1065;
  BidSwapPoints() : DoubleField(1065) {}
    BidSwapPoints(double data) : DoubleField(1065, data) {}
    BidSwapPoints(double data, int decimalPadding) : DoubleField(1065, data, decimalPadding) {}
    
  };
  
  public __gc class OfferSwapPoints : public DoubleField
  {
  public:
  static const int FIELD = 1066;
  OfferSwapPoints() : DoubleField(1066) {}
    OfferSwapPoints(double data) : DoubleField(1066, data) {}
    OfferSwapPoints(double data, int decimalPadding) : DoubleField(1066, data, decimalPadding) {}
    
  };
  
  public __gc class LegBidForwardPoints : public DoubleField
  {
  public:
  static const int FIELD = 1067;
  LegBidForwardPoints() : DoubleField(1067) {}
    LegBidForwardPoints(double data) : DoubleField(1067, data) {}
    LegBidForwardPoints(double data, int decimalPadding) : DoubleField(1067, data, decimalPadding) {}
    
  };
  
  public __gc class LegOfferForwardPoints : public DoubleField
  {
  public:
  static const int FIELD = 1068;
  LegOfferForwardPoints() : DoubleField(1068) {}
    LegOfferForwardPoints(double data) : DoubleField(1068, data) {}
    LegOfferForwardPoints(double data, int decimalPadding) : DoubleField(1068, data, decimalPadding) {}
    
  };
  
  public __gc class SwapPoints : public DoubleField
  {
  public:
  static const int FIELD = 1069;
  SwapPoints() : DoubleField(1069) {}
    SwapPoints(double data) : DoubleField(1069, data) {}
    SwapPoints(double data, int decimalPadding) : DoubleField(1069, data, decimalPadding) {}
    
  };
  
  public __gc class MDQuoteType : public IntField
  {
  public:
  static const int FIELD = 1070;
  static const int INDICATIVE = 0;
  static const int TRADEABLE = 1;
  static const int RESTRICTED_TRADEABLE = 2;
  static const int COUNTER = 3;
  static const int INDICATIVE_AND_TRADEABLE = 4;
  MDQuoteType() : IntField(1070) {}
    MDQuoteType(int data) : IntField(1070, data) {}
    
  };
  
  public __gc class LastSwapPoints : public DoubleField
  {
  public:
  static const int FIELD = 1071;
  LastSwapPoints() : DoubleField(1071) {}
    LastSwapPoints(double data) : DoubleField(1071, data) {}
    LastSwapPoints(double data, int decimalPadding) : DoubleField(1071, data, decimalPadding) {}
    
  };
  
  public __gc class SideGrossTradeAmt : public DoubleField
  {
  public:
  static const int FIELD = 1072;
  SideGrossTradeAmt() : DoubleField(1072) {}
    SideGrossTradeAmt(double data) : DoubleField(1072, data) {}
    SideGrossTradeAmt(double data, int decimalPadding) : DoubleField(1072, data, decimalPadding) {}
    
  };
  
  public __gc class LegLastForwardPoints : public DoubleField
  {
  public:
  static const int FIELD = 1073;
  LegLastForwardPoints() : DoubleField(1073) {}
    LegLastForwardPoints(double data) : DoubleField(1073, data) {}
    LegLastForwardPoints(double data, int decimalPadding) : DoubleField(1073, data, decimalPadding) {}
    
  };
  
  public __gc class LegCalculatedCcyLastQty : public DoubleField
  {
  public:
  static const int FIELD = 1074;
  LegCalculatedCcyLastQty() : DoubleField(1074) {}
    LegCalculatedCcyLastQty(double data) : DoubleField(1074, data) {}
    LegCalculatedCcyLastQty(double data, int decimalPadding) : DoubleField(1074, data, decimalPadding) {}
    
  };
  
  public __gc class LegGrossTradeAmt : public DoubleField
  {
  public:
  static const int FIELD = 1075;
  LegGrossTradeAmt() : DoubleField(1075) {}
    LegGrossTradeAmt(double data) : DoubleField(1075, data) {}
    LegGrossTradeAmt(double data, int decimalPadding) : DoubleField(1075, data, decimalPadding) {}
    
  };
  
  public __gc class MaturityTime : public StringField
  {
  public:
  static const int FIELD = 1079;
  MaturityTime() : StringField(1079) {}
    MaturityTime(String* data) : StringField(1079, data) {}
    
  };
  
  public __gc class RefOrderID : public StringField
  {
  public:
  static const int FIELD = 1080;
  RefOrderID() : StringField(1080) {}
    RefOrderID(String* data) : StringField(1080, data) {}
    
  };
  
  public __gc class RefOrderIDSource : public CharField
  {
  public:
  static const int FIELD = 1081;
  static const __wchar_t SECONDARYORDEID = '0';
  static const __wchar_t ORDEID = '1';
  static const __wchar_t MENTRYID = '2';
  static const __wchar_t QUOTENTRYID = '3';
  RefOrderIDSource() : CharField(1081) {}
    RefOrderIDSource(__wchar_t data) : CharField(1081, data) {}
    
  };
  
  public __gc class SecondaryDisplayQty : public DoubleField
  {
  public:
  static const int FIELD = 1082;
  SecondaryDisplayQty() : DoubleField(1082) {}
    SecondaryDisplayQty(double data) : DoubleField(1082, data) {}
    SecondaryDisplayQty(double data, int decimalPadding) : DoubleField(1082, data, decimalPadding) {}
    
  };
  
  public __gc class DisplayWhen : public CharField
  {
  public:
  static const int FIELD = 1083;
  static const __wchar_t IMMEDIATE = '1';
  static const __wchar_t EXHAUST = '2';
  DisplayWhen() : CharField(1083) {}
    DisplayWhen(__wchar_t data) : CharField(1083, data) {}
    
  };
  
  public __gc class DisplayMethod : public CharField
  {
  public:
  static const int FIELD = 1084;
  static const __wchar_t INITIAL = '1';
  static const __wchar_t NEW = '2';
  static const __wchar_t RANDOM = '3';
  DisplayMethod() : CharField(1084) {}
    DisplayMethod(__wchar_t data) : CharField(1084, data) {}
    
  };
  
  public __gc class DisplayLowQty : public DoubleField
  {
  public:
  static const int FIELD = 1085;
  DisplayLowQty() : DoubleField(1085) {}
    DisplayLowQty(double data) : DoubleField(1085, data) {}
    DisplayLowQty(double data, int decimalPadding) : DoubleField(1085, data, decimalPadding) {}
    
  };
  
  public __gc class DisplayHighQty : public DoubleField
  {
  public:
  static const int FIELD = 1086;
  DisplayHighQty() : DoubleField(1086) {}
    DisplayHighQty(double data) : DoubleField(1086, data) {}
    DisplayHighQty(double data, int decimalPadding) : DoubleField(1086, data, decimalPadding) {}
    
  };
  
  public __gc class DisplayMinIncr : public DoubleField
  {
  public:
  static const int FIELD = 1087;
  DisplayMinIncr() : DoubleField(1087) {}
    DisplayMinIncr(double data) : DoubleField(1087, data) {}
    DisplayMinIncr(double data, int decimalPadding) : DoubleField(1087, data, decimalPadding) {}
    
  };
  
  public __gc class RefreshQty : public DoubleField
  {
  public:
  static const int FIELD = 1088;
  RefreshQty() : DoubleField(1088) {}
    RefreshQty(double data) : DoubleField(1088, data) {}
    RefreshQty(double data, int decimalPadding) : DoubleField(1088, data, decimalPadding) {}
    
  };
  
  public __gc class MatchIncrement : public DoubleField
  {
  public:
  static const int FIELD = 1089;
  MatchIncrement() : DoubleField(1089) {}
    MatchIncrement(double data) : DoubleField(1089, data) {}
    MatchIncrement(double data, int decimalPadding) : DoubleField(1089, data, decimalPadding) {}
    
  };
  
  public __gc class MaxPriceLevels : public IntField
  {
  public:
  static const int FIELD = 1090;
  MaxPriceLevels() : IntField(1090) {}
    MaxPriceLevels(int data) : IntField(1090, data) {}
    
  };
  
  public __gc class PreTradeAnonymity : public BooleanField
  {
  public:
  static const int FIELD = 1091;
  PreTradeAnonymity() : BooleanField(1091) {}
    PreTradeAnonymity(bool data) : BooleanField(1091, data) {}
    
  };
  
  public __gc class PriceProtectionScope : public CharField
  {
  public:
  static const int FIELD = 1092;
  static const __wchar_t NONE = '0';
  static const __wchar_t LOCAL = '1';
  static const __wchar_t NATIONAL = '2';
  static const __wchar_t GLOBAL = '3';
  PriceProtectionScope() : CharField(1092) {}
    PriceProtectionScope(__wchar_t data) : CharField(1092, data) {}
    
  };
  
  public __gc class LotType : public CharField
  {
  public:
  static const int FIELD = 1093;
  static const __wchar_t ODD_LOT = '1';
  static const __wchar_t ROUND_LOT = '2';
  static const __wchar_t BLOCK_LOT = '3';
  LotType() : CharField(1093) {}
    LotType(__wchar_t data) : CharField(1093, data) {}
    
  };
  
  public __gc class PegPriceType : public IntField
  {
  public:
  static const int FIELD = 1094;
  static const int LAST_PEG = 1;
  static const int MID_PRICE_PEG = 2;
  static const int OPENING_PEG = 3;
  static const int MARKET_PEG = 4;
  static const int PRIMARY_PEG = 5;
  static const int FIXED_PEG_TO_LOCAL_BEST_BID_OR_OFFER_AT_TIME_OF_ORDER = 6;
  static const int PEG_TO_VWAP = 7;
  static const int TRAILING_STOP_PEG = 8;
  static const int PEG_TO_LIMIT_PRICE = 9;
  PegPriceType() : IntField(1094) {}
    PegPriceType(int data) : IntField(1094, data) {}
    
  };
  
  public __gc class PeggedRefPrice : public DoubleField
  {
  public:
  static const int FIELD = 1095;
  PeggedRefPrice() : DoubleField(1095) {}
    PeggedRefPrice(double data) : DoubleField(1095, data) {}
    PeggedRefPrice(double data, int decimalPadding) : DoubleField(1095, data, decimalPadding) {}
    
  };
  
  public __gc class PegSecurityIDSource : public StringField
  {
  public:
  static const int FIELD = 1096;
  PegSecurityIDSource() : StringField(1096) {}
    PegSecurityIDSource(String* data) : StringField(1096, data) {}
    
  };
  
  public __gc class PegSecurityID : public StringField
  {
  public:
  static const int FIELD = 1097;
  PegSecurityID() : StringField(1097) {}
    PegSecurityID(String* data) : StringField(1097, data) {}
    
  };
  
  public __gc class PegSymbol : public StringField
  {
  public:
  static const int FIELD = 1098;
  PegSymbol() : StringField(1098) {}
    PegSymbol(String* data) : StringField(1098, data) {}
    
  };
  
  public __gc class PegSecurityDesc : public StringField
  {
  public:
  static const int FIELD = 1099;
  PegSecurityDesc() : StringField(1099) {}
    PegSecurityDesc(String* data) : StringField(1099, data) {}
    
  };
  
  public __gc class TriggerType : public CharField
  {
  public:
  static const int FIELD = 1100;
  static const __wchar_t PARTIAL_EXECUTION = '1';
  static const __wchar_t SPECIFIED_TRADING_SESSION = '2';
  static const __wchar_t NEXT_AUCTION = '3';
  static const __wchar_t PRICE_MOVEMENT = '4';
  TriggerType() : CharField(1100) {}
    TriggerType(__wchar_t data) : CharField(1100, data) {}
    
  };
  
  public __gc class TriggerAction : public CharField
  {
  public:
  static const int FIELD = 1101;
  static const __wchar_t ACTIVATE = '1';
  static const __wchar_t MODIFY = '2';
  static const __wchar_t CANCEL = '3';
  TriggerAction() : CharField(1101) {}
    TriggerAction(__wchar_t data) : CharField(1101, data) {}
    
  };
  
  public __gc class TriggerPrice : public DoubleField
  {
  public:
  static const int FIELD = 1102;
  TriggerPrice() : DoubleField(1102) {}
    TriggerPrice(double data) : DoubleField(1102, data) {}
    TriggerPrice(double data, int decimalPadding) : DoubleField(1102, data, decimalPadding) {}
    
  };
  
  public __gc class TriggerSymbol : public StringField
  {
  public:
  static const int FIELD = 1103;
  TriggerSymbol() : StringField(1103) {}
    TriggerSymbol(String* data) : StringField(1103, data) {}
    
  };
  
  public __gc class TriggerSecurityID : public StringField
  {
  public:
  static const int FIELD = 1104;
  TriggerSecurityID() : StringField(1104) {}
    TriggerSecurityID(String* data) : StringField(1104, data) {}
    
  };
  
  public __gc class TriggerSecurityIDSource : public StringField
  {
  public:
  static const int FIELD = 1105;
  TriggerSecurityIDSource() : StringField(1105) {}
    TriggerSecurityIDSource(String* data) : StringField(1105, data) {}
    
  };
  
  public __gc class TriggerSecurityDesc : public StringField
  {
  public:
  static const int FIELD = 1106;
  TriggerSecurityDesc() : StringField(1106) {}
    TriggerSecurityDesc(String* data) : StringField(1106, data) {}
    
  };
  
  public __gc class TriggerPriceType : public CharField
  {
  public:
  static const int FIELD = 1107;
  static const __wchar_t BEST_OFFER = '1';
  static const __wchar_t LAST_TRADE = '2';
  static const __wchar_t BEST_BID = '3';
  static const __wchar_t BEST_BID_OR_LAST_TRADE = '4';
  static const __wchar_t BEST_OFFER_OR_LAST_TRADE = '5';
  static const __wchar_t BEST_MID = '6';
  TriggerPriceType() : CharField(1107) {}
    TriggerPriceType(__wchar_t data) : CharField(1107, data) {}
    
  };
  
  public __gc class TriggerPriceTypeScope : public CharField
  {
  public:
  static const int FIELD = 1108;
  static const __wchar_t NONE = '0';
  static const __wchar_t LOCAL = '1';
  static const __wchar_t NATIONAL = '2';
  static const __wchar_t GLOBAL = '3';
  TriggerPriceTypeScope() : CharField(1108) {}
    TriggerPriceTypeScope(__wchar_t data) : CharField(1108, data) {}
    
  };
  
  public __gc class TriggerPriceDirection : public CharField
  {
  public:
  static const int FIELD = 1109;
  static const __wchar_t TRIGGER_IF_THE_PRICE_OF_THE_SPECIFIED_TYPE_GOES_UP_TO_OR_THROUGH_THE_SPECIFIED_TRIGGER_PRICE = 'U';
  static const __wchar_t TRIGGER_IF_THE_PRICE_OF_THE_SPECIFIED_TYPE_GOES_DOWN_TO_OR_THROUGH_THE_SPECIFIED_TRIGGER_PRICE = 'D';
  TriggerPriceDirection() : CharField(1109) {}
    TriggerPriceDirection(__wchar_t data) : CharField(1109, data) {}
    
  };
  
  public __gc class TriggerNewPrice : public DoubleField
  {
  public:
  static const int FIELD = 1110;
  TriggerNewPrice() : DoubleField(1110) {}
    TriggerNewPrice(double data) : DoubleField(1110, data) {}
    TriggerNewPrice(double data, int decimalPadding) : DoubleField(1110, data, decimalPadding) {}
    
  };
  
  public __gc class TriggerOrderType : public CharField
  {
  public:
  static const int FIELD = 1111;
  static const __wchar_t MARKET = '1';
  static const __wchar_t LIMIT = '2';
  TriggerOrderType() : CharField(1111) {}
    TriggerOrderType(__wchar_t data) : CharField(1111, data) {}
    
  };
  
  public __gc class TriggerNewQty : public DoubleField
  {
  public:
  static const int FIELD = 1112;
  TriggerNewQty() : DoubleField(1112) {}
    TriggerNewQty(double data) : DoubleField(1112, data) {}
    TriggerNewQty(double data, int decimalPadding) : DoubleField(1112, data, decimalPadding) {}
    
  };
  
  public __gc class TriggerTradingSessionID : public StringField
  {
  public:
  static const int FIELD = 1113;
  TriggerTradingSessionID() : StringField(1113) {}
    TriggerTradingSessionID(String* data) : StringField(1113, data) {}
    
  };
  
  public __gc class TriggerTradingSessionSubID : public StringField
  {
  public:
  static const int FIELD = 1114;
  TriggerTradingSessionSubID() : StringField(1114) {}
    TriggerTradingSessionSubID(String* data) : StringField(1114, data) {}
    
  };
  
  public __gc class OrderCategory : public CharField
  {
  public:
  static const int FIELD = 1115;
  static const __wchar_t ORDER = '1';
  static const __wchar_t QUOTE = '2';
  static const __wchar_t PRIVATELY_NEGOTIATED_TRADE = '3';
  static const __wchar_t MULTILEG_ORDER = '4';
  static const __wchar_t LINKED_ORDER = '5';
  static const __wchar_t QUOTE_REQUEST = '6';
  static const __wchar_t IMPLIED_ORDER = '7';
  static const __wchar_t CROSS_ORDER = '8';
  OrderCategory() : CharField(1115) {}
    OrderCategory(__wchar_t data) : CharField(1115, data) {}
    
  };
  
  public __gc class NoRootPartyIDs : public IntField
  {
  public:
  static const int FIELD = 1116;
  NoRootPartyIDs() : IntField(1116) {}
    NoRootPartyIDs(int data) : IntField(1116, data) {}
    
  };
  
  public __gc class RootPartyID : public StringField
  {
  public:
  static const int FIELD = 1117;
  RootPartyID() : StringField(1117) {}
    RootPartyID(String* data) : StringField(1117, data) {}
    
  };
  
  public __gc class RootPartyIDSource : public CharField
  {
  public:
  static const int FIELD = 1118;
  RootPartyIDSource() : CharField(1118) {}
    RootPartyIDSource(__wchar_t data) : CharField(1118, data) {}
    
  };
  
  public __gc class RootPartyRole : public IntField
  {
  public:
  static const int FIELD = 1119;
  RootPartyRole() : IntField(1119) {}
    RootPartyRole(int data) : IntField(1119, data) {}
    
  };
  
  public __gc class NoRootPartySubIDs : public IntField
  {
  public:
  static const int FIELD = 1120;
  NoRootPartySubIDs() : IntField(1120) {}
    NoRootPartySubIDs(int data) : IntField(1120, data) {}
    
  };
  
  public __gc class RootPartySubID : public StringField
  {
  public:
  static const int FIELD = 1121;
  RootPartySubID() : StringField(1121) {}
    RootPartySubID(String* data) : StringField(1121, data) {}
    
  };
  
  public __gc class RootPartySubIDType : public IntField
  {
  public:
  static const int FIELD = 1122;
  RootPartySubIDType() : IntField(1122) {}
    RootPartySubIDType(int data) : IntField(1122, data) {}
    
  };
  
  public __gc class TradeHandlingInstr : public CharField
  {
  public:
  static const int FIELD = 1123;
  static const __wchar_t TRADE_CONFIRMATION = '0';
  static const __wchar_t TWO_PARTY_REPORT = '1';
  static const __wchar_t ONE_PARTY_REPORT_FOR_MATCHING = '2';
  static const __wchar_t ONE_PARTY_REPORT_FOR_PASS_THROUGH = '3';
  static const __wchar_t AUTOMATED_FLOOR_ORDER_ROUTING = '4';
  TradeHandlingInstr() : CharField(1123) {}
    TradeHandlingInstr(__wchar_t data) : CharField(1123, data) {}
    
  };
  
  public __gc class OrigTradeHandlingInstr : public CharField
  {
  public:
  static const int FIELD = 1124;
  OrigTradeHandlingInstr() : CharField(1124) {}
    OrigTradeHandlingInstr(__wchar_t data) : CharField(1124, data) {}
    
  };
  
  public __gc class OrigTradeDate : public StringField
  {
  public:
  static const int FIELD = 1125;
  OrigTradeDate() : StringField(1125) {}
    OrigTradeDate(String* data) : StringField(1125, data) {}
    
  };
  
  public __gc class OrigTradeID : public StringField
  {
  public:
  static const int FIELD = 1126;
  OrigTradeID() : StringField(1126) {}
    OrigTradeID(String* data) : StringField(1126, data) {}
    
  };
  
  public __gc class OrigSecondaryTradeID : public StringField
  {
  public:
  static const int FIELD = 1127;
  OrigSecondaryTradeID() : StringField(1127) {}
    OrigSecondaryTradeID(String* data) : StringField(1127, data) {}
    
  };
  
  public __gc class TZTransactTime : public StringField
  {
  public:
  static const int FIELD = 1132;
  TZTransactTime() : StringField(1132) {}
    TZTransactTime(String* data) : StringField(1132, data) {}
    
  };
  
  public __gc class ExDestinationIDSource : public CharField
  {
  public:
  static const int FIELD = 1133;
  static const __wchar_t BIC = 'B';
  static const __wchar_t GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER = 'C';
  static const __wchar_t PROPRIETARY = 'D';
  static const __wchar_t ISO_COUNTRY_CODE = 'E';
  static const __wchar_t MIC = 'G';
  ExDestinationIDSource() : CharField(1133) {}
    ExDestinationIDSource(__wchar_t data) : CharField(1133, data) {}
    
  };
  
  public __gc class ReportedPxDiff : public BooleanField
  {
  public:
  static const int FIELD = 1134;
  ReportedPxDiff() : BooleanField(1134) {}
    ReportedPxDiff(bool data) : BooleanField(1134, data) {}
    
  };
  
  public __gc class RptSys : public StringField
  {
  public:
  static const int FIELD = 1135;
  RptSys() : StringField(1135) {}
    RptSys(String* data) : StringField(1135, data) {}
    
  };
  
  public __gc class AllocClearingFeeIndicator : public StringField
  {
  public:
  static const int FIELD = 1136;
  AllocClearingFeeIndicator() : StringField(1136) {}
    AllocClearingFeeIndicator(String* data) : StringField(1136, data) {}
    
  };
  
  public __gc class DisplayQty : public DoubleField
  {
  public:
  static const int FIELD = 1138;
  DisplayQty() : DoubleField(1138) {}
    DisplayQty(double data) : DoubleField(1138, data) {}
    DisplayQty(double data, int decimalPadding) : DoubleField(1138, data, decimalPadding) {}
    
  };
  
  public __gc class ExchangeSpecialInstructions : public StringField
  {
  public:
  static const int FIELD = 1139;
  ExchangeSpecialInstructions() : StringField(1139) {}
    ExchangeSpecialInstructions(String* data) : StringField(1139, data) {}
    
  };
  
}

 