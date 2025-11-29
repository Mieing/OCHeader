@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AWEInTodayPhotoLibraryNewAggregate : NSObject <AWEInTodayPhotoLibraryAggregateProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property BOOL isActive;
@property (nonatomic) BOOL isAggregating;
@property (retain) NSMutableSet *aggregatingAlbumKeySet;
@property (retain) NSMutableSet *hasAggregatedAlbumKeySet;
@property (retain) NSString *scanTaskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didBecomeActiveNotification:(id)a0;
- (void)willResignActiveNotification:(id)a0;
- (void)setupPhotoLibraryAggregate;
- (void)enterBackgroundNotification:(id)a0;
- (void)enterForegroundNotification:(id)a0;
- (BOOL)readingPhotoLibrary;
- (id)pastAlbumWithAlbumKey:(id)a0 checkAssetsExist:(BOOL)a1;
- (id)pastDayAlbum:(id)a0 checkAssetsExist:(BOOL)a1;
- (id)pastWeekAlbum:(id)a0 checkAssetsExist:(BOOL)a1;
- (id)pastMonthAlbum:(id)a0 checkAssetsExist:(BOOL)a1;
- (void)checkAllAlbumsValid:(id /* block */)a0;
- (void)aggregateTimeRangeWithRangeList:(id)a0 albumKey:(id)a1 progress:(id /* block */)a2 hotSpotCallback:(id /* block */)a3 completion:(id /* block */)a4;
- (void)fetchAssetsByAlbumKey:(id)a0 pageOffset:(long long)a1 pageSize:(long long)a2 completion:(id /* block */)a3;
- (void)preAggregateNextPeriodWithDate:(id)a0 completion:(id /* block */)a1;
- (void)setupMonthWithDate:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)aggregateDayAssets:(id)a0 withDate:(id)a1 progress:(id /* block */)a2 hotSpotCallback:(id /* block */)a3 completion:(id /* block */)a4;
- (void)aggregateWeekAssets:(id)a0 withDate:(id)a1 progress:(id /* block */)a2 hotSpotCallback:(id /* block */)a3 completion:(id /* block */)a4;
- (void)aggregateMonthAssets:(id)a0 withDate:(id)a1 progress:(id /* block */)a2 hotSpotCallback:(id /* block */)a3 completion:(id /* block */)a4;
- (void)aggregateAssets:(id)a0 withDate:(id)a1 momentConfigs:(id)a2 progress:(id /* block */)a3 hotSpotCallback:(id /* block */)a4 completion:(id /* block */)a5;
- (id)queryMoment:(id)a0 orderType:(unsigned long long)a1 checkAssetsExist:(BOOL)a2;
- (unsigned long long)orderTypeWithAlbumKey:(id)a0;
- (void)aggregateRangeAssets:(id)a0 withRangeList:(id)a1 albumKey:(id)a2 progress:(id /* block */)a3 hotSpotCallback:(id /* block */)a4 completion:(id /* block */)a5;
- (void)aggregateNextPeriodAssets:(id)a0 withDateList:(id)a1 completion:(id /* block */)a2;
- (void)pastDayNextPeriodAssetsFromPhotoLibraryWithDate:(id)a0 completion:(id /* block */)a1;
- (id)pastDayConfigWithDate:(id)a0;
- (id)pastWeekConfigWithDate:(id)a0;
- (id)pastMonthConfigWithDate:(id)a0;
- (BOOL)containsAggregatingAlbumKeySetWithKey:(id)a0;
- (void)updateHasAggregatedAlbumKeySetWithKey:(id)a0;
- (id)pastConfigWithRangeList:(id)a0 albumKey:(id)a1;
- (BOOL)containsHasAggregatedAlbumKeySetWithKey:(id)a0;
- (void)addAggregatingAlbumKeySetWithKey:(id)a0;
- (void)removeAggregatingAlbumKeySetWithKey:(id)a0;
- (void)debugAggregateAlbum:(id)a0 albumKey:(id)a1 assets:(id)a2;
- (void)trackAggregateFinishWithAlbum:(id)a0 duration:(double)a1;
- (void)aggregatePhotoLibraryWithConfigs:(id)a0 progress:(id /* block */)a1 hotSpotCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (void)aggregateWithConfig:(id)a0 progress:(id /* block */)a1 hotSpotCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (void)setupMonthAssetsMeta:(id)a0 withDate:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)aggregateCert;
- (void)aggregateRangeAssets:(id)a0 config:(id)a1 progress:(id /* block */)a2 hotSpotCallback:(id /* block */)a3 completion:(id /* block */)a4;
- (BOOL)shouldRefresh:(BOOL)a0;
- (void)removeHasAggregatedAlbumKeySetWithKey:(id)a0;
- (id)assetsAfterDeleteInvalidAssetsWithMoment:(id)a0;
- (void)debugQueryAlbum:(id)a0 albumKey:(id)a1;
- (id)momentConfigWithTimes:(id)a0 albumKey:(id)a1;
- (void)debugAggregateAlbums:(id)a0 assets:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)cancelTask;

@end
