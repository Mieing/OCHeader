@class NSString;

@interface AWEShowShrinkTransitionWrapper : NSObject <AWEModernFullscreenTransitionOuterContextProvider, AWEShowShrinkTransitionWrapperProtocol>

@property (copy, nonatomic) id /* block */ videoHander;
@property (copy, nonatomic) id /* block */ awemeModelHander;
@property (nonatomic) long long preState;
@property (copy, nonatomic) id /* block */ needCallVideoPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modernTransitionContext;
- (BOOL)disableSyncReferString;
- (void)startMagnifyTransition;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (BOOL)shouldUpdatePlayerWhenModelDifferent:(id)a0;
- (long long)preferScaleMode;
- (BOOL)disableSyncScalingMode;
- (BOOL)forbidGenerateFeedSnapshot;
- (void)transitionWillStartAnimation:(id)a0;
- (void)postPlayletTransitionCompleteNotification:(id)a0;
- (void)setVideoPlayerVCHandler:(id /* block */)a0;
- (void)setAwemeModelHandler:(id /* block */)a0;
- (void)recordPushPreState:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
