@class WCTDatabase, NSString;

@interface WXGBackupIndexDB : NSObject

@property (retain, nonatomic) WCTDatabase *indexDB;
@property (nonatomic) unsigned long long indexCount;
@property (nonatomic) unsigned long long indexFailedCount;
@property (nonatomic) unsigned long long recoverInfoCount;
@property (nonatomic) unsigned long long recoverInfoFailedCount;
@property (copy, nonatomic) NSString *indexDBPath;

- (id)init;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void)closeDB;
- (void)removeDBFile;
- (void)insertIndexObject:(id)a0;
- (void)insertMigrationObject:(id)a0;
- (long long)getLastTimeOfSession:(id)a0;
- (id)getMsgListIDForSession:(id)a0;
- (BOOL)deleteIndexObjectByMsgID:(id)a0;
- (id)getAllSessionName;
- (void)insertRecoverInfo:(id)a0;
- (id)getRecoverInfoOfSession:(id)a0;
- (unsigned long long)getTotalSessionCount;
- (id)p_getMsgListTable;
- (id)p_getMigrationTable;
- (id)p_getRecoverInfoTable;
- (BOOL)runTransaction:(id /* block */)a0;
- (void).cxx_destruct;

@end
