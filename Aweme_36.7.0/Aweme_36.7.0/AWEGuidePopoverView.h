@class UILabel, DUXButton, UIView;

@interface AWEGuidePopoverView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) DUXButton *guideLinkButton;
@property (copy, nonatomic) id /* block */ tapBlock;

+ (id)popoverViewWithTapBlock:(id /* block */)a0;

- (void)setupBackgroundAndShadow;
- (void)handleButtonTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
