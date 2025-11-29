@class NSString;
@protocol DVEPreviewTransitionContextProvider, DVEPreviewTransitionDelegateProtocol;

@interface DVEPreviewTransitionInteractionController : NSObject <UIViewControllerInteractiveTransitioning>

@property (retain, nonatomic) id<DVEPreviewTransitionContextProvider> contextProvider;
@property (weak, nonatomic) id<DVEPreviewTransitionDelegateProtocol> transitionDelegate;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithContextProvider:(id)a0 transitionDelegate:(id)a1;

- (void)startCustomPanDrivenTransition:(id)a0;
- (void).cxx_destruct;
- (void)startInteractiveTransition:(id)a0;

@end
