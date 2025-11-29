@class UIColor, HTSLiveAmazingBackgroundView, UIView;

@interface IESLiveSeekProgressIndicator : UIView

@property (retain, nonatomic) UIView *progressBar;
@property (retain, nonatomic) UIView *panView;
@property (retain, nonatomic) UIView *panBg;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *progressView;
@property (retain, nonatomic) UIColor *progressIndicatorStartColor;
@property (retain, nonatomic) UIColor *progressIndicatorEndColor;
@property (nonatomic) double r1;
@property (nonatomic) double g1;
@property (nonatomic) double b1;
@property (nonatomic) double r2;
@property (nonatomic) double g2;
@property (nonatomic) double b2;

- (void)updateOrientation:(BOOL)a0;
- (id)getColorAtProgress:(double)a0;
- (void)initRGBParams;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithProgress:(double)a0;
- (void)setIndicatorHidden:(BOOL)a0;

@end
