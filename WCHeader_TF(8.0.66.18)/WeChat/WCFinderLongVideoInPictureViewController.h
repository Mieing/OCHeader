@class WCPlayerView, NSString, WCFinderFeedContentVM, WCFinderFeedListView, MiniRecTransitionController;

@interface WCFinderLongVideoInPictureViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderInPictureProtocol>

@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (nonatomic) BOOL hadAppeared;
@property (nonatomic) BOOL disableResume;
@property (nonatomic) BOOL viewWillDisappearFlag;
@property (nonatomic) unsigned long long feedViewerScene;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) MiniRecTransitionController *minimizationTransitionController;
@property (retain, nonatomic) WCPlayerView *playerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentVM:(id)a0 player:(id)a1;
- (void)dealloc;
- (void)pauseVideo;
- (id)cacheKey;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)willDisappear;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidPushOrPresent:(BOOL)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)configureTableView;
- (int)feedViewControllerScene;
- (id)getCurMediaListObject;
- (void)inPicture:(BOOL)a0;
- (void)onClose;
- (BOOL)useTransparentNavibar;
- (id)playingVideo;
- (BOOL)isPlaying;
- (id)viewForCapture;
- (void)maxmizeFromInPicture;
- (void)closeInPicture;
- (void)clearPlayerOnly;
- (void)stashPlayer;
- (void)unstashPlayer;
- (void)willInPicture;
- (BOOL)setVideoMute:(BOOL)a0;
- (void)resumeToFullFromInPicture;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullRectForMedia;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)a0;
- (id)finderFeedListViewCustomTableViewParam:(id)a0 contentVM:(id)a1;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListViewShowsMoreButton:(id)a0;
- (BOOL)finderFeedListViewCanInPicture:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)a0 contentVM:(id)a1 finderPlayerReport:(id)a2;
- (void).cxx_destruct;

@end
