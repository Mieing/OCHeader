@class NSString, WAWebViewController, UIViewController;

@interface WASystemPopAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>

@property (nonatomic) BOOL isInteracting;
@property (weak, nonatomic) WAWebViewController *currentWebviewController;
@property (nonatomic) BOOL forbidInsertToVC;
@property (nonatomic) BOOL maskEnable;
@property (nonatomic) BOOL toVCOffsetEnable;
@property (nonatomic) BOOL forbidShadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;

- (id)initWithCurrentViewController:(id)a0;
- (id)init;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
