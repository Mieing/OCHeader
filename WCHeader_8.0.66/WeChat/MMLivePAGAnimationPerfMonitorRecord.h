@class PAGView;

@interface MMLivePAGAnimationPerfMonitorRecord : MMLiveAnimationPerfMonitorRecord

@property (readonly, weak, nonatomic) PAGView *pagView;

+ (id)getMonitorPAGViewKey:(id)a0;

- (id)initWithPAGView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currPresentFrame;
- (void)parseAnimation;
- (BOOL)isAnimationValid;
- (id)getRecordDesc;
- (id)getUniqueKey;

@end
