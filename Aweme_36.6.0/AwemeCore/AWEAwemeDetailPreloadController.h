@class NSString, UITableViewCell, UIViewController;
@protocol AWEAwemeContainerTableViewCellPreloadProtocol, AWEAwemeDetailPreloadControllerProtocol;

@interface AWEAwemeDetailPreloadController : NSObject <AWEAwemeDetailPreloadController>

@property (nonatomic) double cellPreloadDelay;
@property (nonatomic) long long scheduledPreloadIndex;
@property (nonatomic) BOOL isCellPreloadingEnabled;
@property (weak, nonatomic) UITableViewCell<AWEAwemeContainerTableViewCellPreloadProtocol> *willDisplayPreloadedCell;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailPreloadControllerProtocol> *viewController;
@property (nonatomic) BOOL isLastDirectionSlideToBottom;
@property (nonatomic) long long needContinuousDirectionCount;
@property (nonatomic) long long continuousDirectionCount;
@property (nonatomic) long long currentCellPreloadCount;
@property (nonatomic) long long cellPreloadDelayCount;
@property (nonatomic) BOOL cellPreloadOptimizeEnable;
@property (nonatomic) BOOL enableCheckVideoCacheSizeForCellPreloadWhenScrollEnd;
@property (nonatomic) BOOL enableDynamicVideoCacheSizeThresholdForCellPreloadWhenScrollEnd;
@property (nonatomic) long long staticVideoCacheSizeThresholdForCellPreloadWhenScrollEnd;
@property (nonatomic) BOOL enableCellPreloadOptimizeForFirstVideo;
@property (nonatomic) unsigned long long loadTimeForFistVideo;
@property (nonatomic) BOOL enableOptimizeCellPreloadProcessForFirstVideo;
@property (nonatomic) double firstCellPreloadDelay;
@property (nonatomic) BOOL cellPreloadSupportLoadMoreEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)cancelCellPreloading;
- (void)scheduleCellPreloading;
- (void)preloadNextCellIfNeeded;
- (BOOL)ifPreloadCacheSizeNotEnoughToPlay;
- (void)logWithWhere:(id)a0 what:(id)a1 extra:(id)a2;
- (long long)nextPreloadedIndex;
- (void)setupCellPreload;
- (void)scheduleCellPreloadForFirstVideoIfNeed:(unsigned long long)a0;
- (id)fetchPreloadedCellForRowWithModel:(id)a0 atIndexPath:(id)a1;
- (void)controllerViewDidLoad;
- (void)controllerViewDidAppear;
- (void)didRenderFirstFrame;
- (void)controllerFinishTransition:(BOOL)a0;
- (void)loadMoreCompletionWithData:(id)a0 error:(id)a1;
- (void)prepareForPadViewTransitionAnimated;
- (void)scheduleCellPreloadOnScrollEnd;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithViewController:(id)a0;
- (void)stop;
- (id)cellForRowAtIndexPath:(id)a0;
- (id)preloadedCell;

@end
