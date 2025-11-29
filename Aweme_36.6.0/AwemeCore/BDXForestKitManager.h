@interface BDXForestKitManager : NSObject

+ (id)defaultForestKit;
+ (void)closeSessionWithSchemaParams:(id)a0 forestKit:(id)a1;
+ (void)didClientAIForestPreloadEventReceived:(id)a0;
+ (BOOL)isHttpUrlString:(id)a0;
+ (BOOL)isForestEnabledWithSchemaParam:(id)a0;
+ (BOOL)isForestEnabledWithSchemaParam:(id)a0 url:(id)a1 fromAnnieX:(BOOL)a2;
+ (BOOL)isForestEnabledWithSchemaParam:(id)a0 url:(id)a1 fromAnnieX:(BOOL)a2 isFromLynx:(id)a3;
+ (long long)forestEnableTypeWithSchemaParam:(id)a0 url:(id)a1 fromAnnieX:(BOOL)a2 isFromLynx:(id)a3 enableTTNet:(id)a4;
+ (BOOL)supportScheme;
+ (id)urlStringWithoutQueryAndFragment:(id)a0 url:(id)a1;
+ (long long)p_forestEnableTypeWithSchemaParam:(id)a0 url:(id)a1 urlStringWithoutQueryAndFragment:(id)a2 fromAnnieX:(BOOL)a3 isFromLynx:(id)a4 enableTTNet:(id)a5;
+ (BOOL)isOfflineType;
+ (BOOL)p_shouldNotInterceptWeb:(id)a0;
+ (long long)p_forceForestIfOfflineType:(BOOL)a0;
+ (BOOL)p_isInAboutWKList:(id)a0;
+ (id)aboutWKList;
+ (BOOL)isSSREnabled:(id)a0;
+ (long long)preloadTypeWithSchemaParam:(id)a0;
+ (id)useNSURLSessionType:(id)a0;
+ (id)requestParamsForTemplateWithResourceModel:(id)a0 isLynx:(BOOL)a1;
+ (BOOL)isSSRUrlString:(id)a0;
+ (id)p_forestKit:(id)a0;
+ (void)modifyParamsForSSR:(id)a0 isPreload:(BOOL)a1;
+ (id)requestParamsForSubResourceWithResourceModel:(id)a0 isLynx:(BOOL)a1;
+ (void)updateForestGeneralMemCacheSize;
+ (void)updateForestPreloadMemCacheSize;
+ (BOOL)isForestEnabled:(id)a0;
+ (BOOL)isInDelayPreloadList:(id)a0;
+ (BOOL)isInAboutWKList:(id)a0;
+ (BOOL)isInWebStreamLoadList:(id)a0;
+ (BOOL)triggerForestPreload:(id)a0;
+ (BOOL)isLynxGenericFetcherEnabledWithSchemaParam:(id)a0 url:(id)a1;
+ (BOOL)shouldNotInterceptWeb:(id)a0;
+ (id)defaultConfig;
+ (id)requestParams;

@end
