@class NSString, NSMutableArray;
@protocol AWEListenFeedDataControllerProtocol;

@interface AWEAwemeFeedBGPlayAutoNextController : AWEAwemeFeedBaseController <AWEAwemeBackgroundPlayAutoNextDelegate>

@property (nonatomic) BOOL isLoadMoreNoMoreData;
@property (nonatomic) BOOL isDidAppear;
@property (nonatomic) BOOL isChangingVideo;
@property (retain, nonatomic) id<AWEListenFeedDataControllerProtocol> listenFeedDataController;
@property (retain, nonatomic) NSMutableArray *listenFeedModelList;
@property (retain, nonatomic) NSMutableArray *hasWatchedModelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentVideoController;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (BOOL)isIndexValid:(id)a0;
- (BOOL)enableBGPlaySettings;
- (void)handleFeedAutoPlayNextNotification:(id)a0;
- (void)setupPlayingInfoPlayNext;
- (void)removePlayingInfoPlayNext;
- (BOOL)shouldEnableBGPlayAutoNextFeature;
- (id)videoControllerWithCell:(id)a0;
- (void)handleAlbumAutoPlayNextNotification:(id)a0;
- (void)dismissMixPanel;
- (void)updatePlayerVideoPlayEnterMethod:(id)a0;
- (void)playNext:(BOOL)a0;
- (BOOL)enableUseListenFeedDataController;
- (BOOL)hasWatchedModelWithIndex:(long long)a0;
- (id)commonTableView;
- (void)loadMoreListenFeedIfNeeded;
- (BOOL)tryToPlayWithIndex:(long long)a0 isNext:(BOOL)a1;
- (void)playWithIndex:(long long)a0 isNext:(BOOL)a1;
- (void)trackBackgroundParamsForEvent:(id)a0;
- (void)playPre;
- (BOOL)shouldShowPlayChangeForRemoteControl;
- (BOOL)shouldEnablePlayPreForRemoteControl;
- (void)handleBackgroundPlayPrev;
- (void)handleBackgroundPlayNext;
- (void)willEnterBackgroundPlay;
- (void)didExitBackgroundPlay;
- (BOOL)backgroundPlayForbidResignNowPlaying;
- (BOOL)hasIphoneAutoPlaySwitch;
- (BOOL)isIphoneAutoPlayEnable;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)appWillResignActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear;

@end
