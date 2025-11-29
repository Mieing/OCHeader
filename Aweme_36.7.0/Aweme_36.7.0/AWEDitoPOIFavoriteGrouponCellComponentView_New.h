@class UIView, AWEDitoPOIFavoriteGrouponCellComponentViewModel_New, NSTimer, NSString, AWEPOITagsView, UIImageView, CAShapeLayer, AWEDitoPOIFavoritePageContext, YYLabel, UILabel;

@interface AWEDitoPOIFavoriteGrouponCellComponentView_New : DitoComponentView <CAAnimationDelegate>

@property (weak, nonatomic) AWEDitoPOIFavoriteGrouponCellComponentViewModel_New *viewModel;
@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *invalidLabel;
@property (retain, nonatomic) UIImageView *houseIconView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) AWEPOITagsView *tagsView;
@property (retain, nonatomic) UILabel *pricePrefixLabel;
@property (retain, nonatomic) UILabel *pricePrefixSymbolLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *priceSuffixLabel;
@property (retain, nonatomic) UILabel *timesLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) YYLabel *discountTag;
@property (retain, nonatomic) UILabel *soldCountLabel;
@property (retain, nonatomic) UIView *rightItemsContainer;
@property (retain, nonatomic) UIView *subtitleContainer;
@property (retain, nonatomic) UIView *priceContainer;
@property (retain, nonatomic) UILabel *collectTimeLabel;
@property (retain, nonatomic) YYLabel *cornerLabel;
@property (retain, nonatomic) YYLabel *arrivedLabel;
@property (retain, nonatomic) YYLabel *priceReductionLabel;
@property (retain, nonatomic) YYLabel *flashSaleLabel;
@property (retain, nonatomic) NSTimer *flashSaleTimer;
@property (retain, nonatomic) CAShapeLayer *bgShapeLayer;
@property (nonatomic) BOOL shouldShowLargeMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subtitleFont;

- (void)updateViewModel:(id)a0;
- (double)largeModeSizeWithFont:(double)a0;
- (void)updatePriceReductionTag;
- (void)updateArrivedTag;
- (double)largeModeWithMargin:(double)a0;
- (BOOL)tapGesture:(id)a0 inView:(id)a1;
- (void)startBackgroundAnimation;
- (void)componentViewDidCompleteShow;
- (void)handleTapContainerView:(id)a0;
- (void)updateFlashSaleTag;
- (void)stopFlashSaleCountDown;
- (void)updateFlashSaleCountDown;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)themeDidChange;

@end
