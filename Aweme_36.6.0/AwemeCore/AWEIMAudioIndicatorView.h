@class UILabel, UIImageView;

@interface AWEIMAudioIndicatorView : UIView

@property (retain, nonatomic) UILabel *bottomLabel;
@property (retain, nonatomic) UIImageView *centerImageView;
@property (retain, nonatomic) UILabel *centerLabel;
@property (nonatomic) BOOL delayDismissing;

+ (id)instance;

- (void)showImage:(id)a0 bottomText:(id)a1;
- (void)p_dismiss;
- (void)showImage:(id)a0 bottomText:(id)a1 timeout:(double)a2;
- (void)p_presentIfNeeded;
- (void)showVolume:(double)a0 bottomText:(id)a1;
- (void)showText:(id)a0 bottomText:(id)a1;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismiss:(BOOL)a0;

@end
