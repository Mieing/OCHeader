@class EcsWeShopDB, EcsWeShopInfoUpdater, NSString, NSObject, EcsWeShopFetchDataTrigger;
@protocol OS_dispatch_queue;

@interface EcsWeShopMgr : MMUserService <EcsWeShopFetchDataTriggerDelegate, MMActionNotifyCommBizExt, EcsWeShopInfoUpdaterDelegate, MMServiceProtocol>

@property (retain, nonatomic) EcsWeShopDB *db;
@property (nonatomic) BOOL isDataLoading;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) EcsWeShopFetchDataTrigger *fetchDataTrigger;
@property (retain, nonatomic) EcsWeShopInfoUpdater *shopInfoUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWeShopInfoWithShopAppId:(id)a0;
- (void)openWeShopWithLocalId:(long long)a0 withNavigationController:(id)a1;
- (long long)getMaxUpdateSeq;
- (id)getLocalItemsWithLastSyncUpdateSeq:(long long)a0 toUpdateSeq:(long long)a1;
- (id)getLocalItemForLocalId:(long long)a0;
- (id)getLocalItemForShopAppId:(id)a0;
- (id)getJumpInfoDataForLocalId:(long long)a0;
- (id)init;
- (void)loadDataIfNeeded;
- (void)loadDataIfNeededWithDelayInSeconds:(double)a0;
- (id)handleUserShopLabelResp:(id)a0;
- (void)updateFetchDataTimeIntervalIfNeeded:(unsigned int)a0;
- (void)updateFetchDataTriggerWithTimeInterval:(unsigned int)a0;
- (void)weShopFetchDataTriggerOnTrigger:(id)a0;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServicePauseBackgroundTask:(unsigned long long)a0;
- (void)onServiceResumeBackgroundTask:(unsigned long long)a0;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onGetBizId1:(long long)a0 data:(id)a1;
- (void)weShopInfoUpdater:(id)a0 didUpdateLocalDataWithNeedsUpdateIndexingShopAppIds:(id)a1;
- (id)shopAppIdsFromShopLabelInfos:(id)a0;
- (void).cxx_destruct;

@end
