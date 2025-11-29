@class NSString;
@protocol WAMenuAnimatedTransitionProtocol;

@interface WAMenuBaseAnimatedTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) long long operationType;
@property (weak, nonatomic) id<WAMenuAnimatedTransitionProtocol> transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
