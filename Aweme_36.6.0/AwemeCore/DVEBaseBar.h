@class DVEStepSlider;

@interface DVEBaseBar : DVEBaseView

@property (retain, nonatomic) DVEStepSlider *slider;
@property (nonatomic) long long panelType;

- (void)buildBaseLayout;
- (void)refreshBar;
- (void)showInView:(id)a0 animation:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismiss:(BOOL)a0;

@end
