@class UIImage, AWESearchBarButton;

@interface AWESearchTopBarClearTextElement : AWESearchTopBarBaseElement

@property (retain, nonatomic) AWESearchBarButton *clearButton;
@property (retain, nonatomic) UIImage *clearIconLightImage;
@property (retain, nonatomic) UIImage *clearIconDarkImage;
@property (retain, nonatomic) UIImage *originalImage;
@property (nonatomic) BOOL forceUniversal;

- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configNewSearchTheme:(unsigned long long)a0 currentModernFeedUITheme:(unsigned long long)a1 uiThemeStyle:(long long)a2;
- (void)configNewSearchBarAreaWithTheme:(unsigned long long)a0;
- (void)forceUseUniversalStyle:(BOOL)a0;
- (void)clearButtonClicked;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithDelegate:(id)a0 context:(id)a1;

@end
