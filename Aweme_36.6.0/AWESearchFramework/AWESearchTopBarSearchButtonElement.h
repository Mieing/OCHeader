@class UILabel;

@interface AWESearchTopBarSearchButtonElement : AWESearchTopBarBaseElement

@property (retain, nonatomic) UILabel *searchButton;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandedBounds;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitAreaExpandedInsets;

- (void)bindAction;
- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configNewSearchTheme:(unsigned long long)a0 currentModernFeedUITheme:(unsigned long long)a1 uiThemeStyle:(long long)a2;
- (void)searchButtonTapped:(id)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)setTextFont:(id)a0;
- (id)initWithDelegate:(id)a0 context:(id)a1;

@end
