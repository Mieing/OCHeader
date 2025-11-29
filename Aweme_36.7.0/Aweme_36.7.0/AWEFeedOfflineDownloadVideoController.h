@class NSString, AWEBinding, NSMutableArray;

@interface AWEFeedOfflineDownloadVideoController : AWEBaseController <AWEFeedControllerProtocol>

@property (nonatomic) BOOL isLaunchCacheReady;
@property (nonatomic) BOOL isLaunchNetStateReady;
@property (retain, nonatomic) AWEBinding *stateVCBinding;
@property (retain, nonatomic) AWEBinding *cachesAlreadyBinding;
@property (nonatomic) BOOL hasShowNetToast;
@property (nonatomic) BOOL hasShowToast;
@property (retain, nonatomic) NSMutableArray *insertedVideosIDList;
@property (retain, nonatomic) NSMutableArray *hasWatchedMixVideoIDList;
@property (nonatomic) BOOL hasVideoCenterCacheInit;
@property (nonatomic) long long offlineModeIndex;
@property (nonatomic) BOOL hasInsertFirstVideo;
@property (nonatomic) BOOL hasEnterOfflineMode;
@property (nonatomic) long long offlineModeEnterCount;
@property (nonatomic) long long offlineVideoVVCount;
@property (retain, nonatomic) NSMutableArray *hasPlayedVideoIDList;
@property (nonatomic) long long offlineVideoFinishCount;
@property (retain, nonatomic) NSMutableArray *offlineVideoFinishIDList;
@property (nonatomic) BOOL isLaunchEnterOfflineMode;
@property (nonatomic) double enterTime;
@property (nonatomic) double lastReceiveWeakNetNotificationTime;
@property (nonatomic) BOOL isRetryFeedInsert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)insertTimeInterval;
+ (BOOL)checkBeforeInsertFeed;
+ (BOOL)retryWhenCheckFailed;
+ (long long)insertFixType;
+ (BOOL)checkAfterInsertFeed;
+ (BOOL)isVideoWatched:(id)a0;
+ (void)setVideoWatched:(id)a0;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)onDataSourceReload;
- (void)videoControllerWillStartNextLoop:(id)a0;
- (void)handleConnectionChanged:(id)a0;
- (void)setupObserver;
- (void)receiveWeakNetNoti:(id)a0;
- (void)offlineModeDataInit;
- (void)initVideoCacheInitIfNeeded;
- (void)markVideoWatched:(id)a0;
- (BOOL)netNotConnectedShouldInsert;
- (void)trackOfflineModeStatus:(long long)a0;
- (id)readyCacheModels;
- (void)insertVideosToFeed:(id)a0 type:(long long)a1;
- (void)resetViewControllerStateIfNeeded;
- (void)trackOfflineModeConsumption:(id)a0;
- (void)trackEnterOfflineMode:(id)a0;
- (void)videoCenterCacheDidInit:(id)a0;
- (void)offlineFeedPreCacheDidClean:(id)a0;
- (void)insertFirstVideoAndReloadIfNeeded;
- (void)setViewControllerStateErrorIfNeeded;
- (void)trackFeedInsertWithModels:(id)a0 andStatus:(id)a1 result:(id)a2;
- (BOOL)shouldInsertVideos;
- (id)filterCacheModels:(id)a0;
- (id)generalLabelModel:(id)a0;
- (void)willResignActive;
- (unsigned long long)networkStatus;
- (void).cxx_destruct;
- (void)play;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
