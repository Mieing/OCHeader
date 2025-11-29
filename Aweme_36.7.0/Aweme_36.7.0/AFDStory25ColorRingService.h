@class NSSet, NSString, AFDColorRingViewManager;

@interface AFDStory25ColorRingService : HTSService <AFDStory25ColorRingService>

@property (retain, nonatomic) NSSet *unavailableScene;
@property (retain, nonatomic) AFDColorRingViewManager *colorRingViewManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isStory25ColorRingEnable;
- (BOOL)isStory25ColorRingAvailableForScene:(id)a0;
- (double)ringAvatarRatio;
- (BOOL)shouldColorRingEnableClickLoading;
- (long long)maxClickLoadingMs;
- (BOOL)forceClickLoadingRouteToStoryFeed;
- (id)createFacadeWithConfig:(id)a0;
- (id)getColorRingSceneWithReferString:(id)a0;
- (id)story25SkylightColorRingInfo;
- (id)imSkylightColorRingDisplayConfigWithType:(long long)a0 colorRingStatus:(long long)a1;
- (id)storyAwemeModelCacheManager;
- (BOOL)shouldPreloadReadStoryForCurrentUser;
- (BOOL)shouldUseNewTransition;
- (id)commentLongPressRingView;
- (void).cxx_destruct;

@end
