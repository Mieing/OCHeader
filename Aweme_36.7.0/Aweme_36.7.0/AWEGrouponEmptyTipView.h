@class UILabel, UIButton, AWEGrouponPageContext;

@interface AWEGrouponEmptyTipView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *jumpButton;
@property (retain, nonatomic) AWEGrouponPageContext *pageContext;

- (id)trackParams;
- (void)registerNotification;
- (id)jumpButtonTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageContext:(id)a1;
- (void)needPersonalRecommendChanged:(id)a0;
- (BOOL)needChangeColorToThemeLight;
- (void)recordViewShow;
- (void)action;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
