@class NSHashTable;

@interface AWETransitionInterceptorDispatcher : NSObject

@property (retain, nonatomic) NSHashTable *interceptorHashTable;

+ (id)sharedInstance;

- (void)registerInterceptor:(id)a0;
- (void)unregisterInterceptor:(id)a0;
- (BOOL)fullScreenPanGestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)fullScreenPanGestureRecognizer:(id)a0 didEndWithShouldComplete:(BOOL)a1 transitionContext:(id)a2;
- (void)safeEnumerateInterceptorUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
