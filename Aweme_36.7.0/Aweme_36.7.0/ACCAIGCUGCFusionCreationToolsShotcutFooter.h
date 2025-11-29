@class UIView;

@interface ACCAIGCUGCFusionCreationToolsShotcutFooter : UICollectionReusableView

@property (retain, nonatomic) UIView *lineView;

+ (id)reuseIdentifier;

- (void)onThemeChanged;
- (void)p_setupViews;
- (void)bindService;
- (BOOL)shouldFitLightModeUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
