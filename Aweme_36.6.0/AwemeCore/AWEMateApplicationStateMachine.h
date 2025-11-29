@interface AWEMateApplicationStateMachine : NSObject

+ (BOOL)enableMateApplicationApproveOptimize;
+ (BOOL)isHelloStateTransition:(id)a0;
+ (id)approveStateWithCustomClickBlock:(id /* block */)a0;
+ (BOOL)enableMateApplicationApproveOptimizeHello;
+ (id)helloStateWithCustomClickBlock:(id /* block */)a0;
+ (id)lookStateWithCustomClickBlock:(id /* block */)a0;
+ (id)disableInteractState:(id)a0 title:(id)a1;
+ (id)transitionToApproveState:(id)a0;
+ (id)transitionToHelloState:(id)a0;
+ (id)transitionToLookState:(id)a0;
+ (id)transitionToCheckingState:(id)a0;
+ (id)transitionToAddedState:(id)a0;
+ (id)transitionToExpiredState:(id)a0;
+ (BOOL)isApproveStateTransition:(id)a0;

@end
