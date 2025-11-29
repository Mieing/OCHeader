@class UIImageView, UILabel, UIView;

@interface CJPayImageToastView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) double time;

+ (void)toastImage:(id)a0 title:(id)a1 duration:(double)a2 inWindow:(id)a3;

- (void)hideToast;
- (void)showInWindow:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
