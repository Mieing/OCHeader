@class UIImage, AWESearchBarButton;

@interface AWESearchTopBarReturnElement : AWESearchTopBarBaseElement

@property (retain, nonatomic) AWESearchBarButton *returnButton;
@property (retain, nonatomic) UIImage *returnIconLightImage;
@property (retain, nonatomic) UIImage *returnIconDarkImage;

- (void)returnButtonTapped;
- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configNewSearchTheme:(unsigned long long)a0 currentModernFeedUITheme:(unsigned long long)a1 uiThemeStyle:(long long)a2;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (id)initWithDelegate:(id)a0 context:(id)a1;

@end
