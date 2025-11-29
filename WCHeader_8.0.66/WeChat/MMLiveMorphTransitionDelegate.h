@class NSString;

@interface MMLiveMorphTransitionDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCurrentContextValidForPresenting;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)presentParametersForCurrentContext;
- (id)videoPresentParametersForCurrentContext;
- (id)videoSnapshotPresentParametersForCurrentContext;
- (id)coverPresentParametersForCurrentContext;
- (id)dismissParametersForCurrentContext;

@end
