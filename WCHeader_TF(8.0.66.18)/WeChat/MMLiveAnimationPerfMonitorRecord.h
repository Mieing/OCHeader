@class UIView;

@interface MMLiveAnimationPerfMonitorRecord : MMLiveUIPerfMonitorRecord

@property (weak, nonatomic) UIView *animationView;
@property (nonatomic) double predictStartTime;
@property (nonatomic) double predictUpdateComposeRectTime;
@property (nonatomic) double animDuration;
@property (nonatomic) BOOL isInfinity;
@property (nonatomic) float animFrameRate;

- (id)initWithAnimationView:(id)a0;
- (void)initDefaultDatas;
- (void)parseAnimation;
- (void)updateComposeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateComposeSizePercent:(double)a0;
- (BOOL)startMonitorIfNeed;
- (BOOL)stopMonitorIfNeed;
- (BOOL)isValid;
- (void)clear;
- (BOOL)isAnimationValid;
- (void)autoUpdateComposeRect;
- (BOOL)autoStartMonitor;
- (BOOL)autoEndMonitor;
- (double)remainStartDelayTime;
- (double)remainAnimDuration;
- (double)remainComposeRectUpdateDelayTime;
- (id)rootView;
- (double)minArea;
- (void).cxx_destruct;

@end
