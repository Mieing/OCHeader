@class NSObject, NSMutableDictionary, EcsWeShopDB;
@protocol OS_dispatch_queue, EcsWeShopInfoUpdaterDelegate;

@interface EcsWeShopInfoUpdater : NSObject

@property (retain, nonatomic) EcsWeShopDB *db;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) NSMutableDictionary *updateItemsMap;
@property (weak, nonatomic) id<EcsWeShopInfoUpdaterDelegate> delegate;

- (id)initWithDB:(id)a0 dataQueue:(id)a1;
- (void)updateWeShopInfoWithShopAppId:(id)a0;
- (void)updateIfNeeded;
- (id)updateWithShopAppIds:(id)a0;
- (id)itemForShopAppId:(id)a0;
- (void)creatNewAndSetItemWithShopAppId:(id)a0;
- (id)getAllItemsToUpdate;
- (id)shopAppIdsFromUpdateItems:(id)a0;
- (id)shopAppIdsFromShopInfos:(id)a0;
- (void)updateStatus:(unsigned long long)a0 forUpdateItem:(id)a1;
- (BOOL)needsUpdateIndexingWithShopInfo:(id)a0 localItem:(id)a1;
- (void).cxx_destruct;

@end
