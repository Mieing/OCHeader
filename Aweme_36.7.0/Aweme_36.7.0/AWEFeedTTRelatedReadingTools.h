@interface AWEFeedTTRelatedReadingTools : NSObject

+ (BOOL)showFeedBottomArticleBarSuperiorToHotSearch:(id)a0 otherParams:(id)a1;
+ (BOOL)showFeedBottomArticleBarInferiorToHotSearch:(id)a0 otherParams:(id)a1;
+ (BOOL)isToutiaoInstalled;
+ (BOOL)isToutiaoLiteInstalled;
+ (id)currentAppName;
+ (id)reconstructOpenUrlString:(id)a0 withExtraParams:(id)a1;
+ (id)appendExtraParams:(id)a0 toUrlString:(id)a1;
+ (long long)sceneForReferString:(id)a0;
+ (id)realDiversionTypeWithModel:(id)a0 didOpenApp:(BOOL)a1;
+ (id)isToutiaoInstalledString;
+ (long long)diversionChoiceType;
+ (id)diversionTypeWithModel:(id)a0;
+ (long long)currentRelatedReadingSchemeType:(id)a0;
+ (id)extractParamsFromStartPage:(id)a0 key:(id)a1;
+ (id)extractParamsFromUrl:(id)a0 key:(id)a1;
+ (void)preloadSchemaIfNeeded:(id)a0 scene:(long long)a1 model:(id)a2;
+ (BOOL)currentSceneIsEnabledDisplayToutiaoBar:(long long)a0;
+ (void)updateDiversionChoiceType:(long long)a0;
+ (BOOL)preloadSchemaEnable:(id)a0;
+ (id)extractLogDataWithModel:(id)a0;
+ (BOOL)sceneIsAvailable:(id)a0;

@end
