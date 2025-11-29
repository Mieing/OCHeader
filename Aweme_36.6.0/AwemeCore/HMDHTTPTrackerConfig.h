@class NSArray, NSString, NSDictionary, NSCache;

@interface HMDHTTPTrackerConfig : HMDTrackerConfig

@property (retain, nonatomic) NSCache *allowListCache;
@property (retain, nonatomic) NSCache *blockListCache;
@property (nonatomic) BOOL allowedListOptEnabled;
@property (retain, nonatomic) NSArray *stringAllowedRuleList;
@property (retain, nonatomic) NSArray *regularAllowedRuleList;
@property (copy, nonatomic) NSArray *apiAllowList;
@property (copy, nonatomic) NSArray *apiBlockList;
@property (copy, nonatomic) NSArray *apiAllowHeaderList;
@property (nonatomic) BOOL enableAPIAllUpload;
@property (nonatomic) BOOL enableAPIErrorUpload;
@property (nonatomic) BOOL enableNSURLProtocolAndChromium;
@property (nonatomic) BOOL ignoreCancelError;
@property (nonatomic) BOOL responseBodyEnabled;
@property (nonatomic) unsigned long long responseBodyThreshold;
@property (nonatomic) BOOL enableTTNetCDNSample;
@property (copy, nonatomic) NSString *baseApiAll;
@property (retain, nonatomic) NSDictionary *requestAllowHeader;
@property (retain, nonatomic) NSDictionary *responseAllowHeader;
@property (nonatomic) BOOL enableCustomURLCache;
@property (nonatomic) BOOL enableWebViewMonitor;
@property (nonatomic) BOOL enableTrafficRecord;

+ (id)hmd_attributeMapDictionary;
+ (void)awe_energy_optimize_hook;
+ (id)configKey;

- (void)hmd_setAttributes:(id)a0;
- (id)getModule;
- (BOOL)isPreferredIfDebug;
- (BOOL)isURLInBlockList:(id)a0;
- (BOOL)isHeaderInAllowHeaderList:(id)a0;
- (BOOL)isURLInAllowListWithScheme:(id)a0 host:(id)a1 path:(id)a2;
- (id)requestAllowHeaderWithHeader:(id)a0;
- (void)setupURLCache;
- (void)groupApiAllowedListRule;
- (id)requestAllowHeaderWithHeader:(id)a0 isMovingLine:(BOOL)a1;
- (id)responseAllowHeaderWitHeader:(id)a0 isMovingLine:(BOOL)a1;
- (BOOL)isURLInAllowList:(id)a0;
- (id)pathCachedBlockListResWithPath:(id)a0;
- (BOOL)isURLInAllowListWithMainURL:(id)a0;
- (void)cachedBlockListResWithPath:(id)a0 res:(id)a1;
- (BOOL)isURLInBlockListWithMainURL:(id)a0;
- (id)pathCachedAllowListResWithPath:(id)a0;
- (BOOL)isAllowedURLUseRegularOptWithURL:(id)a0;
- (void)cachedAllowListResWithPath:(id)a0 res:(id)a1;
- (id)responseAllowHeaderWitHeader:(id)a0;
- (BOOL)isURLInBlockListWithSchme:(id)a0 host:(id)a1 path:(id)a2;
- (BOOL)awe_energy_optimize_isURLInAllowList:(id)a0;
- (BOOL)awe_energy_optimize_isURLInAllowListWithMainURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
