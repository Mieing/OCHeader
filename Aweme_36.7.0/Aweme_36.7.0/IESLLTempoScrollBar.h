@class UIView;

@interface IESLLTempoScrollBar : UIView

@property (retain, nonatomic) UIView *contentView;

- (void)updateWithColor:(id)a0 contentColor:(id)a1 contentWidth:(double)a2 contentHeight:(double)a3 radius:(double)a4;
- (void)updateWithProgress:(double)a0 length:(double)a1 direction:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
