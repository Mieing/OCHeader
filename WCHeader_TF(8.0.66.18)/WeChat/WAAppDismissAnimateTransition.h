@class NSString, WAWebViewController, UIViewController;

@interface WAAppDismissAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>

@property (nonatomic) BOOL isInteracting;
@property (weak, nonatomic) WAWebViewController *currentWebviewController;
@property (nonatomic) BOOL maskEnable;
@property (nonatomic) BOOL needZoom;
@property (nonatomic) long long orientationToRestore;
@property (nonatomic) BOOL forbidRoundCorner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;

@end
