@class UIView, NSString, UIImageView, CAShapeLayer, YYLabel, AWEDitoPOIFavoritePageContext, AWEDitoPOIFavoriteChannelCellComponentViewModel, AWEDitoPOIFavoriteRankLabel, UILabel;

@interface AWEDitoPOIFavoriteChannelCellComponentView : DitoComponentView <CAAnimationDelegate>

@property (weak, nonatomic) AWEDitoPOIFavoriteChannelCellComponentViewModel *viewModel;
@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UIView *rightItemsContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *subTextContainer;
@property (retain, nonatomic) UILabel *categoryLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *districtLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIView *tagImgCollectInfoContainer;
@property (retain, nonatomic) AWEDitoPOIFavoriteRankLabel *rankLabel;
@property (retain, nonatomic) YYLabel *popularityLabel;
@property (retain, nonatomic) YYLabel *recommendCountLabel;
@property (retain, nonatomic) UIView *spuContainer;
@property (retain, nonatomic) UIImageView *spuHeadImageView;
@property (retain, nonatomic) UILabel *spuNameLabel;
@property (retain, nonatomic) UILabel *spuPriceLabel;
@property (retain, nonatomic) UILabel *collectTimeLabel;
@property (retain, nonatomic) YYLabel *cornerLabel;
@property (retain, nonatomic) YYLabel *arrivedLabel;
@property (retain, nonatomic) YYLabel *priceReductionLabel;
@property (retain, nonatomic) CAShapeLayer *bgShapeLayer;
@property (nonatomic) BOOL shouldShowLargeMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableAdaptLargeFont;
+ (id)rankAndRecommendLabelFont;
+ (double)insetOfImageAndContainer;
+ (id)subTextFont;
+ (double)imageWidth;

- (void)updateViewModel:(id)a0;
- (void)coverTapped:(id)a0;
- (double)largeModeSizeWithFont:(double)a0;
- (void)updatePriceReductionTag;
- (void)updateArrivedTag;
- (void)discriminateProfileScene;
- (double)largeModeWithMargin:(double)a0;
- (BOOL)tapGesture:(id)a0 inView:(id)a1;
- (void)didSelectedWithAreaString:(id)a0;
- (void)startBackgroundAnimation;
- (void)openPOIDetailWithAreaString:(id)a0;
- (id)spuTextColor;
- (void)componentViewDidCompleteShow;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
