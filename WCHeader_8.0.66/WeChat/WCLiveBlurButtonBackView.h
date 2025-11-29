@class UIImageView, MMUIButton;

@interface WCLiveBlurButtonBackView : UIView

@property (retain, nonatomic) UIImageView *blurImgView;
@property (retain, nonatomic) MMUIButton *topButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutBlurImgView;
- (void)layoutTopButton;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)recoverRealTimeBlur;
- (void)setBlurImage:(id)a0;
- (void).cxx_destruct;

@end
