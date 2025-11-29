@interface AFDPureModePageLandscapeTransitionDelegator : NSObject <UIViewControllerTransitioningDelegate>

@property (class, nonatomic, readonly) AFDPureModePageLandscapeTransitionDelegator *sharedInstance;

@property (nonatomic, weak) void /* function */ presentDataSource;

- (void).cxx_destruct;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;

@end
