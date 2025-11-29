@class UIColor, IESECMallInnerFeedPriceConfig, UILabel, UIView;

@interface IESECMallInnerFeedPriceView : UIView

@property (retain, nonatomic) UILabel *priceLogoLabel;
@property (retain, nonatomic) UILabel *priceInfoLabel;
@property (retain, nonatomic) UILabel *priceSuffixLabel;
@property (retain, nonatomic) UILabel *priceTextLabel;
@property (retain, nonatomic) UILabel *saleInfoLabel;
@property (retain, nonatomic) UIColor *priceColor;
@property (retain, nonatomic) IESECMallInnerFeedPriceConfig *config;
@property (retain, nonatomic) UIView *additionView;

- (void)updateWithPrice:(id)a0 priceSuffix:(id)a1 priceDescText:(id)a2 sales:(id)a3;
- (double)getGapSpace;
- (void)addAdditionView:(id)a0 width:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
