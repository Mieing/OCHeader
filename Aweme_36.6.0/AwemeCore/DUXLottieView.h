@class NSString;

@interface DUXLottieView : LOTAnimationView <DUXAnimationViewProtocol>

@property (nonatomic) BOOL loopAnimation;
@property (nonatomic) double animationProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dux_lottieWithName:(id)a0;
+ (id)dux_lottieWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1;


@end
