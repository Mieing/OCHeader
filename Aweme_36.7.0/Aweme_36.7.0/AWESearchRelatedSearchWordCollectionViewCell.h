@class AWEDoubleColumnSearchMerchandiseUIInfoModel, AWEDoubleColumnSearchMerchandiseCouponInfoModel, UIView, AWEDoubleColumnSearchMerchandiseModel, NSArray, UIImageView, NSDictionary, NSString, CAGradientLayer, UICollectionView, UILabel;
@protocol AWESearchWordProtocol;

@interface AWESearchRelatedSearchWordCollectionViewCell : AWESearchCachalotECommerceBaseCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *preTitleLabel;
@property (retain, nonatomic) UIView *couponView;
@property (retain, nonatomic) UIImageView *couponImgView;
@property (retain, nonatomic) UILabel *couponLabel;
@property (retain, nonatomic) UICollectionView *relatedWordsCollectionView;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseUIInfoModel *UIInfoModel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoModel *couponInfoModel;
@property (retain, nonatomic) NSArray *RelatedWordArray;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *couponGradientLayer;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UIView *couponGradientView;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) long long relatedWordNum;
@property (retain, nonatomic) UIView *roundCornerContentView;
@property (weak, nonatomic) id<AWESearchWordProtocol> delegate;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (nonatomic) BOOL isFromECommerce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (long long)showLines:(id)a0;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)trackCardShow;
- (void)configUI;
- (BOOL)isFromECommerce;
- (BOOL)isLightStyle;
- (void)setUiWithCoupon;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)a0;

@end
