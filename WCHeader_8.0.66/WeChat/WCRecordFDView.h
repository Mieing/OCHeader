@class UIColor, MMTimer, NSString, CALayer, NSMutableArray;

@interface WCRecordFDView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) MMTimer *timer;
@property (retain, nonatomic) NSMutableArray *arrPeakPower;
@property (retain, nonatomic) NSMutableArray *arrCurAnimation;
@property (nonatomic) int animatingCount;
@property (nonatomic) unsigned int timerCount;
@property (nonatomic) unsigned int pillarsCount;
@property (nonatomic) float maxHeight;
@property (retain, nonatomic) UIColor *pillarColor;
@property (nonatomic) double pillarWidth;
@property (retain, nonatomic) CALayer *displayLayer;
@property (retain, nonatomic) NSMutableArray *curFeedbackPillars;
@property (retain, nonatomic) NSMutableArray *arrPillars;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 PillarCount:(unsigned int)a1 MaxHeight:(float)a2 pillarColor:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 PillarCount:(unsigned int)a1 MaxHeight:(float)a2 pillarColor:(id)a3 pillarWidth:(double)a4;
- (void)dealloc;
- (void)initPillars;
- (void)dynamicSetPillarsColor:(id)a0;
- (void)setPeakPower:(float)a0;
- (void)generateAnimationWithPeakPower:(float)a0;
- (void)configPillarsWithPeakPower:(float)a0;
- (void)configPillars:(id)a0 PeakPower:(float)a1 Delay:(float)a2 AddGroup:(BOOL)a3;
- (id)configPillar:(id)a0 PeakPower:(float)a1 Delay:(float)a2 AddGroup:(BOOL)a3;
- (id)getAnimationGroupWithStartFrom:(float)a0 StartTo:(float)a1 EndFrom:(float)a2 EndTo:(float)a3;
- (unsigned int)genCurrentTime;
- (void)configWithPillar:(id)a0 Idex:(unsigned long long)a1;
- (unsigned long long)genCurrentTimeInMs;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)startAnimateTimer;
- (void)stopTimer;
- (void)onAnimateTimerCallback;
- (id)getAnimationGroup;
- (void).cxx_destruct;

@end
