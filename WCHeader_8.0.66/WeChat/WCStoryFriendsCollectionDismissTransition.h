@class NSString, UIViewController;

@interface WCStoryFriendsCollectionDismissTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>

@property (nonatomic) BOOL isInteracting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;

@end
