@class UIImageView, NSString, UIView;

@interface IESECShopGoodsCartComponent : UIView <IESECLLComponent> {
    UIView *_containerView;
    UIImageView *_cartButton;
    id /* block */ _action;
    BOOL _isButtonEnabled;
    NSString *_toastText;
}

+ (id /* block */)cartButtonWithAction:(id /* block */)a0 isDisable:(BOOL)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id /* block */)cartButtonWithAction:(id /* block */)a0 isDisable:(BOOL)a1;

- (void)updateUIWithModel:(id)a0;
- (void)handleButtonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureSubviews;

@end
