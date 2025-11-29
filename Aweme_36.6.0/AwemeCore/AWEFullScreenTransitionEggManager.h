@interface AWEFullScreenTransitionEggManager : NSObject

+ (BOOL)hasFullScreenTransitionEgg:(id)a0;
+ (void)playFullScreenTransitionEggWithAweme:(id)a0 fullScreenBlock:(id /* block */)a1;
+ (id)preRenderFullScreenTransitionEgg:(id)a0 aweme:(id)a1 autoShow:(BOOL)a2 fullScreenBlock:(id /* block */)a3;
+ (void)showTransitionEggView:(id)a0 onView:(id)a1 aweme:(id)a2 eggInfo:(id)a3;
+ (void)playFullScreenTransitionEggWithAweme:(id)a0 imageName:(id)a1 fullScreenBlock:(id /* block */)a2;
+ (void)trackerPreloadEventWithAweme:(id)a0 label:(id)a1 adExtraData:(id)a2;
+ (void)playFullScreenTransitionEgg:(id)a0 aweme:(id)a1 fullScreenBlock:(id /* block */)a2;
+ (void)preloadFullScreenTransitionEggIfNeeded:(id)a0;

@end
