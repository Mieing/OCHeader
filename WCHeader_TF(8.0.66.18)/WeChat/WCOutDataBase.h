@class WCTDatabase, WCTTable;

@interface WCOutDataBase : MMObject {
    WCTDatabase *_dbBase;
    WCTTable *_recentCallTable;
    WCTTable *_weChatOutMsgTable;
}

- (id)init;
- (int)insertCall:(id)a0;
- (id)selectRecentCallForPhoneNum:(id)a0 withCountryCode:(id)a1 limit:(int)a2;
- (id)dicFromCountryCodeToCount;
- (id)compositeForLastCallItemsAndCountryCodeUseCountDic;
- (BOOL)deleteRecentCallById:(int)a0;
- (BOOL)deleteRecentCallByPhoneNum:(id)a0 withCountryCode:(id)a1;
- (BOOL)insertOrUpdateWcoMsg:(id)a0;
- (id)getWeChatOutMsgBeginLocalID:(unsigned int)a0 limit:(int)a1;
- (void).cxx_destruct;

@end
