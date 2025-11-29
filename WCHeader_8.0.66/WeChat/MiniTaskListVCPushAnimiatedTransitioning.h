@class UIViewController, MinimizeTaskData, UIImageView, UIImage, UIView, UILabel, NSString;
@protocol MiniTaskTransitionAnimationDelegate;

@interface MiniTaskListVCPushAnimiatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>

@property (nonatomic) BOOL isInteracting;
@property (nonatomic) BOOL isPresent;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *fakeSnapshot;
@property (retain, nonatomic) UIView *fakeSnapshotMask;
@property (retain, nonatomic) MinimizeTaskData *launchTaskData;
@property (weak, nonatomic) id<MiniTaskTransitionAnimationDelegate> delegate;
@property (nonatomic) unsigned int animationType;
@property (retain, nonatomic) UIView *fakeSnapshotShadowView;
@property (retain, nonatomic) UIView *educationLabel;
@property (retain, nonatomic) UIView *exitButton;
@property (retain, nonatomic) UIImage *guideContextfakeSnapshotImage;
@property (retain, nonatomic) UILabel *guideContextEducationLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;

@end
