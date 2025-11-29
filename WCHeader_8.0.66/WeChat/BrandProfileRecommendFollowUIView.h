@class UIView, SightIconView, NSString, UICollectionViewFlowLayout, CAShapeLayer, _TtC6WeChat36BrandProfileRecommendFollowViewModel, UICollectionView, UILabel, MMUIButton;

@interface BrandProfileRecommendFollowUIView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) _TtC6WeChat36BrandProfileRecommendFollowViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *moreButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout;
@property (retain, nonatomic) UIView *arrowBackgroundView;
@property (retain, nonatomic) UIView *arrowView;
@property (retain, nonatomic) CAShapeLayer *arrowLayer;
@property (retain, nonatomic) SightIconView *loadingView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)onDatasUpdate;
- (void)onClickMoreButton;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)generateArrowLayer:(double)a0;
- (void).cxx_destruct;

@end
