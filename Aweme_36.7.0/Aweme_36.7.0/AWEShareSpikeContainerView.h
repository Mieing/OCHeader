@class UIStackView, UIImageView, UILabel, UIView;

@interface AWEShareSpikeContainerView : UIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *brandImageView;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *goodsCard;
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

- (id)_convertFenToYuan:(id)a0;
- (id)generateTagsViewWithTags:(id)a0;
- (void)updateBenefitsAreaWithModel:(id)a0;
- (void)inserAreaView:(id)a0 withSubView:(id)a1;
- (void)setModel:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setUpSubviews;

@end
