@class WCTDatabase, NSString, WCTTable;

@interface MMFinderLiveRewardDBMgr : MMUserService <MMServiceProtocol>

@property (retain) WCTDatabase *db;
@property (retain) WCTTable *tableLiveRewardGift;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getLiveRewardGiftItemsWithLimit:(unsigned int)a0;
- (id)getLiveRewardGiftItemByProductId:(id)a0;
- (BOOL)insertOrUpdateLiveRewardGiftItem:(id)a0;
- (BOOL)deleteAllLiveRewardGiftItems;
- (void)openDB;
- (void)setupTable;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void)closeDB;
- (id)dbPath;
- (void)willRecoverDatabase;
- (void).cxx_destruct;

@end
