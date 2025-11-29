@class UILabel, MMEcsPriceViewConfig, NSString;

@interface MMEcsPriceView : UIView

@property (retain, nonatomic) UILabel *currentPriceLabel;
@property (retain, nonatomic) UILabel *currentPriceSuffixLabel;
@property (retain, nonatomic) UILabel *currentPriceDescriptionLabel;
@property (retain, nonatomic) UILabel *listPriceLabel;
@property (retain, nonatomic) UILabel *priceSuffixDescriptionLabel;
@property (retain, nonatomic) MMEcsPriceViewConfig *config;
@property (copy, nonatomic) NSString *currentPriceDescription;
@property (nonatomic) unsigned long long currentPrice;
@property (copy, nonatomic) NSString *currentPriceWording;
@property (copy, nonatomic) NSString *currentPriceSuffix;
@property (nonatomic) unsigned long long listPrice;
@property (copy, nonatomic) NSString *priceSuffixDescription;

+ (double)heightForNormalStateWithConfig:(id)a0;

- (void)prepareForReuse;
- (void)updateWithProductShareItem:(id)a0;
- (id)accessibilityAttributedLabel;
- (id)initWithConfig:(id)a0;
- (void)updateUI;
- (void)updateSubviewsIsHiddenForData;
- (void)layoutSubviews;
- (void)layoutSubviewsVertical;
- (void)layoutSubviewsHorizontal;
- (double)leftSpacingOf:(id)a0;
- (void)initSubViews;
- (void)addObserves;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
