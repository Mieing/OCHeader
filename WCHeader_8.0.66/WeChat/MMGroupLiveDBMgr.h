@class WCTDatabase, NSString, WCTTable;

@interface MMGroupLiveDBMgr : MMUserService <MMServiceProtocol>

@property (retain) WCTDatabase *db;
@property (retain) WCTTable *tableLiveInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getLiveInfoItemsWithRoomId:(id)a0 status:(unsigned int)a1 maxTimeId:(unsigned long long)a2 limit:(unsigned int)a3;
- (id)getLiveInfoItemsWithAnchor:(id)a0 status:(unsigned int)a1 maxTimeId:(unsigned long long)a2 limit:(unsigned int)a3;
- (id)getLiveInfoItemByLiveId:(unsigned long long)a0;
- (id)getLiveInfoItemsByLiveIdList:(id)a0;
- (BOOL)insertLiveInfoDBItem:(id)a0;
- (BOOL)insertOrUpdateLiveInfoDBItem:(id)a0;
- (BOOL)deleteLiveInfoItemByLiveId:(unsigned long long)a0;
- (BOOL)deleteLiveInfoItemsByRoomId:(id)a0;
- (BOOL)updateLiveInfoItemByLiveId:(unsigned long long)a0 status:(unsigned int)a1;
- (BOOL)updateLiveInfoItemByLiveId:(unsigned long long)a0 barStatus:(unsigned int)a1;
- (BOOL)updateLiveInfoItemByRoomId:(id)a0 barStatus:(unsigned int)a1;
- (BOOL)updateLiveInfoItemByLiveId:(unsigned long long)a0 enableLiveReplay:(BOOL)a1;
- (void)openDB;
- (void)setupTable;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void)closeDB;
- (id)dbPath;
- (void)willRecoverDatabase;
- (void).cxx_destruct;

@end
