@interface MiniTaskTransitionHelper : NSObject

+ (id)createPresentAnimatedTransitioningWithContext:(id)a0 gestureType:(unsigned int)a1;
+ (id)createDismissedAnimatedTransitioningWithContext:(id)a0 gestureType:(unsigned int)a1;
+ (id)createTransitioningForPresentationWithContext:(id)a0 gestureType:(unsigned int)a1;
+ (id)createTransitioningForDismissalWithContext:(id)a0 gestureType:(unsigned int)a1;
+ (void)updateTransitionContext:(id)a0 withDismissSnapshotImg:(id)a1;
+ (void)notifyContextPresentTransitionEnd:(id)a0 finish:(BOOL)a1;
+ (void)notifyContextDismissTransitionBegin:(id)a0 gestureType:(unsigned int)a1;
+ (void)notifyContextDismissTransitionEnd:(id)a0 gestureType:(unsigned int)a1 finish:(BOOL)a2;

@end
