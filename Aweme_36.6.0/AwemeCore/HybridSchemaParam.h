@class NSString, NSDictionary, NSURL, HybridResourceSchemaParam, NSNumber;

@interface HybridSchemaParam : NSObject

@property (retain, nonatomic) NSNumber *disableBuiltIn;
@property (retain, nonatomic) NSNumber *disableGurd;
@property (retain, nonatomic) NSString *bid;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSURL *originURL;
@property (retain, nonatomic) NSURL *resolvedURL;
@property (nonatomic) BOOL originURLProcessed;
@property (retain, nonatomic) NSURL *originURLBeforeCustomProcess;
@property (nonatomic) long long engineType;
@property (retain, nonatomic) NSDictionary *preloadSettingKeys;
@property (nonatomic) BOOL enablePrefetch;
@property (retain, nonatomic) HybridResourceSchemaParam *resourceParam;
@property (nonatomic) BOOL subscribeNetworkLevel;

+ (id)prefetchUrlWithSchema:(id)a0;
+ (BOOL)__schemaQueryWithChannelStyle:(id)a0;
+ (BOOL)__schemaQueryWithUrlStyle:(id)a0;
+ (id)resolverWithSchema:(id)a0 contextInfo:(id)a1;
+ (void)triggerPrefetchIfNeeded:(id)a0 contextInfo:(id)a1;
+ (void)registerPrefetchInitDataIfNeeded:(id)a0 prefetchSchema:(id)a1 contextInfo:(id)a2;
+ (id)extractUrlDetail:(id)a0 withPrefix:(id)a1;
+ (id)paramWithDictionary:(id)a0 context:(id)a1;
+ (BOOL)__schemaQueryWithFallbackUrlStyle:(id)a0;
+ (id)paramWithDictionary:(id)a0;
+ (id)__resolveHttpStyleToHybridSchema:(id)a0 withQueries:(id)a1;
+ (id)__resolveURLStyleToHybridSchema:(id)a0 withQueries:(id)a1;
+ (id)__resolveChannelStyleToHybridSchema:(id)a0 withQueries:(id)a1;
+ (id)hybrid_stringByAddingQueryDict:(id)a0 withDict:(id)a1;
+ (id)hybrid_stringByAddingPercentEscapes:(id)a0;
+ (void)prefetchMonitor:(id)a0 apis:(id)a1 context:(id)a2;
+ (BOOL)canResolveUrl:(id)a0;

- (void)updateWithParam:(id)a0;
- (id)dictionaryWithInnerUrlQueryItems:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (void)updateWithDictionary:(id)a0 context:(id)a1;

@end
