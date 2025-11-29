@class IESECCommentShowViewController, NSArray, IESECTracker, IESECGoodsCommentHeader, NSString, IESECSlidingTabContainerView, IESECKOLEvaluationViewController, IESECKOLBuyerShowMergeViewControllerConfiguration, IESECSlidingTabbarView, UIScrollView;
@protocol IESECTabViewElementProtocol;

@interface IESECKOLBuyerShowMergeViewController : UIViewController <IESECTabContainerDataSource, IESECTabContainerDelegate, IESECSlidingTabbarLayoutDelegate, IESECGoodsCommentHeaderActionDelegate, IESECSlidingTabbarDelegate>

@property (retain, nonatomic) IESECKOLBuyerShowMergeViewControllerConfiguration *configuration;
@property (retain, nonatomic) NSArray *tabArray;
@property (copy, nonatomic) NSArray *tabInfos;
@property (retain, nonatomic) IESECGoodsCommentHeader *headerView;
@property (retain, nonatomic) IESECSlidingTabbarView *tabView;
@property (retain, nonatomic) IESECSlidingTabContainerView *slidingContainerView;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (nonatomic) BOOL hasFirstLoadTab;
@property (nonatomic) BOOL hasKOLAndBuyerShow;
@property (nonatomic) BOOL hasKOLOrBuyerShow;
@property (retain, nonatomic) IESECKOLEvaluationViewController<IESECTabViewElementProtocol> *kolVC;
@property (retain, nonatomic) IESECCommentShowViewController<IESECTabViewElementProtocol> *commentVC;
@property (retain, nonatomic) IESECTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ indexChanged;

- (void)tapClose;
- (void)setupTracker;
- (long long)getCurrentIndex;
- (void)configBTMTracker;
- (id)tabContainer:(id)a0 tabViewElementForIndex:(long long)a1;
- (void)tabContainer:(id)a0 didMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })slidingTabbarView:(id)a0 insetForSegment:(id)a1 atIndex:(unsigned long long)a2;
- (void)setupTabInfos;
- (void)setupTabArray;
- (id)createKOLEvaluationVCElement;
- (id)createCommentShowVCElement;
- (id)getCurrentPageType;
- (void)trackKolSelectedCommentPageClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
