@class IESECGoodsPriceLabel;

@interface IESECRelationDepositComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) IESECGoodsPriceLabel *depositLabel;

+ (id /* block */)deposit;
+ (id /* block */)depositWithPriceWidth:(double)a0;
+ (double)depositWidthWithModel:(id)a0;
+ (id /* block */)depositWithPriceWidth:(double)a0 Padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 ShowSuffix:(BOOL)a2;

- (void)updateUIWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
