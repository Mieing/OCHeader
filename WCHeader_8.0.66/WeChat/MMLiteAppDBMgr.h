@class WCTDatabase, NSString, WCTTable;

@interface MMLiteAppDBMgr : MMUserService <MMServiceProtocol>

@property (retain) WCTDatabase *db;
@property (retain, nonatomic) WCTTable *tableLiteAppInfo;
@property (retain, nonatomic) WCTTable *tableLiteAppAuthInfo;
@property (retain, nonatomic) WCTTable *tableLiteAppBaseLibInfo;
@property (retain, nonatomic) WCTTable *tableIlinkCheckResourceInfo;
@property (retain, nonatomic) WCTTable *tableLiteAppConfigInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getLiteAppInfoItemByAppId:(id)a0 forOpen:(BOOL)a1;
- (id)getLiteAppInfoItemByAppId:(id)a0 forOpen:(BOOL)a1 reporter:(id)a2;
- (BOOL)deleteLiteAppInfoItemByAppId:(id)a0;
- (BOOL)insertLiteAppInfoDBItme:(id)a0;
- (id)getLiteAppList;
- (BOOL)insertLiteAppAuthInfoDBItem:(id)a0;
- (id)getLiteAppAuthInfoItemByUrl:(id)a0;
- (BOOL)insertLiteAppBaseLibInfo:(id)a0;
- (id)getLiteAppBaseLibList;
- (id)getLatestLiteAppBaseLibInfo;
- (id)getLiteAppBundleBaseLibInfo;
- (id)getLiteAppBaseLibInfo:(id)a0;
- (BOOL)deleteLiteAppBaseLibInfo:(id)a0;
- (id)getIlinkCheckResourceInfo:(id)a0 resourceName:(id)a1 resourceVersion:(unsigned long long)a2;
- (BOOL)deleteIlinkCheckResourceInfo:(id)a0 resourceName:(id)a1 resourceVersion:(unsigned long long)a2;
- (BOOL)insertIlinkCheckResourceInfo:(id)a0;
- (id)getIlinkCheckResourceInfoList:(id)a0;
- (id)getIlinkCheckResourceInfoList;
- (BOOL)insertLiteAppConfigInfo:(id)a0;
- (id)getLiteAppConfigInfo:(id)a0;
- (id)getLiteAppGlobalConfigInfo;
- (id)getLiteAppEngineConfigInfo;
- (id)getLiteAppConfigInfoList;
- (BOOL)deleteLiteAppConfigInfo:(id)a0;
- (void)openDB;
- (void)closeDB;
- (void)setupTable;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (id)dbPath;
- (void)willRecoverDatabase;
- (void).cxx_destruct;

@end
