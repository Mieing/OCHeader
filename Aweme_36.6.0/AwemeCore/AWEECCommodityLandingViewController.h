@class AWEECCommodityLandingBottomBar, NSString, NSArray, AWEECCommodityLandingHeaderModel, AWEECCommodityLandingConfiguration, TrackerService, UICollectionView, AWEECCommodityLandingVideoManager, DUXPopover;

@interface AWEECCommodityLandingViewController : UIViewController <AWERouterViewControllerProtocol, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEECLandingCommodityListDelegate, AWEZoomTransitionOuterContextProvider, AWEECCommodityLandingCollectButtonProtocol> {
    UICollectionView *_collectionView;
    AWEECCommodityLandingHeaderModel *_headerModel;
    AWEECCommodityLandingVideoManager *_videoManager;
    NSArray *_merchandises;
    BOOL _hasMoreMerchandises;
    NSString *_searchSceheme;
    long long _indexOfCurrentSelectedVideoCell;
    BOOL _shouldAnimateForVideo;
    TrackerService *_tracker;
    unsigned long long _timeToPage;
    AWEECCommodityLandingConfiguration *_configuration;
    DUXPopover *_popover;
    BOOL _hasShowTopLikeBtn;
    BOOL _hasShowBottomLikeBtn;
}

@property (retain, nonatomic) AWEECCommodityLandingBottomBar *bottomBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)clickCollectButton:(id)a0;
- (void)requestVideoListWithCompletionHandler:(id /* block */)a0;
- (void)configBtmTrackerV2;
- (void)configBTMTracker;
- (void)requestCommodityHeader;
- (void)requestCommodityList;
- (void)requestVideoList;
- (void)p_showBottomBar;
- (void)p_hideBottomBar;
- (void)backButtonDidClick:(id)a0;
- (void)p_setupBottomBar;
- (id)p_collectionCount:(long long)a0;
- (id)merchandiseSchemeAppendExtraParametersWithOriginScheme:(id)a0;
- (void)eventTrackingForClickProductAtIndex:(unsigned long long)a0;
- (id)videoSchemeAppendExtraParametersWithOriginScheme:(id)a0;
- (id)liveSchemeAppendExtraParametersWithOriginScheme:(id)a0;
- (id)p_popoverWithTarget:(id)a0;
- (void)trackLikeButtonClickBottomBar:(BOOL)a0;
- (void)trackCollectionTabClickBottomBar:(BOOL)a0;
- (void)trackLikeButtonShowBottomBar:(BOOL)a0;
- (id)cardTypeDescriptionWithType:(long long)a0;
- (void)commodityList:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)commodityList:(id)a0 shouldShowMoreWithType:(unsigned long long)a1;
- (void)commodityList:(id)a0 didClickBuyButtonWithMerchandise:(id)a1;
- (void)commodityList:(id)a0 willDisplayCard:(id)a1 forItemAtIndex:(unsigned long long)a2;
- (id)initWithLandingConfiguration:(id)a0;
- (id)detailParametersWithMerchandiseModel:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupSubviews;

@end
