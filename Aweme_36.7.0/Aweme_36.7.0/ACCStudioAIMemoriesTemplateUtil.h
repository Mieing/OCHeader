@interface ACCStudioAIMemoriesTemplateUtil : NSObject

+ (BOOL)currentIsAIMemoriesTemplateWithPublishModel:(id)a0;
+ (BOOL)enableAIMemories;
+ (long long)getAIMemoriesLoadingQueryInterval;
+ (BOOL)enableAIMemoriesOneClipFilm;
+ (BOOL)isAIMemoriesTemplate:(id)a0 repoAIMemoriesData:(id)a1;
+ (BOOL)isAIMemoriesTemplate:(id)a0 publishModel:(id)a1;
+ (id)getCurrentAIMemoriesTemplateTrackParamsWithPublishModel:(id)a0;
+ (void)clearRecommendInfoForTemplate:(id)a0 publishModel:(id)a1;
+ (BOOL)enableAIMemoryRecommendMusic;
+ (BOOL)isAIMemoriesMusic:(id)a0 publishModel:(id)a1;
+ (void)clearRecommendInfoIfNeededForAIMemoriesTemplate:(id)a0 publishModel:(id)a1;
+ (BOOL)shouldForbidPlayWhenApplyMusicWithPublishModel:(id)a0;
+ (BOOL)shouldForbidSeekWhenApplyMusicWithPublishModel:(id)a0;
+ (id)getAIMemoriesTemplateCommonTrackParams:(id)a0;
+ (id)getAIMemoriesTemplateTrackParamsForTemplate:(id)a0 publishModel:(id)a1;
+ (long long)getAIMemoriesLoadingShowNoticeConsuming;
+ (long long)getAIMemoriesLoadingDefaultDuration;
+ (id)getAIMemoriesLoadingDescriptionRollerList;
+ (BOOL)isLivePhotoDowngradeAsStaticImageWithPublishModel:(id)a0;
+ (BOOL)enableAIMemoryFollowInherit;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stickerBoxMarginForAIMemories;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stickerBorderViewEdgeInsetsForAIMemories;

@end
