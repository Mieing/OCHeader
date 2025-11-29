@class UIImageView, UIView;

@interface AWEIMSkylightDotView : UIView

@property (retain, nonatomic) UIView *dotBgView;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIImageView *iconUrlView;

- (void)setDotColorString:(id)a0;
- (void)setDotUrl:(id)a0 placeHolder:(id)a1;
- (void)hidSubviews;
- (void)setDotBackgroundColor:(id)a0;
- (void)setDotBgColor:(id)a0;
- (BOOL)isAppear;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setDotColor:(id)a0;

@end
