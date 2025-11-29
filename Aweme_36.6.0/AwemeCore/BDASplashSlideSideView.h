@class UILabel, UIView;

@interface BDASplashSlideSideView : UIView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *imageView;

- (void)setTipsText:(id)a0;
- (void)loadAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
