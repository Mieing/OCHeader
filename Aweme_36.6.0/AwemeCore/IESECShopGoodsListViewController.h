@class IESECShopContext, UICollectionView, UILabel, IESECShopGoodsEventHandler, IESECShopPreviewMaskView, IGListAdapter, IESECQualityInfoV2, UIButton, UIView, IESECShopUndertakeGoodsSectionController, IESECShopGoodsDataController, UIScrollView, NSString, IESECRelationShoppingCartView, IESECShopGoodsState, IESECShopSelectButtonView, UIImageView;

@interface IESECShopGoodsListViewController : UIViewController <IGListAdapterDelegate, IGListAdapterDataSource, IGListDisplayDelegate, IESECCollectionViewLayoutDelegate, UIScrollViewDelegate, IESECRelationShoppingCartViewDelegate, IESECShopSelectButtonViewDelegate, IESECShopProductsEventTrackable> {
    IESECShopSelectButtonView *_lastSelectedButton;
    IESECQualityInfoV2 *_qualityInfo;
    BOOL _isFirstLoad;
    IESECShopGoodsEventHandler *_eventHandler;
}

@property (retain, nonatomic) IESECShopContext *shopContext;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECShopGoodsDataController *dataController;
@property (retain, nonatomic) IESECShopUndertakeGoodsSectionController *undertakeSectionController;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *navBgView;
@property (retain, nonatomic) UIImageView *navHeaderView;
@property (retain, nonatomic) UIScrollView *selectButtonView;
@property (retain, nonatomic) IESECShopPreviewMaskView *previewMaskView;
@property (retain, nonatomic) IESECRelationShoppingCartView *shoppingCartView;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) IESECShopGoodsState *state;
@property (copy, nonatomic) NSString *materialId;
@property (copy, nonatomic) NSString *materialTitle;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSString *tagData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapBackButton;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)listAdapter:(id)a0 willDisplayObject:(id)a1 atIndex:(long long)a2;
- (void)listAdapter:(id)a0 didEndDisplayingObject:(id)a1 atIndex:(long long)a2;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)showNormalPage;
- (void)loadMoreData;
- (void)resetDataController;
- (void)configBtmTrackerV2;
- (void)configBtmTracker;
- (void)showErrorPage;
- (void)initFetch;
- (void)endRefreshingWithError:(id)a0;
- (BOOL)ttHideNavigationBar;
- (id)collectionView:(id)a0 layoutForSection:(long long)a1;
- (void)addInfiniteScrollView;
- (void)didTapShoppingCartView;
- (BOOL)isFilterActivityButtonSelected;
- (id)productsPickTypeModel;
- (void)p_showSelectButton:(id)a0;
- (void)p_updateLastSelectedButton:(id)a0;
- (void)p_clickSelectButton:(id)a0 isClick:(BOOL)a1;
- (void)didShowShoppingCartView;
- (void)touchButton:(id)a0;
- (void)_refreshData;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)refreshData;
- (void)setUpViews;

@end
