@class WCTDatabase, WCTTable;

@interface BrandConvMassSendStorage : NSObject

@property (retain, nonatomic) WCTDatabase *db;
@property (retain, nonatomic) WCTTable *configTable;
@property (nonatomic) unsigned int recordStartTime;

- (void)openDB;
- (void)closeDB;
- (id)getMsgLocalIds:(id)a0 fromID:(unsigned int)a1 fromCreateTime:(unsigned int)a2 toCreateTime:(unsigned int)a3 hideMassSendTypes:(id)a4 limit:(int)a5 leftCount:(unsigned int *)a6;
- (id)getMsg:(id)a0 fromID:(unsigned int)a1 fromCreateTime:(unsigned int)a2 toCreateTime:(unsigned int)a3 hideMassSendTypes:(id)a4 limit:(int)a5 leftCount:(unsigned int *)a6;
- (id)getFirstMsgInfo:(id)a0 fromCreateTime:(unsigned int)a1;
- (id)getDownMsgLocalIds:(id)a0 fromID:(unsigned int)a1 fromCreateTime:(unsigned int)a2 hideMassSendTypes:(id)a3 limit:(int)a4 leftCount:(unsigned int *)a5;
- (id)getDownMsg:(id)a0 fromID:(unsigned int)a1 fromCreateTime:(unsigned int)a2 hideMassSendTypes:(id)a3 limit:(int)a4 leftCount:(unsigned int *)a5;
- (BOOL)addMsg:(id)a0 MsgWrap:(id)a1;
- (BOOL)delMsg:(id)a0 MsgWrap:(id)a1;
- (BOOL)delAllMsg:(id)a0;
- (id)dbPath;
- (id)tableName:(id)a0;
- (BOOL)createTable:(id)a0;
- (id)getTable:(id)a0;
- (const void *)orderOfDescCreateTimeAndMsgLocalId;
- (const void *)orderOfAscCreateTimeAndMsgLocalId;
- (id)getMsg:(id)a0 where:(const void *)a1 order:(const void *)a2 limit:(int)a3;
- (void)filterMsgList:(id)a0 LeftCount:(unsigned int *)a1;
- (void)filterDownMsgList:(id)a0 limit:(int)a1 leftCount:(unsigned int *)a2;
- (void)createTables;
- (void)queryOrMarkRecordStartTime;
- (void).cxx_destruct;

@end
