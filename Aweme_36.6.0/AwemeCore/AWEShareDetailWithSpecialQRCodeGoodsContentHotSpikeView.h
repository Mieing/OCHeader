@class UIStackView, UIImageView, UILabel, UIView;

@interface AWEShareDetailWithSpecialQRCodeGoodsContentHotSpikeView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *goodsCard;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *goodsCoverView;
@property (retain, nonatomic) UIImageView *goodsCover;
@property (retain, nonatomic) UIView *goodsShadowCover;
@property (retain, nonatomic) UIImageView *badgeCover;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UILabel *shadowLabel;
@property (retain, nonatomic) UILabel *goodsTitle;
@property (retain, nonatomic) UIView *flexibleAreaView;
@property (retain, nonatomic) UIView *featureExpressionAreaView;
@property (retain, nonatomic) UIView *discountView;
@property (retain, nonatomic) UIImageView *goodsSubView;
@property (retain, nonatomic) UILabel *timeCountLabel;
@property (retain, nonatomic) UIView *subsidyPriceView;
@property (retain, nonatomic) UILabel *subsidyPriceLabel;
@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UIImageView *discountBgImageView;
@property (retain, nonatomic) UILabel *spikePriceLabel;
@property (retain, nonatomic) UILabel *originpriceLabel;
@property (retain, nonatomic) UILabel *discountPriceLabel;
@property (retain, nonatomic) UIView *discountMaskView;

+ (Class)aAWESharePrepareURLStageCommonAdapterClass;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (id)_convertFenToYuan:(id)a0;
- (id)generateTagsViewWithTags:(id)a0;
- (void)updateBenefitsAreaWithModel:(id)a0;
- (void)inserAreaView:(id)a0 withSubView:(id)a1;
- (id)aAWESharePrepareURLStageCommonAdapter;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
