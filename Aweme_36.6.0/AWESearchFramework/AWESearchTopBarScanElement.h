@class UIButton, UIImage;

@interface AWESearchTopBarScanElement : AWESearchTopBarBaseElement

@property (retain, nonatomic) UIButton *scanButton;
@property (retain, nonatomic) UIImage *scanIconLightImage;
@property (retain, nonatomic) UIImage *scanIconDarkImage;

- (unsigned long long)preferSearchTheme;
- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configNewSearchTheme:(unsigned long long)a0 currentModernFeedUITheme:(unsigned long long)a1 uiThemeStyle:(long long)a2;
- (void)scanButtonClicked;
- (long long)scanEntryOptimizeIconType;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithDelegate:(id)a0 context:(id)a1;

@end
