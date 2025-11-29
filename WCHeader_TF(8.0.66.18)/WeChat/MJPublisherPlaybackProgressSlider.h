@class MJTimecodeView, MMUIView;

@interface MJPublisherPlaybackProgressSlider : MJPublisherSlider

@property (retain, nonatomic) MJTimecodeView *timeCodeView;
@property (retain, nonatomic) MMUIView *expandedCircleView;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)updateTimeCodeView;
- (void)updateThumbPosition:(BOOL)a0;
- (void)showExpandedCircleAnimated:(BOOL)a0;
- (void)showTimeCodeAnimated:(BOOL)a0;
- (void)hideExpandedCircleAnimated:(BOOL)a0;
- (void)hideTimeCodeAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
