@class WCTDatabase, NSString, WCTTable;

@interface MMFlutterUpdateDB : MMUserService <MMServiceProtocol>

@property (retain) WCTDatabase *db;
@property (retain) WCTTable *tableFlutterUpdateInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getInfoById:(id)a0;
- (BOOL)updateInfo:(id)a0;
- (void)openDB;
- (void)closeDB;
- (void)setupTable;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (id)dbPath;
- (void)willRecoverDatabase;
- (void).cxx_destruct;

@end
