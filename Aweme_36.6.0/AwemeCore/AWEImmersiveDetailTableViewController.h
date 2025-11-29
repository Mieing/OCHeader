@class NSNumber, NSString;
@protocol AWERelatedMixDetailViewControllerDelegate;

@interface AWEImmersiveDetailTableViewController : AWEAwemeDetailTableViewController <AWERouterViewControllerProtocol>

@property (nonatomic) struct CGPoint { double x; double y; } panGestureLastPoint;
@property (retain, nonatomic) NSNumber *rightSlideUsing;
@property (nonatomic) BOOL isNeedDelayTrackImmersiveShow;
@property (weak, nonatomic) id<AWERelatedMixDetailViewControllerDelegate> relatedMixDetailViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEPadMixVideoAdapterClass;
+ (Class)aAWEPadMixVideoImmersiveAdapterClass;
+ (id)mixRelatedFeedImmersiveDetailWithDataController:(id)a0 model:(id)a1 logExtraDict:(id)a2;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)awe_onReturnButtonClicked:(id)a0;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (id)cellReuseIdentifierForRowWithModel:(id)a0;
- (BOOL)shouldActiveInCurrentTopViewController;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (id)enterFromForEnterSearch;
- (BOOL)shouldShowDiscoverEntranceView;
- (BOOL)shouldUseSearchEntranceBarStyle;
- (id)configCellLogExtraDictWithModel:(id)a0 indexPath:(id)a1;
- (void)detailCellViewController:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (id)aAWEPadSplitScreenAdapter;
- (id)createDefaultConfig;
- (BOOL)fpsOptimizationEnabled;
- (BOOL)getCanShowFixedBottomBar;
- (BOOL)p_enableFullScreenSlide;
- (id)aAWEPadMixVideoAdapter;
- (BOOL)shouldHideCommentInputViewOnAweme:(id)a0;
- (id)aAWEPadMixVideoImmersiveAdapter;
- (void)clickExitButton;
- (void)trackShowCompilationEntranceForCellViewController:(id)a0 index:(long long)a1;
- (void)exitOnScroll;
- (void)trackMoreCompilationStayTime;
- (void)trackExitMoreCompilationTabWithExitMethod:(id)a0 isEnterMixVideo:(BOOL)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)setTableView:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)loadView;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)panGesture:(id)a0;

@end
