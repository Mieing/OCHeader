@class NSString, AWEAIMemoriesCollectionUpdateAlbumHandler;

@interface AWECAKAlbumAIMemoriesFeatureService : NSObject <AWEUserMessage, CAKAlbumAIMemoriesFeatureServiceProtocol>

@property (retain, nonatomic) AWEAIMemoriesCollectionUpdateAlbumHandler *albumHander;
@property (nonatomic) double clickCustomCellItemTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)switchManagePositionExifPermit:(BOOL)a0;
- (id)getAllUploadedAssetIDs;
- (void)prepareC1500DataWithCompletion:(id /* block */)a0;
- (void)uploadC1500FeatureWithCountLimit:(long long)a0 completion:(id /* block */)a1;
- (void)updateAIMemoriesPermissionStatus:(BOOL)a0 isFirst:(BOOL)a1 changeScene:(long long)a2;
- (void)requestCollectionAndInsightDataWithCompletion:(id /* block */)a0;
- (void)perDayRequestInsightDataWithCompletion:(id /* block */)a0;
- (void)perDayGenerateCollectionWithCompletion:(id /* block */)a0;
- (void)reportDeletedAsset;
- (void)requestColletionAndAssetWithScene:(long long)a0 query:(id)a1 searchType:(long long)a2 completion:(id /* block */)a3;
- (void)requestColletionWithScene:(long long)a0 query:(id)a1 assetList:(id)a2 completion:(id /* block */)a3;
- (void)jumpToAIMemoriesLawPage;
- (BOOL)forceFetchPerDayData;
- (long long)queryAITaskStatusWithTaskID:(id)a0;
- (void)restoreAITaskWithTaskID:(id)a0 withEnterEditMethod:(id)a1;
- (void)reportCollectionDisplayed:(id)a0;
- (void)recoverUploadedAssetIDFromRemote;
- (void)checkUploadC1500AssetStatus;
- (id)AIMemoriesSelectedAssetsViewCustomCellItem;
- (void)p_cleanDataWhenCancelAIMemoriesPermission;
- (void)p_recoverDataWhenAuthAIMemoriesPermission;
- (void)requestRemoteCheckUploadC1500AssetStatusWithAssetIDList:(id)a0 cursor:(long long)a1 completion:(id /* block */)a2;
- (void)requestRemoteAssetStatusWithCursor:(long long)a0 withCompletion:(id /* block */)a1;
- (void)fireExifChangeAction:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
