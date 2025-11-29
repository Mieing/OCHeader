@class WCTDatabase;

@interface WXGMigrationMsgItemDB : NSObject

@property (retain, nonatomic) WCTDatabase *msgItemDB;

- (void)dealloc;
- (void)closeDB;
- (void)removeDBFile;
- (void)insertDataWithMsgIDObject:(id)a0;
- (id)getAllMsgListIDFromMsgIDTable;
- (BOOL)deleteMsgListArrayFormMsgIDTable:(id)a0;
- (void)insertDataWithTagObject:(id)a0;
- (void)insertDataWithMigrationObject:(id)a0;
- (long long)getLastEndTimeOfSession:(id)a0;
- (BOOL)isMigrationTableNotEmpty;
- (id)getAllTagObject;
- (id)getAllSessionName;
- (id)getMsgListIDForSessionName:(id)a0;
- (BOOL)deleteTagObjectByMsgID:(id)a0;
- (id)p_getMsgItemTable;
- (id)p_getTagTable;
- (id)p_getMigrationTable;
- (void).cxx_destruct;

@end
