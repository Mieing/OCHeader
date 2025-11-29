@class UIButton;

@interface IESECTabKitErrorView : UIView

@property (retain, nonatomic) UIButton *retryBtn;
@property (copy, nonatomic) id /* block */ refreshBlock;

- (void)retryTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
