@class NSString;

@interface AWEMVConfigTikTok : NSObject <ACCStudioTransitionControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nextTranslationTransitionDelegate;
- (void)translationTransitionDelegateWireToViewController:(id)a0;
- (id)modalTransitionDelegate;
- (void)modalTransitionDelegateWireToViewController:(id)a0;
- (void)setModalTransitionDelegateInteractionControllerForbidSimultaneousScrollViewPanGesture:(BOOL)a0;
- (id)transitionDelegateTnteractionController;
- (id)modalTransitionInteractionController;

@end
