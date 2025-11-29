@class NSString;

@interface AWEDetailFeedQualityMetricCenterController : AWEAwemeNewDetailBaseController <AWEFeedControllerProtocol>

@property (nonatomic) double originScrollAnimationDuration;
@property (nonatomic) double originScrollVelocityThresholdY;
@property (nonatomic) BOOL ifNeedResetVelocityThreshold;
@property (nonatomic) BOOL ifNeedResetAnimationDuration;
@property (nonatomic) double beforeChangeAnimationDuration;
@property (nonatomic) BOOL ifNeedResetDistance;
@property (nonatomic) BOOL ifNormalDistanceChanged;
@property (nonatomic) BOOL ifNormalVelocityChanged;
@property (nonatomic) BOOL ifFirstInteractionHasDelay;
@property (copy, nonatomic) id /* block */ firstInteractionDelayShowHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)beginLoadMore;
- (void)onAwemeDeleted:(id)a0 isLiveFinish:(BOOL)a1 isDislike:(BOOL)a2 index:(unsigned long long)a3 isLiveEnded:(BOOL)a4;
- (void)viewDidLoadBeforeTableviewSetup;
- (void)viewDidLoadAfterTableviewSetup;
- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)videoControllerWillStartNextLoop:(id)a0;
- (void)setupPagingAnimationDiy;
- (void)modifyVelocityThresholdIfNeeded;
- (void)modifyAnimationDurationIfNeeded;
- (void)modifyPagingDistanceIfNeeded;
- (void)__onFeedScrollDidEnd;
- (void)ptPredictLabelChangeNotification:(id)a0;
- (BOOL)cellPreloadedAnimationDurationEnabled;
- (void)changeAnimationDurationWithScene:(id)a0;
- (void)changePagingDistanceWithScene:(id)a0;
- (BOOL)liveVelocityThresholdEnabled;
- (BOOL)adVelocityThresholdEnabled;
- (BOOL)nextAdVelocityThresholdEnabled;
- (void)changeVelocityThresholdYWithScene:(id)a0;
- (void)resetLastPtPredictLabel;
- (id)ptPredictAnimationDurationDict;
- (long long)currentIndex;
- (void).cxx_destruct;
- (void)play;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
