@class IESECGoodsPriceLabel, UILabel, UIView;

@interface IESECWinLiveTabMarketingPriceComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *marketingPriceLabel;
@property (retain, nonatomic) UIView *buyButtonBackView;
@property (retain, nonatomic) UILabel *buyLabel;

+ (id /* block */)marketingPriceWithHeight:(double)a0;

- (void)updateUIWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
