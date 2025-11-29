@class NSString;

@interface AWEAwemeDetailTransitionController : AWEAwemeNewDetailBaseController <AWEAwemeDetailTransitionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteShareFissionInnerFeedDOUYINLiteAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINLGAdapterClass;

- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (void)willStartAnimationWithToCP:(id)a0 withFromCP:(id)a1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transitionDidStartTransitionWithContext:(id)a0;
- (void)transitionPerformCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transitionDidCancelPercentDrivenTransitionWithContext:(id)a0;
- (void)transtionCustomDidPopDoneTransitionWithContext:(id)a0;
- (id)aAWELiteShareFissionInnerFeedDOUYINLiteAdapter;
- (BOOL)isTransitionTriggerDirectionDownScene;
- (id)__searchIDForXiguaVideo;
- (id)__searchResultIDForXiguaVideo;
- (id)preferredTransitionProviderClassNameForContext:(id)a0;
- (BOOL)isDisableTransitionTriggerDirectionUpScene;
- (BOOL)enableSearchOptimizeLiveCloseRoom;
- (void)clearTableViewBounces;
- (id)aAWEMainModuleServiceDOUYINLGAdapter;
- (void)__trackXiGuaVideoLeftSlideWithModel:(id)a0;
- (void)recoverTableViewBounces;
- (double)animationDuration;
- (id)currentInteractionController;

@end
