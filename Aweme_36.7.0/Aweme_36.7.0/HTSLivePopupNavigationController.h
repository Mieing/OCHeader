@class HTSLivePopupTransition, NSString, HTSLivePopupNavigationBar, UIView, IESLivePopupItem;
@protocol IESLiveAudienceRoomAwareness;

@interface HTSLivePopupNavigationController : UINavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) double pushTransitionDuration;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> awareness;
@property (retain, nonatomic) HTSLivePopupTransition *animator;
@property (retain, nonatomic) HTSLivePopupNavigationBar *navBar;
@property (nonatomic) BOOL disableSwipeGesture;
@property (nonatomic) BOOL forceAnimated;
@property (weak, nonatomic) IESLivePopupItem *popupItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0 withDisableGesture:(BOOL)a1;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
