@class NSString, NSObject;
@protocol AWEStoryDetailTransitionOuterProvider;

@interface AWEStoryDetailMagnifyTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) NSObject<AWEStoryDetailTransitionOuterProvider> *fromCP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (id)addMaskViewToContainerView:(id)a0;
- (id)addTargetViewToContainerView:(id)a0 fromContainer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateEndViewFrameForContainer:(id)a0 toPlayer:(id)a1;
- (void)hideTabBarWithAnimation:(id)a0 containerView:(id)a1 duration:(double)a2 context:(id)a3;
- (void)updateToPlayer:(id)a0 WithFromContainer:(id)a1 playerController:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
