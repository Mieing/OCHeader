@class UIView, NSString, IESECShopGoodsDataController, IESECShopFilterSectionController, IESECShopEmptySectionController, UIButton, IESECShopClassificationGoodsListSectionController, IESECShopClassificationGoodsActionHandler, IESECShopClassificationGoodsEventHandler, UILabel, IESECQualityInfoV2;

@interface IESECShopClassificationGoodsListViewController : IESECShopGoodsViewController <IESECShopClassificationViewControllerProtocol> {
    IESECShopFilterSectionController *_filterSectionController;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *navBgView;
@property (retain, nonatomic) IESECShopClassificationGoodsEventHandler *classificationEventHandler;
@property (retain, nonatomic) IESECShopClassificationGoodsActionHandler *classificationActionHandler;
@property (retain, nonatomic) IESECShopEmptySectionController *stateSectionController;
@property (retain, nonatomic) IESECShopClassificationGoodsListSectionController *classificationGoodsSectionController;
@property (retain, nonatomic) IESECShopClassificationGoodsListSectionController *classificationRecommendGoodsSectionController;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (copy, nonatomic) NSString *materialTitle;
@property (retain, nonatomic) IESECShopGoodsDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (void)configBtmTrackerV2;
- (void)configBtmTracker;
- (void)setFilterSectionController:(id)a0;
- (id)filterSectionController;
- (BOOL)ttHideNavigationBar;
- (id)initWithContext:(id)a0 contextV2:(id)a1 container:(id)a2;
- (void)loadMoreRecommendFeedData;
- (void)stateDidAttach:(id)a0;
- (id)stateDiffableModel:(BOOL)a0;
- (void)subviewsDidConfigure;
- (void)willDataFirstLoad;
- (void)didDataFirstLoad;
- (void)startFirstRender;
- (void)endFirstRender;
- (void)dataControllerDidReset;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)configureSubviews;

@end
