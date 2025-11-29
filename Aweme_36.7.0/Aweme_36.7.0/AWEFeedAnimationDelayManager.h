@interface AWEFeedAnimationDelayManager : NSObject

+ (BOOL)animationNeedsDelayWithType:(id)a0;
+ (void)playAnimationAfterFeedReady:(id /* block */)a0 identifier:(id)a1;
+ (void)cancelAnimationAfterFeedReadyWithIdentifier:(id)a0;
+ (BOOL)enablePauseOnScrollWithType:(id)a0;
+ (BOOL)enabledWithAnimationType:(id)a0;
+ (void)triggerAnimationAfterFeedReady;
+ (id)config;
+ (BOOL)enabled;

@end
