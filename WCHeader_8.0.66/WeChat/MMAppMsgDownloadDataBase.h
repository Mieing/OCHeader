@class WCTDatabase, WCTTable;

@interface MMAppMsgDownloadDataBase : MMObject

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *downloadfileTable;

- (id)init;
- (void)reloadDatabase;
- (void)createTables;
- (void)dealloc;
- (BOOL)tryCleanData;
- (id)createTableWithName:(id)a0 objectClass:(Class)a1;
- (BOOL)updateAMDItemInDB:(id)a0;
- (BOOL)deleteAMDItemInDB:(id)a0;
- (id)getAMDItemInDB:(id)a0;
- (id)getAMDItemInDBFromSvrId:(long long)a0;
- (id)MMAppMsgDownloadRootDir;
- (id)MMAppMsgDownloadDBPath;
- (void).cxx_destruct;

@end
