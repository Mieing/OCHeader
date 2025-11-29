@class HTSEventContext, NSString;
@protocol UINavigationControllerDelegate;

@interface IESLiveRoomNavigationMananger : NSObject <UINavigationControllerDelegate, IESLiveRoomNavigationService>

@property (nonatomic) BOOL enableInteractiveGes;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<UINavigationControllerDelegate> lastNaviDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)currentVC;
- (void)setNavigationInteractiveEnable:(BOOL)a0;
- (void)shouldSetNavigationDelegate;
- (void)shouldReleaseNavigationDelegate;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;

@end
