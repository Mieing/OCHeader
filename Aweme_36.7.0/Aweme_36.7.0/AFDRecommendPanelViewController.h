@class AFDRecommendPanelFooterView, UICollectionViewLayout, UICollectionView, NSString, UIViewController, AFDRecommendPanelHeaderView, AFDRecommendPanelContext;
@protocol AFDRecommendPanelViewControllerDelegate, AFDHalfScreenHostViewControllerProtocol;

@interface AFDRecommendPanelViewController : AWEBaseListViewController <AFDRecommendPanelViewModelDelegate, AFDRecommendPanelFooterViewDelegate, AFDRecommendPanelHeaderViewDelegate, AFDUserListGridPanelFlowLayoutDelegate, AFDHalfScreenDelegate, AFDHalfScreenPresentationProtocol>

@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<AFDRecommendPanelViewControllerDelegate> delegate;
@property (retain, nonatomic) AFDRecommendPanelHeaderView *headerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AFDRecommendPanelFooterView *footerView;
@property (retain, nonatomic) AFDRecommendPanelContext *context;
@property (retain, nonatomic) UICollectionViewLayout *collectionViewlayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<AFDHalfScreenHostViewControllerProtocol> *halfScreenHostViewController;

- (double)panelHeight;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)tabBarDidChangeNotification:(id)a0;
- (BOOL)wantsDimmingView;
- (double)halfScreenCornerRadius;
- (void)halfScreenPresentationWillBegin;
- (void)halfScreenDismissalWillBegin;
- (void)updatePanelHeight;
- (void)didClickRecommendButton;
- (void)didClickRecommendCountText;
- (void)changeRecommendPanelShowingStatus:(BOOL)a0;
- (void)refreshPanelByAction;
- (void)refreshPanelWithModel:(id)a0;
- (void)updatePanelHeightWithAnimation;
- (id)getNewUserListSectionViewModel;
- (void)refreshPanelByActionWithModel:(id)a0;
- (void)handleRecommendStatusChangeEvent;
- (void)handleRrefreshListEvent;
- (double)itemHeightAtIndexPath:(id)a0;
- (double)itemOffsetAtIndexPath:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)contentScrollView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (double)itemWidth;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)refreshData;
- (void)setupCollectionView:(id)a0;
- (void)addObservers;

@end
