@class MMLiveLikeAnimationUtil, MMTimer, NSArray;

@interface WCAdLiveLikeAnimationView : MMUIView

@property (retain, nonatomic) MMLiveLikeAnimationUtil *liveLikeAnimationUtil;
@property (retain, nonatomic) MMTimer *animationTimer;
@property (nonatomic) BOOL pauseFlag;
@property (nonatomic) double animationInterval;
@property (retain, nonatomic) NSArray *cheerIconList;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animationInterval:(double)a1 cheerIconList:(id)a2;
- (void)initView;
- (void)dealloc;
- (void)startAnimation;
- (void)stopAnimation;
- (void)displayLiveLikeAnimation;
- (void).cxx_destruct;

@end
