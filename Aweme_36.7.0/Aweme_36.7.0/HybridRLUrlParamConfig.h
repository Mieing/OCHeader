@class HybridRLRemoteConfig, NSString, HybridResourceLoaderTaskConfig, HybridResourceLoaderConfig, HybridRLOperator, NSNumber;

@interface HybridRLUrlParamConfig : NSObject

@property (weak, nonatomic) HybridRLOperator *advancedOperator;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *bundleName;
@property (nonatomic) long long dynamic;
@property (nonatomic) BOOL onlyLocal;
@property (retain, nonatomic) NSNumber *isDevelopNumber;
@property (retain, nonatomic) NSNumber *enableMemoryCache;
@property (nonatomic) BOOL disableCDNProcessor;
@property (copy, nonatomic) HybridRLRemoteConfig *remoteConfig;
@property (retain, nonatomic) HybridResourceLoaderConfig *loaderConfig;
@property (retain, nonatomic) HybridResourceLoaderTaskConfig *taskConfig;
@property (copy, nonatomic) NSString *res_gfm;
@property (copy, nonatomic) NSString *res_bfm;
@property (copy, nonatomic) NSString *res_cfm;
@property (nonatomic) BOOL m_isGurdUpdate;
@property (nonatomic) BOOL m_isFromMemory;
@property (nonatomic) double m_total;
@property (nonatomic) double m_parse;
@property (nonatomic) double m_merge;
@property (nonatomic) double m_create_pipeline;
@property (nonatomic) double g_total;
@property (nonatomic) double g_local;
@property (nonatomic) double g_update;
@property (nonatomic) double b_total;
@property (nonatomic) double c_total;
@property (nonatomic) double me_total;
@property (nonatomic) BOOL hasPH;
@property (nonatomic) long long endOfPH;
@property (nonatomic) double ph_total;
@property (nonatomic) long long beginOfPL;
@property (nonatomic) BOOL hasPL;
@property (nonatomic) double pl_total;

+ (id)judgeAccessKey:(id)a0 remoteConfig:(id)a1 taskConfig:(id)a2 loaderConfig:(id)a3;

- (id)cdnURL;
- (BOOL)disableCDN;
- (BOOL)disableGecko;
- (BOOL)disableCDNCache;
- (BOOL)disableBuildin;
- (BOOL)hasDevelopParam;
- (BOOL)enablePreloadeInMemory;
- (double)memoryExpireTime;
- (BOOL)useMemoryCache;
- (BOOL)disableGurdUpdate;
- (id)processorsSequence;
- (BOOL)isRemoteConfig;
- (id)paramConfigInfo;
- (id)initWithUrl:(id)a0 loaderConfig:(id)a1 taskConfig:(id)a2 advOperator:(id)a3;
- (id)loadRetryTimes;
- (BOOL)runTaskInGlobalQueue;
- (BOOL)onlyPath;
- (id)shuffleDomains;
- (BOOL)enableNegotiation;
- (id)extractURLDetail:(id)a0 withPrefixList:(id)a1;
- (BOOL)isSchema;
- (BOOL)isWeb;
- (void)provideMetricForTaskConfig;
- (BOOL)isWithInConfig;
- (double)maxCDNCacheLifeTime;
- (id)extractURLDetail:(id)a0;
- (id)findPrefixInParams;
- (BOOL)containUrl:(id)a0 inArray:(id)a1;
- (void).cxx_destruct;
- (BOOL)isTemplate;
- (void)dealloc;
- (BOOL)syncTask;

@end
