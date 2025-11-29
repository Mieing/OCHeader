@interface AWEStoryImpl.StoryModuleService : HTSService <AWEStoryModuleService>

- (id)tabService;
- (BOOL)enableWaterfall;
- (id)listService;
- (BOOL)enableRebrandFamiliarData;
- (id)feedViewControllerWithContext:(id)a0;
- (Class)momentHandlerClass;
- (BOOL)isWaterfallFamiliarFeedRefer:(id)a0;
- (BOOL)isWaterfallFamiliarOuterFeedRefer:(id)a0;
- (BOOL)isWaterfallFamiliarDetailRefer:(id)a0;
- (BOOL)is24StoryWith:(id)a0;
- (id)waterfallFamiliarVideoDetailWithAwemeID:(id)a0;
- (BOOL)isStoryDetailTransition;
- (id)createAnimatedNumberViewWithFont:(id)a0;
- (id)sharedAwemeCacheWithCacheScene:(id)a0 capacity:(long long)a1;
- (id)retrieveFamiliarDataController;
- (BOOL)isPublishSuccessWithWaterfallGuideSnackBarWithPublishTask:(id)a0;
- (id)init;

@end
