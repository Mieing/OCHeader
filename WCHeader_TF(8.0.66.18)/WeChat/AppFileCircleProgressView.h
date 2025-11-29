@class UIColor, CAShapeLayer, UIView, MMUIButton;
@protocol AppFileCircleProgressViewDelegate;

@interface AppFileCircleProgressView : UIView

@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) CAShapeLayer *bgLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) MMUIButton *pauseBtn;
@property (retain, nonatomic) MMUIButton *playButton;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *fgColor;
@property (nonatomic) BOOL isUpload;
@property (weak, nonatomic) id<AppFileCircleProgressViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initProgressCricle;
- (void)initPlayButton;
- (void)onPlayButtonClick;
- (void)initPauseButton;
- (void)onPauseButtonClick;
- (void)setProgressValue:(double)a0;
- (void)updateProgressViewPauseState:(BOOL)a0;
- (void)updateBgColor:(id)a0 progressColor:(id)a1;
- (void).cxx_destruct;

@end
