@class NSArray, UICollectionView, NSString, UILabel, UIView;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCCustomerReviewsView : AWESearchCachalotBaseCardView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UIView *spaceView;
@property (retain, nonatomic) UIView *cornerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *tabList;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (nonatomic) unsigned long long selectedTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)refreshCustomerReviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)createUI;

@end
