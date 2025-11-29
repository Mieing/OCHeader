@class UIColor, NSString, UILabel, UIView, HTSVideoProgressView;

@interface AWEStudioVideoProgressView : UIView <AWEVideoProgressViewProtocol, AWEVideoProgressViewColorState>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *standardDurationLabel;
@property (retain, nonatomic) HTSVideoProgressView *progressView;
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
- (void)updateViewWithProgress:(double)a0 marks:(id)a1 duration:(double)a2 totalTime:(double)a3 animated:(BOOL)a4;
- (void)blinkMarkAtCurrentProgress:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTrackTintColor:(id)a0;
- (id)trackTintColor;
- (void)setupUI;

@end
