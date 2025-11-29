@class IESECGoodsDiscountPriceView, IESECGoodsGroupBuyingModel, IESECGoodsActivityGroupBuyMarqueeView, IESECGoodsDetailTracker, UIImageView, IESECGoodsActivityCountdownView, IESECGoodsPriceLabel, IESECGoodsDetailParameters, UILabel;
@protocol IESECGoodsPriceLabelModel;

@interface IESECGoodsActivityGroupBuyView : UIView

@property (retain, nonatomic) id<IESECGoodsPriceLabelModel> activityPrice;
@property (retain, nonatomic) IESECGoodsDetailTracker *tracker;
@property (nonatomic) BOOL showMarqueeView;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) struct CGSize { double width; double height; } rectCornerRadius;
@property (retain, nonatomic) UILabel *activityNameLabel;
@property (retain, nonatomic) IESECGoodsDiscountPriceView *discountPriceView;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *marketPriceLabel;
@property (retain, nonatomic) UILabel *countdownTextLabel;
@property (retain, nonatomic) IESECGoodsActivityCountdownView *countdownView;
@property (retain, nonatomic) UIImageView *ipLogoImageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *ipCountdownTipLabel;
@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) IESECGoodsGroupBuyingModel *groupBuyInfo;
@property (retain, nonatomic) IESECGoodsActivityGroupBuyMarqueeView *marqueeView;

+ (double)heightForGroupBuyView:(id)a0;
+ (Class)layerClass;

- (void)maskToRectCorner:(unsigned long long)a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (void)setupGradientLayer;
- (void)addBackgroundImage;
- (void)setupOriginLayout;
- (void)activityDidUpdate:(id)a0;
- (void)updatePriceLabels;
- (void)updateDiscountPriceView;
- (id)initWithParameters:(id)a0 tracker:(id)a1 showMarqueeView:(BOOL)a2;
- (void)refreshViewWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)updateContent;
- (id)gradientLayer;
- (void)layoutSubviews;
- (void)setupUI;

@end
