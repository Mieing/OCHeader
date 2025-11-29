@class WCRedesignVerifyCodeTextItem, WCRedesignTextItem;

@interface WCAccountNewPhoneVerifyPageView : UIView

@property (nonatomic) unsigned long long page;
@property (retain, nonatomic) WCRedesignTextItem *passwordTextItem;
@property (retain, nonatomic) WCRedesignVerifyCodeTextItem *verifyCodeTextItem;
@property (copy, nonatomic) id /* block */ tapVerifyCodeButtonHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initItems;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)changeToPage:(unsigned long long)a0;
- (void).cxx_destruct;

@end
