@class NSString, WCTDatabase, WCTTable;

@interface EcsWeShopDB : NSObject

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *weshopItemTable;
@property (retain, nonatomic) WCTTable *weshopItemExtTable;

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (BOOL)open;
- (void)close;
- (BOOL)createTables;
- (long long)getMaxUpdateSeq;
- (id)getShopHistoryNextKey;
- (BOOL)runTransaction:(id /* block */)a0;
- (BOOL)insertOrUpdateWeShopExtWithShopHistoryNextKey:(id)a0;
- (BOOL)insertOrUpdateWeShopItemsWithShopLabelInfos:(id)a0;
- (BOOL)updateWeShopItemsWithShopInfos:(id)a0;
- (BOOL)updateWeShopItemsJumpInfoWithShopInfos:(id)a0;
- (id)getLocalItemsWithLastSyncUpdateSeq:(long long)a0 toUpdateSeq:(long long)a1;
- (id)getLocalItemForLocalId:(long long)a0;
- (id)getLocalItemForShopAppId:(id)a0;
- (id)getJumpInfoDataForLocalId:(long long)a0;
- (BOOL)insertOrUpdateWeShopItemsWithLimitedShopLabelInfos:(id)a0 updateSeq:(long long)a1;
- (BOOL)insertOrUpdateWeShopItemWithShopLabelInfo:(id)a0 updateSeq:(long long)a1;
- (BOOL)updateWeShopItemsWithLimitedShopInfos:(id)a0 updateSeq:(long long)a1;
- (BOOL)updateWeShopItemWithShopInfo:(id)a0 updateSeq:(long long)a1;
- (BOOL)updateWeShopItemJumpInfoWithShopInfo:(id)a0;
- (void)updateLocalItem:(id)a0 withShopLabelInfo:(id)a1 updateSeq:(long long)a2;
- (void)updateLocalItem:(id)a0 withShopInfo:(id)a1 updateSeq:(long long)a2;
- (id)localItemFromShopLabelInfo:(id)a0 updateSeq:(long long)a1;
- (id)localIdsFromLocalItems:(id)a0;
- (id)shopTagInfoFromShopTagInfos:(id)a0;
- (void)fillItemUpdateProperties:(void *)a0;
- (void)fillItemMainProperties:(void *)a0;
- (void)fillItemUpdateShopInfoProperties:(void *)a0;
- (BOOL)batchModifyInWeShopTablesWithDataItems:(id)a0 block:(id /* block */)a1;
- (id)getOrCreateTable:(id)a0 withClass:(Class)a1;
- (void).cxx_destruct;

@end
