@class UILabel, UIImageView;

@interface AWELiveShelfNativeMarketingPriceView : UIView

@property (retain, nonatomic) UILabel *prePriceLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *secondPriceLabel;
@property (retain, nonatomic) UIImageView *thirdPriceIcon;
@property (retain, nonatomic) UILabel *thirdPriceLabel;
@property (nonatomic) BOOL isSecondOrigin;

- (void)configFinalPrice:(id)a0 feConfig:(id)a1;
- (void)configSecondPrice:(id)a0 feConfig:(id)a1;
- (void)configThirdPrice:(id)a0 feConfig:(id)a1;
- (void)updateOverShowView;
- (void)configWithPriceModel:(id)a0 hasLottery:(BOOL)a1 feConfig:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
