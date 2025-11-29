@interface ACCEditPageResourcePreloadConfig : NSObject

+ (id)editMusicConfig;
+ (id)sortedEditMusicStrategyConfig;
+ (id)preloadResourceConfig;
+ (id)recordMusicConfig;
+ (id)sortedRecordMusicStrategyConfig;
+ (id)editTextTemplateConfig;
+ (id)sortedEditTextTemplateStrategyConfig;
+ (id)sortedEditTextFontStrategyConfig;
+ (id)editTextFontConfig;
+ (id)coverTemplateConfig;
+ (id)sortedCoverTemplateStrategyConfig;
+ (id)sortedFirstTabCoverTemplateStrategyConfig;
+ (id)firstTabCoverTemplateConfig;
+ (BOOL)enablePreloadEditMusicPanelResource;
+ (id)preloadEditMusicPanelResourceCount;
+ (BOOL)enablePreloadRecordMusicPanelResource;
+ (id)preloadRecordMusicPanelResourceCount;
+ (BOOL)enablePreloadEditTextTemplateResource;
+ (id)preloadEditTextTemplateResourceCount;
+ (BOOL)enablePreloadEditTextFontResource;
+ (id)preloadEditTextFontResourceCount;
+ (BOOL)enablePreloadCoverTemplateList;
+ (BOOL)enablePreloadCoverTemplateResource;
+ (id)preloadCoverTemplateResourceCount;
+ (BOOL)enablePreloadFirstTabCoverTemplateResource;
+ (id)preloadFirstTabCoverTemplateResourceCount;

@end
