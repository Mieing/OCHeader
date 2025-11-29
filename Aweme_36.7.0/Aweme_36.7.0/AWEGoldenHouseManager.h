@class NSTimer, NSString, AWEGoldenHouseDataController, NSRecursiveLock, NSArray, NSMutableDictionary, AWEListDataController, NSMutableArray, NSMutableSet;

@interface AWEGoldenHouseManager : NSObject <AWEDigitalWellbeingMessage, AWEGoldenHouseManagerProtocol>

@property (nonatomic) BOOL hasReadStorage;
@property (retain, nonatomic) NSMutableArray *feedPreCacheList;
@property (retain, nonatomic) NSMutableArray *feedCachedList;
@property (retain, nonatomic) NSMutableDictionary *downloadedDict;
@property (nonatomic) long long cachedCount;
@property (nonatomic) long long shouldCachedCount;
@property (retain, nonatomic) NSTimer *feedCacheCheckTimer;
@property (retain, nonatomic) NSTimer *feedGHCacheTimer;
@property (retain, nonatomic) AWEGoldenHouseDataController *dataController;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) BOOL enablePeriodDownload;
@property (nonatomic) double lastDownloadTime;
@property (nonatomic) BOOL downloadPermit;
@property (retain, nonatomic) NSArray *periodLimitArray;
@property (copy, nonatomic) NSString *lastVideoItemID;
@property (retain, nonatomic) AWEListDataController *foryouFeedDataController;
@property (retain, nonatomic) NSMutableSet *playedVideos;
@property (retain, nonatomic) NSMutableSet *releasedVideos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 isEqual:(id /* block */)a1;
- (void)videoSafetyCheckIfNeeded;
- (unsigned long long)loadMoreType;
- (id)transToMinString:(id)a0;
- (id)transPeakTimeType:(id)a0;
- (BOOL)checkLeftSpaceEnough;
- (id)getValidCacheFromLocalCache:(id)a0;
- (id)setProFeedPreCache:(id)a0;
- (void)storageToFlieWithFeedPreCacheList:(id)a0 key:(id)a1 completion:(id /* block */)a2;
- (void)invalidateFeedCacheTimer;
- (id)getFeedCachedWithCount:(long long)a0;
- (id)getFeedCachedModels;
- (id)returnNoDuplicatedReleaseFeed:(id)a0;
- (id)returnNoDuplicatedHistoryFeed:(id)a0;
- (void)clearCacheInGoldenHouseWithCount:(long long)a0;
- (void)clearCacheInGoldenHouseAtOnce:(BOOL)a0;
- (void)timerFetchFeedCache;
- (void)clearReleasedVideoCache;
- (void)getFeedCachedDictFromFileWithCompletion:(id /* block */)a0;
- (void)getFeedCacheArrayFromFileWithCompletion:(id /* block */)a0;
- (BOOL)checkDownloadCondition;
- (void)fetchFeedOrContinueDownloading;
- (void)asyncToStorageWithKey:(id)a0 list:(id)a1;
- (void)updateOfflineModeUserID;
- (void)preloadCacheFeedModels:(id)a0;
- (void)asyncToStorageWithKey:(id)a0 Dic:(id)a1;
- (void)clearVideoCache;
- (BOOL)checkIfSwitchIdChanged;
- (void)handleVideoSafetyPreCheckWithResults:(id)a0;
- (void)videoPrivacySafetyCheck:(id)a0;
- (void)storageToFlieWithFeedPreCacheDic:(id)a0 key:(id)a1 completion:(id /* block */)a2;
- (id)getFeedNoCachedModels;
- (void)fetchPreCacheFeedWithCount:(long long)a0;
- (BOOL)checkDownloadPeriodVaild;
- (BOOL)checkDownloadPeriodVaildOpt;
- (void)clearDuplicatedFeedPreCacheModels;
- (void)clearDuplicatedFeedPreCacheModelsWithArray:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appDidEnterBackground;

@end
