@interface ACCEditorGenericTemplateUtils : NSObject

+ (BOOL)getCollectStatusWhenFetchTemplate;
+ (id)prestChangeTypeToString:(unsigned long long)a0;
+ (void)logPresetDiff:(id)a0 templateId:(id)a1 apply:(BOOL)a2;
+ (BOOL)hasAppliedTemplate:(id)a0;
+ (BOOL)hasAppliedGenericTemplateOrEffect:(id)a0;
+ (BOOL)appliedMusicBeatsTemplate:(id)a0;
+ (id)getTemplateApplyAlignMode:(id)a0 publishModel:(id)a1;
+ (id)resortTemplates:(id)a0 needHandleFirst:(BOOL)a1 followInsertModel:(id)a2;
+ (unsigned long long)checkMultiPhotoOneClickFilmingScene:(unsigned long long)a0 publishModel:(id)a1;
+ (unsigned long long)requestOneClickFilmListScene:(id)a0;
+ (BOOL)enableGenericEffectFavoriteEntrance:(id)a0 repository:(id)a1;
+ (BOOL)enableGenericEffectCacheToRecentUsed:(id)a0;

@end
