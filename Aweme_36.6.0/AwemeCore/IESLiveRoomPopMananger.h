@class HTSEventContext, NSString, UIPercentDrivenInteractiveTransition, UIPanGestureRecognizer;
@protocol IESLiveRoomService, IESLiveRoomPopService;

@interface IESLiveRoomPopMananger : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *popGesture;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *animator;
@property (retain, nonatomic) id<IESLiveRoomPopService> roomMinimizeManager;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (nonatomic) BOOL shouldBegin;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ popActionBlock;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateFullscreenPopTransition:(BOOL)a0;
- (void)gestureChanged:(id)a0 isDismiss:(BOOL)a1;
- (void)showGestureChanged:(id)a0;
- (void)produceScreenShotImageWithProgress:(double)a0;
- (void)addPopGestureForView:(id)a0 type:(unsigned long long)a1;
- (void)popGestureActions:(id)a0;
- (BOOL)p_shouldBeginWithVelocity:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;

@end
