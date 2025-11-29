@class UIView;

@interface AWETeenDiscoverGradientView : UIView

@property (retain, nonatomic) UIView *leftGradientView;
@property (retain, nonatomic) UIView *rightGradientView;
@property (copy, nonatomic) id /* block */ themeDidChangeBlock;

- (void)awe_themeDidChange:(long long)a0;
- (void)p_rotated:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
