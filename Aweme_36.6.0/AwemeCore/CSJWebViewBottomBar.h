@class UIButton, UIView;

@interface CSJWebViewBottomBar : UIView

@property (retain, nonatomic) UIButton *goBackButton;
@property (retain, nonatomic) UIButton *goForwardButton;
@property (retain, nonatomic) UIButton *reloadButton;
@property (retain, nonatomic) UIButton *safariButton;
@property (retain, nonatomic) UIView *line;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setupUI;

@end
