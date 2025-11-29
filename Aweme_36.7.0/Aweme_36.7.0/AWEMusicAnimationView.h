@class NSString, NSMutableArray;

@interface AWEMusicAnimationView : UIView <CAAnimationDelegate>

@property (nonatomic) long long targetsCount;
@property (retain, nonatomic) NSMutableArray *animationLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)createAnimationLayerWithImage:(id)a0;
- (id)createAnimationPathWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)createAnimationWithPath:(id)a0 beginTime:(double)a1;
- (id)createAnimationTarget;
- (void)addAnimationWithBegintime:(double)a0 toLayer:(id)a1;
- (void)removeAnimation;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
