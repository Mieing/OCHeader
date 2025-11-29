@class NSMutableDictionary;

@interface AWEPOILynxTemplatePrefetcher : NSObject

@property (retain, nonatomic) NSMutableDictionary *groupURLS;
@property (retain, nonatomic) NSMutableDictionary *shouldCheckDownloadAtStart;

+ (BOOL)canOptimize;
+ (BOOL)canOptimize;
+ (id)shared;

- (void)preloadTemplateToMemoryForGroups:(id)a0;
- (void)preloadTemplateToMemoryForGroups:(id)a0;
- (void)prefetchTemplate;
- (void)prefetchTemplate;
- (id)startOptimizeMethodWithBizCode:(id)a0 page:(id)a1 name:(id)a2 strategies:(id)a3;
- (id)startOptimizeMethodWithBizCode:(id)a0 page:(id)a1 name:(id)a2 strategies:(id)a3;
- (id)verifyAndPreloadTemplatesToMemory:(id)a0;
- (id)verifyAndPreloadTemplatesToMemory:(id)a0;
- (void)preloadTemplatesToMemory:(id)a0;
- (void)preloadTemplatesToMemory:(id)a0;
- (id)verifyAndPrefetchChannels:(id)a0;
- (id)verifyAndPrefetchChannels:(id)a0;
- (void)prefetchChannels:(id)a0;
- (void)prefetchChannels:(id)a0;
- (void)registTemplatePrefetchURLS:(id)a0 forGroup:(id)a1;
- (void)setEnableDownloadAtStart:(BOOL)a0 forGroup:(id)a1;
- (void)trackChannelDownloadWithChannelName:(id)a0 result:(id)a1;
- (BOOL)shouldDoPrefetchForChannel:(id)a0;
- (void)executeLazyRegister;
- (void)prefetchTemplateForGroup:(id)a0;
- (id)libraOrSettingsConfig;
- (id)libraOrSettingsOptChannels;
- (void)trackTemplatePreloadWithTemplateUrl:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
