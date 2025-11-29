@class NSArray, NSString, AWEPastMemoriesResponseModel, NSDate, NSLock;
@protocol AWERecallThemeModelProtocol;

@interface AWEVideoRouterMemoriesService : NSObject <AWEStudioMemoriesService>

@property (retain, nonatomic) AWEPastMemoriesResponseModel *cacheMemoriesModel;
@property (retain, nonatomic) NSArray<AWERecallThemeModelProtocol> *cacheThemeMemoriesModels;
@property (retain, nonatomic) NSDate *cacheDate;
@property (nonatomic) long long cachePastType;
@property (copy, nonatomic) NSString *cacheUserId;
@property (nonatomic) unsigned long long aggregateTriggerFrom;
@property (nonatomic) BOOL isAwemeExist;
@property (retain) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startPreDownloadVideoWithSchema:(id)a0;
- (BOOL)hasEnterInToday;
- (BOOL)hasAuthorizationAggregatePhotoLibrary;
- (BOOL)inTodayMainSwitch;
- (BOOL)hasPhotoLibraryAccessAuthority;
- (void)fetchTodayAggregatedImagePathWithCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)reportMemoriesShowWithId:(long long)a0 type:(unsigned long long)a1 scene:(unsigned long long)a2 themeId:(id)a3 level:(id)a4;
- (void)preloadRemoteVideoIfNeeded:(id)a0;
- (id)cachedThemeMemories;
- (BOOL)skylightEnabled:(id)a0;
- (void)toggleMemoriesSwitch:(BOOL)a0 scene:(id)a1;
- (BOOL)isMemoriesRecallEnabled;
- (BOOL)isMemoriesRecallPermissionEnabled;
- (void)cacheThemeMemories:(id)a0;
- (id)skylightMemoriesRecallTitle;
- (id)fetchActivityCoverIdWithSchema:(id)a0 aggregateDone:(BOOL)a1 checkAssetsExist:(BOOL)a2;
- (id)cacheInTodayAwemeFirstPageResponseWithPastType:(long long)a0;
- (id)albumFromPhotoLibraryWithAggregateDone:(BOOL)a0 checkAssetsExit:(BOOL)a1;
- (id)aggregatePhotoLibraryIfNeededTriggerFrom:(unsigned long long)a0;
- (BOOL)hasRequestInTodayData;
- (BOOL)privatePostEnabled:(id)a0;
- (Class)privatePostInTodayCollectionViewCellClass;
- (BOOL)needUpdateInTodayCell;
- (BOOL)shieldedInTodayEntranceInPrivateTab;
- (id)privatePostInTodayViewModel;
- (void)updateInTodayCoverTypeInPrivateTab:(unsigned long long)a0;
- (id)createInTodayViewControllerWithMemoriesPlayerModels:(id)a0;
- (id)createMemoriesPlayerModelWithAwemeModel:(id)a0;
- (id)createMemoriesPlayerModelWithPHAsset:(id)a0;
- (id)showInTodayAggregatePhtotAuthorizationPopupViewForm:(id)a0 isOwnPhoto:(BOOL)a1 schemaData:(id)a2;
- (id)aggregatePhotoLibraryWithDate:(id)a0 progress:(id /* block */)a1 hotSpotCallback:(id /* block */)a2;
- (id)aggregatePhotoLibraryWithoutAuthorizationIfNeededTriggerFrom:(unsigned long long)a0;
- (id)albumFromPhotoLibraryWithAggregateDone:(BOOL)a0 checkAssetsExit:(BOOL)a1 needAuthorization:(BOOL)a2;
- (id)inTodayAwemeFirstPageResponseFromCacheWithPastType:(long long)a0;
- (long long)inTodayAwemeFirstPageResponseFromCacheType;
- (id)queryInTodayAwemeExist;
- (BOOL)isInTodayAwemeExist;
- (BOOL)shouldAutoLandingPrivatePostTab;
- (void)recordAutoLandingPrivatePostTab;
- (void)flashBackReportCancelDate;
- (void)checkAlbumValid:(id /* block */)a0;
- (void)updateMemoriesRecallPermission:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateMemoriesRecallPermission:(BOOL)a0 showAuthorizationCard:(BOOL)a1 completion:(id /* block */)a2;
- (void)asyncCacheThemeMemories:(id)a0 completion:(id /* block */)a1;
- (BOOL)isMemoriesOn;
- (id)brandNameWithSchemaData:(id)a0;
- (void)loopFetchTodayImageAssetsByAlbumKey:(id)a0 resultAssets:(id)a1 targetCount:(unsigned long long)a2 pageOffset:(long long)a3 pageSize:(long long)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;

@end
