@class UIColor, NSString, UIView, HTSVideoProgressView;

@interface AWEReshootVideoProgressView : UIView <AWEVideoProgressViewProtocol, AWEVideoProgressViewColorState, AWEVideoProgressReshootProtocol>

@property (retain, nonatomic) HTSVideoProgressView *progressView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *container;
@property (nonatomic) float progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *trackTintColor;
@property (readonly, nonatomic) UIColor *originTrackTintColor;

- (void)setProgress:(float)a0 duration:(double)a1 animated:(BOOL)a2;
- (void)updateViewWithTimeSegments:(id)a0 totalTime:(double)a1;
- (void)updateStandardDurationIndicatorWithLongVideoEnabled:(BOOL)a0 standardDuration:(double)a1 maxDuration:(double)a2;
- (void)setReshootTimeFrom:(double)a0 to:(double)a1 totalDuration:(double)a2;
- (void)blinkMarkAtCurrentProgress:(BOOL)a0;
- (void)blinkReshootProgressBarOnce;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
