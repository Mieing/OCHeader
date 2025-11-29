@class IESECPriceLabel;

@interface IESECShopAfterLiveCardProductPriceGroup : UIView <IESECLLComponent>

@property (retain, nonatomic) IESECPriceLabel *mainLabel;
@property (retain, nonatomic) IESECPriceLabel *marketLabel;

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
