@class AWESearchPresentContainerHeaderViewConfig;

@interface AWESearchPresentContainerHeaderView : UIView

@property (retain, nonatomic) AWESearchPresentContainerHeaderViewConfig *config;
@property (copy, nonatomic) id /* block */ closeButtonClicked;
@property (copy, nonatomic) id /* block */ updateFullScreen;
@property (copy, nonatomic) id /* block */ searchButtonClicked;

- (void)onCloseButtonClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)onSearchButtonClicked;
- (void)configureUIWithConfig:(id)a0;
- (void)setupTheme:(unsigned long long)a0;
- (void)onSearchBarClicked;
- (void)configureQueryText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
