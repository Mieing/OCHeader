@class UIImageView, NSString, UIViewController;

@interface MiniTaskInteractionGuidePushTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>

@property (weak, nonatomic) UIImageView *fakeSnapShotImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;

@end
