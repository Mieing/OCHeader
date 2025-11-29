@interface AWESearchDynamicResourceManager : AWESearchCachalotDynamicResourceManager

+ (BOOL)willUseSurl:(id)a0 inSearchScene:(id)a1 channel:(id)a2 isCachalot:(BOOL)a3;
+ (id)findSceneConf:(id)a0;
+ (id)legacyConf;
+ (BOOL)enableSurlSupportInSearchScene:(id)a0 isCachalot:(BOOL)a1;

- (void)removeNodesInSurlRecord:(id)a0;
- (id /* block */)wrappedAWEListDataBlock:(id /* block */)a0 dynamicPatchExtractBlock:(id /* block */)a1;
- (id)initWithScene:(id)a0;

@end
