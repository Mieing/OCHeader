@class NSString;
@protocol AWETransitionContextProvider;

@interface AWETransitionTemplateInteractionController : NSObject <UIViewControllerInteractiveTransitioning>

@property (retain, nonatomic) id<AWETransitionContextProvider> contextProvider;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithContextProvider:(id)a0;

- (void)startCustomPanDrivenTransition:(id)a0;
- (void)startFreeTransition:(id)a0;
- (void).cxx_destruct;
- (void)startInteractiveTransition:(id)a0;

@end
