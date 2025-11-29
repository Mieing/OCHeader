@class UITapGestureRecognizer;

@interface AWEIMShareBackgroundContentView : AWEIMGeneralCardView

@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;

- (void)p_coverDidTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
