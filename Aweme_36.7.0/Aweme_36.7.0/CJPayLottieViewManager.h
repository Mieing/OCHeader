@class NSString;

@interface CJPayLottieViewManager : NSObject <CJPayLottieViewProtocol, LOTAnimationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)animationView:(id)a0 didLoadResourcesWithError:(id)a1;
- (void)animationViewDidStart:(id)a0;
- (void)animationViewDidStop:(id)a0;
- (void)animationViewDidPause:(id)a0;
- (BOOL)startAnimationWithView:(id)a0;
- (id)buildLottieViewWithUrl:(id)a0;
- (id)buildLottieViewWithDict:(id)a0;
- (BOOL)isReadyToPlayWithView:(id)a0;
- (BOOL)isPlayingWithView:(id)a0;
- (void)p_trackWithParams:(id)a0 errorDesc:(id)a1;

@end
