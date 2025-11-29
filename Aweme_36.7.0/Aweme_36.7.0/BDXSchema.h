@class NSString;

@interface BDXSchema : NSObject <BDXSchemaProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)addInterceptor:(id)a0;
+ (id)extractURLDetail:(id)a0 withPrefix:(id)a1;
+ (void)removeInterceptor:(id)a0;
+ (BOOL)triggerForestPreload:(id)a0 accessKey:(id)a1 monitorId:(id)a2 isFromAnnieX:(BOOL)a3 customUA:(id)a4 enableSSR:(BOOL)a5 isLynx:(id)a6 webKitParams:(id)a7 lynxKitParams:(id)a8;
+ (id)prefetchUrlWithSchema:(id)a0;
+ (id)interceptorList;
+ (id)resolverWithSchema:(id)a0 contextInfo:(id)a1;
+ (id)resolverWithSchema:(id)a0 contextInfo:(id)a1 paramClass:(Class)a2;
+ (BOOL)isLynxContainerWith:(id)a0;
+ (void)triggerPreprocessWithSchema:(id)a0 context:(id)a1;
+ (void)triggerNewPrefetchIfNeeded:(id)a0 contextInfo:(id)a1;
+ (void)triggerPrefetchIfNeeded:(id)a0 contextInfo:(id)a1;
+ (void)triggerPreLoadIfNeeded:(id)a0 contextInfo:(id)a1;
+ (BOOL)p_disablePreloadWithContext:(id)a0;
+ (void)triggerForestPreloadIfNeeded:(id)a0 context:(id)a1;
+ (BOOL)isMatchRules:(id)a0 with:(id)a1;
+ (BOOL)__hasViewCachedWithSchema:(id)a0 context:(id)a1;
+ (BOOL)canPrefetchInRouter:(id)a0 contextInfo:(id)a1;
+ (void)registerPrefetchInitDataIfNeeded:(id)a0 prefetchSchema:(id)a1 contextInfo:(id)a2;
+ (void)prefetchMonitor:(id)a0 apis:(id)a1 contextInfo:(id)a2 state:(BOOL)a3;
+ (id)canUseBDXFromSetting:(id)a0 params:(id)a1;
+ (void)triggerPrefetch:(id)a0 enableNewPrefetch:(BOOL)a1;
+ (unsigned long long)serviceType;


@end
