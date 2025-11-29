@class NSString, IESECLLView, UICollectionView, NSArray, _AWEECCommodityLandingViewMoreButton;
@protocol AWEECLandingCommodityListDelegate;

@interface AWEECLandingCommodityList : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEECLandingCommodityCardCellDelegate> {
    UICollectionView *_collectionView;
    IESECLLView *_headerView;
    NSArray *_merchandises;
    IESECLLView *_showMoreView;
    BOOL _shouldShowMore;
    BOOL _redirectionTriggered;
    _AWEECCommodityLandingViewMoreButton *_viewMoreButton;
}

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEECLandingCommodityListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithMerchandiseModelList:(id)a0 hasMore:(BOOL)a1;
- (void)commodityCard:(id)a0 didClickBuyButtonWithMerchandise:(id)a1;
- (void)viewMoreButtonDidClick:(id)a0;
- (void)updateTrailViewLayout;
- (void)trailViewShouldBeTriggered;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
