@class NSString;
@protocol UINavigationControllerDelegate;

@interface AWETransitionNavigationControllerProxyDelegate : NSObject <UINavigationControllerDelegate>

@property (weak, nonatomic) id<UINavigationControllerDelegate> originalDelegate;
@property (nonatomic) BOOL originalEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithDelegate:(id)a0;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;

@end
