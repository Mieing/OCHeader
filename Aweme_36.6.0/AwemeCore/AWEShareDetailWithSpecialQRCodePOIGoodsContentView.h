@class UIImageView, UILabel, UIView, YYLabel;

@interface AWEShareDetailWithSpecialQRCodePOIGoodsContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) UIView *imageMaskView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *houseIconView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UILabel *poiCountLabel;
@property (retain, nonatomic) UILabel *pricePrefixLabel;
@property (retain, nonatomic) UILabel *pricePrefixSymbolLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *timesLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) YYLabel *discountTag;
@property (retain, nonatomic) UIView *textContainer;
@property (retain, nonatomic) UIView *priceContainer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *lightShadowImageView;
@property (nonatomic) BOOL showPricePrefix;
@property (nonatomic) BOOL showTimes;
@property (nonatomic) BOOL showDiscountTag;
@property (nonatomic) BOOL showOriginalPrice;
@property (nonatomic) BOOL showsSecondLine;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })contentToSaveSize;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (void)updateLabelsWithContext:(id)a0;
- (void)updateLayoutsWithContext:(id)a0;
- (BOOL)shouldShowSecondLineWithName:(id)a0 maxWidth:(double)a1 fontClass:(long long)a2;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;
- (void)setTemplateModel:(id)a0;

@end
