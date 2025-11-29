@class MinimizeTaskData, UIImageView, NSString, UIView, UIViewController;
@protocol MiniTaskTransitionAnimationDelegate;

@interface MiniTaskListVCPopAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>

@property (nonatomic) BOOL isInteracting;
@property (nonatomic) BOOL isDismiss;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *fakeSnapshot;
@property (retain, nonatomic) UIView *fakeSnapshotMask;
@property (retain, nonatomic) MinimizeTaskData *launchTaskData;
@property (weak, nonatomic) id<MiniTaskTransitionAnimationDelegate> delegate;
@property (retain, nonatomic) UIView *fakeSnapshotShadowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;

@end
