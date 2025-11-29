@class UIView, NSString, NSArray, UIImageView, UIButton, YYLabel, UICollectionView, AWEAdSearchLiveECommerceProductCardModel, UILabel, AWEAdTagView;
@protocol AWEAdSearchLiveECommerceProductCardDelegate;

@interface AWEAdSearchLiveECommerceProductCard : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEAdSearchLiveECommerceProductCard>

@property (retain, nonatomic) UIView *eCommerceProductView;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UIView *imageDescContainer;
@property (retain, nonatomic) UIView *imageDescCircleView;
@property (retain, nonatomic) UILabel *goodsImageDescLabel;
@property (retain, nonatomic) YYLabel *infoLabel;
@property (retain, nonatomic) UILabel *currencySymbolLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *extraInfoLabel;
@property (retain, nonatomic) AWEAdSearchLiveECommerceProductCardModel *model;
@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) UIButton *learnMoreBtn;
@property (retain, nonatomic) AWEAdTagView *adTagView;
@property (retain, nonatomic) UICollectionView *eCommerceProductListCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEAdSearchLiveECommerceProductCardDelegate> delegate;

- (void)updateExtraInfoLabelWithModel:(id)a0;
- (void)eCommerceProductView:(id)a0;
- (void)setupSubview;
- (void)updateWithECommerceList:(id)a0;
- (double)liveECommerceProductCardHeight;
- (void)updateWithECommerceModel:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
