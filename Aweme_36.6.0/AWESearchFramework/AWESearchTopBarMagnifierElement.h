@class UIImageView;

@interface AWESearchTopBarMagnifierElement : AWESearchTopBarBaseElement

@property (retain, nonatomic) UIImageView *iconView;

- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configNewSearchTheme:(unsigned long long)a0 currentModernFeedUITheme:(unsigned long long)a1 uiThemeStyle:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (id)initWithDelegate:(id)a0 context:(id)a1;

@end
