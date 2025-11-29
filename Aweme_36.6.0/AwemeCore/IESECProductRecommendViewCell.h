@class UIStackView, IESECButton, UIView, CAShapeLayer, YYLabel, IESECGoodsPriceLabel, IESECGoodsCouponTagButton, UILabel, IESECUIImageView;

@interface IESECProductRecommendViewCell : IESECRecommendBaseViewCell

@property (retain, nonatomic) IESECUIImageView *goodsImageView;
@property (retain, nonatomic) UIStackView *tagsStackView;
@property (retain, nonatomic) IESECButton *secKillTagButton;
@property (retain, nonatomic) IESECGoodsCouponTagButton *couponTagButton;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) YYLabel *goodsTitleLabel;
@property (retain, nonatomic) UILabel *salesLabel;
@property (retain, nonatomic) CAShapeLayer *dashline;
@property (retain, nonatomic) IESECUIImageView *recommendReasonIconImageView;
@property (retain, nonatomic) UILabel *recommendReasonContent;
@property (retain, nonatomic) UILabel *rankRecommendReasonLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) IESECUIImageView *arrowImageView;
@property (retain, nonatomic) UIView *rankRecommendReasonView;
@property (retain, nonatomic) IESECUIImageView *adTagImageView;

+ (double)widthForIconTagArray:(id)a0;
+ (double)heightForRecommendItem:(id)a0 containerWidth:(double)a1;
+ (BOOL)hasActivity:(id)a0;
+ (id)titleFont;

- (void)configureWithRecommendItem:(id)a0 shouldShowDislikeMask:(BOOL)a1;
- (void)updateDislikeMask;
- (void)openGoodsDetailWithCard;
- (void)updateTitle:(id)a0 tagImages:(id)a1;
- (void)updateTagsWithGoodsModel:(id)a0;
- (void)updateNewRankRecommendUI:(id)a0;
- (void)updateRecommandReasonUI:(id)a0;
- (void)updateRankRecommendUI:(id)a0;
- (void)updateBaseRecommendUI;
- (void)openGoodsDetailWithTapGoodsImage:(BOOL)a0;
- (void)openGoodsDetailWithClickGoodsImage;
- (void)recommendReasonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
