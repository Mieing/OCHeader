@class UIButton;

@interface IESECRelationAddAndBuyComponent : UIView <IESECLLComponent>

@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIButton *addToCartButton;
@property (retain, nonatomic) UIButton *buyButton;
@property (copy, nonatomic) id /* block */ clickAddButtonBlock;
@property (copy, nonatomic) id /* block */ clickBuyButtonBlock;

+ (id /* block */)addAndBuyWithHeight:(double)a0 cornerRadius:(double)a1 addButtonWidth:(double)a2 buyButtonWidth:(double)a3 cartDisable:(BOOL)a4 buyButtonUserInteractionEnabled:(BOOL)a5;

- (void)updateUIWithModel:(id)a0;
- (void)didTapAddToCartButton;
- (void)didTapBuyButton;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
