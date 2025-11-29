@class NSString, NSTimer, AWEAwemeModel, UIView, UIPanGestureRecognizer, AWEAwemeDetailPlayletInnerAdCountDownView;

@interface AWEAwemeDetailPlayletInnerBlockInsetAdViewController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol, UIGestureRecognizerDelegate, AWEAwemeDetailPlayletInnerAdCountDownViewDelegate>

@property (retain, nonatomic) NSTimer *adWatchTimer;
@property (retain, nonatomic) UIView *insertBlockBackgroundView;
@property (retain, nonatomic) AWEAwemeDetailPlayletInnerAdCountDownView *insertBlockView;
@property (nonatomic) long long adWatchCount;
@property (nonatomic) BOOL isPaused;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) long long blockTime;
@property (nonatomic) struct CGPoint { double x; double y; } blockInitialPoint;
@property (nonatomic) BOOL lastPlayletIsAds;
@property (nonatomic) BOOL isTaskFinish;
@property (nonatomic) double adpageShowTime;
@property (retain, nonatomic) AWEAwemeModel *reloadBeforeCurrentModel;
@property (nonatomic) long long innerWatchAdCount;
@property (copy, nonatomic) NSString *currentInnerPlayletID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)didEndConfigingCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)willReloadData;
- (void)didReloadData;
- (void)detailCellViewController:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (id)awemeModelWithIndexPath:(long long)a0;
- (void)onLivePlaySuccess:(id)a0;
- (id)getInteractionContext;
- (BOOL)shouldShowAdFreeEntry;
- (BOOL)ignoreReloadAfterTableViewLifeCycleWithModel:(id)a0;
- (void)sendEventToInteraction:(id)a0 object:(id)a1 context:(id)a2;
- (void)playletInnerAdCountDownViewDidClickAdFreeEntry:(id)a0;
- (void)removeAllAdBlockNeedAnimation:(BOOL)a0;
- (void)removeAllAdBlock;
- (void)playletAdInsertAwemeDeleteNotification:(id)a0;
- (BOOL)isNewPlayletAdBlockTimerStrategy;
- (void)pauseForPlayAction;
- (void)playForPlayAction;
- (void)trackAdsPage:(id)a0 event:(id)a1;
- (void)showAdInsetTrack:(id)a0;
- (void)enableAdInsertBlockView;
- (void)enableShowStayEnoughBlockView;
- (BOOL)playletFeedInsertADGuideEnable;
- (void)didDisplayShowAdInsetTrack:(id)a0;
- (void)adInsertBlockViewStayEnough;
- (BOOL)needsReduceAnimation;
- (void)trackAdsPage:(id)a0 event:(id)a1 extraParams:(id)a2;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)handlePanGesture:(id)a0;
- (void)updateProgress:(id)a0;

@end
