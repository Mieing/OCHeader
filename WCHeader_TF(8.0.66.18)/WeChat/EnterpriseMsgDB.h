@class NSRecursiveLock, NSString, WCTDatabase, NSMutableSet;

@interface EnterpriseMsgDB : MMObject {
    WCTDatabase *_db;
    NSMutableSet *_setCreatedTable;
    NSRecursiveLock *_lock;
    NSString *_path;
}

- (id)initWithPath:(id)a0;
- (BOOL)runTransaction:(id /* block */)a0;
- (void)dealloc;
- (void)closeDB;
- (id)getChatTableName:(id)a0;
- (id)getChatTable:(id)a0;
- (BOOL)createTable:(id)a0;
- (void)dropTable:(id)a0;
- (void)setupCreatedTableCache;
- (BOOL)isTableCreated:(id)a0;
- (void)addCreatedTableCache:(id)a0;
- (void)removeCreatedTableCache:(id)a0;
- (void)clearCreatedTableCache;
- (BOOL)addMsg:(id)a0 MsgWrap:(id)a1;
- (id)GetMsg:(id)a0 cliMsgId:(id)a1;
- (id)GetMsg:(id)a0 uiLocalID:(unsigned int)a1;
- (id)GetMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2;
- (id)GetMsgByCreateTime:(id)a0 FromID:(unsigned int)a1 FromCreateTime:(unsigned int)a2 Limit:(int)a3 LeftCount:(unsigned int *)a4;
- (id)GetDownMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2;
- (id)GetLastMsg:(id)a0;
- (unsigned int)GetLastMsgCreateTime:(id)a0;
- (id)GetFirstUnreadMsg:(id)a0;
- (unsigned int)GetUnReadCountInChat:(id)a0;
- (unsigned int)GetUnReadCountInChat:(id)a0 Since:(unsigned int)a1;
- (BOOL)ClearUnRead:(id)a0 FromID:(unsigned int)a1 ToID:(unsigned int)a2;
- (BOOL)ClearUnReadForSync:(id)a0;
- (BOOL)MergeImgStatus:(id)a0 LocalID:(unsigned int)a1 ImgStatus:(unsigned int)a2;
- (BOOL)MergeImgStatus:(id)a0 LocalID:(unsigned int)a1 ImgStatus:(unsigned int)a2 MsgStatus:(unsigned int)a3;
- (BOOL)ModMsgStatus:(id)a0 LocalID:(unsigned int)a1 MsgStatus:(unsigned int)a2;
- (BOOL)ModMsgStatus:(id)a0 LocalId:(unsigned int)a1 MsgStatus:(unsigned int)a2 SvrId:(unsigned long long)a3;
- (BOOL)ModMsgByBitSet:(id)a0 MsgWrap:(id)a1 BitSet:(unsigned int)a2;
- (void)DelMsg:(id)a0 MsgList:(id)a1 DelAll:(BOOL)a2;
- (void)deleteDB;
- (unsigned int)GetImgOrVideoOrAppMsgMinCreateTime:(id)a0;
- (id)GetImgOrVideoOrAppLastMsg:(id)a0 FromID:(unsigned int)a1 CreateTime:(unsigned int)a2 Limit:(int)a3;
- (id)GetImgOrVideoOrAppNextMsg:(id)a0 FromID:(unsigned int)a1 CreateTime:(unsigned int)a2 Limit:(int)a3;
- (id)GetImgOrVideoOrAppLastMsg:(id)a0 StartCreateTime:(unsigned int)a1 EndCreateTime:(unsigned int)a2 Limit:(int)a3;
- (id)GetImgOrVideoOrAppNextMsg:(id)a0 StartCreateTime:(unsigned int)a1 EndCreateTime:(unsigned int)a2 Limit:(int)a3;
- (id)internalGetMsgDBItem:(id)a0 uiLocalID:(unsigned int)a1;
- (void)clearFileOfMsg:(id)a0;
- (void).cxx_destruct;

@end
