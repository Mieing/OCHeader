@class UIView, NSString, NSArray, AWEPageContext, AWEAwemeDetailNaviBarContainerView, NSObject, AWEElementContainer, UIViewController;
@protocol AWEAwemeDetailNaviBarCommonContextProtocol, AWEAwemeDetailNaviBarControllerProtocol;

@interface AWEAwemeDetailNaviBarCoordinator : NSObject <AWEAwemeDetailNaviBarCoordinatorProtocol, AWEAwemeDetailNaviBarUpdateTimingProtocol>

@property (retain, nonatomic) AWEPageContext<AWEAwemeDetailNaviBarCommonContextProtocol> *context;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSObject<AWEAwemeDetailNaviBarControllerProtocol> *activeNaviBarController;
@property (copy, nonatomic) NSArray *elementArray;
@property (retain, nonatomic) AWEAwemeDetailNaviBarContainerView *naviBarContainerView;
@property (retain, nonatomic) UIView *leftContainerParentView;
@property (retain, nonatomic) AWEAwemeDetailNaviBarContainerView *rightContainerParentView;
@property (retain, nonatomic) AWEElementContainer *leftContainer;
@property (retain, nonatomic) AWEElementContainer *middleContainer;
@property (retain, nonatomic) AWEElementContainer *rightContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBackgroundPlayAdapterClass;

- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void)videoPlayer:(id)a0 didSingleClick:(id)a1;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (void)updateMiddleAndRightContainerHidden:(BOOL)a0 awemeModel:(id)a1;
- (void)updateLeftContainerHidden:(BOOL)a0;
- (void)updateLeftContainerAlpha:(double)a0;
- (void)updateRightContainerHidden:(BOOL)a0;
- (void)updateRightContainerAlpha:(double)a0;
- (id)aAWEBackgroundPlayAdapter;
- (void)updateNaviBarWithAweme:(id)a0;
- (void)scrollViewDidScroll:(id)a0 currentIndex:(long long)a1 totalCount:(long long)a2;
- (void)viewDidAppearForGuide;
- (void)jumpSearchToResultForPublic:(BOOL)a0;
- (void)registerNaviBarContext:(Class)a0 withCreateBlock:(id /* block */)a1;
- (void)configNaviBarContainerView;
- (void)updateNaviBarElementsWithAweme:(id)a0;
- (void)checkAllElementsHiddenOrAplha;
- (void)updateRightContainerElementHidden:(BOOL)a0;
- (id)getElementArray;
- (void)viewWillAppearWithAwemeModel:(id)a0;
- (void)viewDidLoadForUpdateRecommendWordMananger;
- (void)viewDidLoadForFetchRecommendWordWithAwemeModel:(id)a0 needDegrade:(BOOL)a1;
- (void)viewDidAppearForFetchRecommendWordWithAwemeModel:(id)a0 needDegrade:(BOOL)a1;
- (void)onScrollDidEndForRemoveSearchBarBubble;
- (void)onScrollDidEndForSearchBarRefreshWithRecommendWord:(id)a0;
- (void)onScrollDidEndForFetchRecommendWordWithAwemeModel:(id)a0 needDegrade:(BOOL)a1;
- (void)onScrollDidEndForFetchNextRecommendWordWithAwemeModel:(id)a0 needDegrade:(BOOL)a1;
- (void)onScrollDidEndWithAwemeModel:(id)a0;
- (void)initialDataSourceFetchDidFinishedForFetchRecommendWordWithAwemeModel:(id)a0 needDegrade:(BOOL)a1;
- (void)detailTableViewControllerWillExitWithAwemeModel:(id)a0;
- (id)initWithContext:(id)a0 containerView:(id)a1;
- (void)updateNaviBarElementContext;
- (void)updateMiddleContainerHidden:(BOOL)a0;
- (void)updateMiddleContainerAlpha:(double)a0;
- (void)updateContainerViewWidth:(double)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear;

@end
