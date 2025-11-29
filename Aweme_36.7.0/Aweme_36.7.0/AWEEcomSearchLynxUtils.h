@interface AWEEcomSearchLynxUtils : NSObject

+ (BOOL)isGeckoSearchDynamicWithScene:(id)a0;
+ (id)progressSearchDynamic:(id)a0 schema:(id)a1 searchScene:(id)a2;
+ (void)trackLynxLoadInfoWithModel:(id)a0 searchScene:(id)a1;
+ (BOOL)isChunkAwemeMiniPack;
+ (BOOL)cotCardOnlyInvalidIndexPathLayout;
+ (id)schemaConfigKey:(id)a0;
+ (BOOL)isLynxPreprocessOptimize;
+ (BOOL)shouldFilterOutCard:(id)a0;
+ (BOOL)shouldUseAnnieXWithSrc:(id)a0 dynamicPatch:(id)a1;
+ (id)lynxCardPreloadModels:(id)a0 enterFrom:(id)a1;
+ (id)ecSearchLynxCDNMaxDownloadTimeout;
+ (id)ecSearchLynxSkipCDNChannels;
+ (void)prepareEstimatedHeight:(id)a0;
+ (id)ecSearchLynxSkipVerifyChannels;
+ (BOOL)lynxUpdateLayoutMaxDelayCOTCardSkipDisable;
+ (double)lynxUpdateLayoutMaxDelay;
+ (double)lynxUpdateLayoutAfterDelay;
+ (long long)lynxCardReuseMethod:(id)a0;
+ (id)getTabPreloadConfig:(id)a0 enterFrom:(id)a1;
+ (id)lynxCardEstimateHeightConfig;
+ (id)lynxCardReuseConfig;
+ (void)trackLynxLoadInfoWithSchema:(id)a0 localGeckoVersion:(id)a1 searchScene:(id)a2 callback:(id /* block */)a3;
+ (id)progressSearchDynamicWithSchema:(id)a0 useSurl:(BOOL)a1 searchScene:(id)a2 callback:(id /* block */)a3;
+ (id)ecSearchLynxFilterConfig;
+ (void)geckoResourcePreloadForTab:(id)a0;
+ (BOOL)isGoodsCardLynx;
+ (void)trackPreload:(id)a0 searchInfoDict:(id)a1 isFirstScreen:(BOOL)a2;

@end
