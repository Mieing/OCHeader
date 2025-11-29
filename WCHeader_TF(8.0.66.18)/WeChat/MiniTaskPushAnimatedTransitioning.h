@class MinimizeTaskData, NSString, UIView, UIViewController;
@protocol MiniTaskTransitionAnimationDelegate;

@interface MiniTaskPushAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>

@property (nonatomic) BOOL isInteracting;
@property (nonatomic) BOOL isPresent;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MinimizeTaskData *launchTaskData;
@property (weak, nonatomic) id<MiniTaskTransitionAnimationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;

@end
