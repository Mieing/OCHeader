@class NSString, NSObject;
@protocol AWEStoryDetailTransitionOuterProvider, IESVideoPlayerProtocol;

@interface AWEStoryDetailShrinkTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) id<IESVideoPlayerProtocol> playController;
@property (retain, nonatomic) NSObject<AWEStoryDetailTransitionOuterProvider> *toCP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (id)addTargetViewToContainerView:(id)a0 fromPlayer:(id)a1;
- (void)updateToContainer:(id)a0 fromPlayer:(id)a1 playerController:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
