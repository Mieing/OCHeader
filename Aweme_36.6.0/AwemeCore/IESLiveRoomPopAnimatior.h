@class NSString;

@interface IESLiveRoomPopAnimatior : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL isDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animatorForDismiss:(BOOL)a0;

- (void)performPopAnimation:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;

@end
