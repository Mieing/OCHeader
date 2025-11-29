@class NSArray, NSDictionary, SECRulerFeatures, NSCache;

@interface SECPiperParamsReportConfig : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _cacheMutex;
}

@property (copy, nonatomic) NSArray *paramsReportConfig;
@property (retain, nonatomic) NSCache *paramsReportCache;
@property (copy) NSArray *features;
@property (copy) NSArray *inParamsReportRules;
@property (copy) NSArray *outParamsReportRules;
@property (copy) NSDictionary *constantsPool;
@property (copy, nonatomic) NSCache *cachePool;
@property (retain) SECRulerFeatures *rulerFeatures;
@property BOOL useFeatureV2;

- (void)updateConfig:(id)a0;
- (BOOL)lookupKey:(id)a0 inCache:(id)a1;
- (void)saveObject:(id)a0 forKey:(id)a1 inCache:(id)a2;
- (id)createCacheWithName:(id)a0;
- (id)reportRules;
- (id)runFeaturesWithParams:(id)a0;
- (id)inParamsRules;
- (id)outParamsRules;
- (id)_cacheKeyForPiper:(id)a0;
- (id)_findParamsReportRule:(id)a0;
- (BOOL)paramsReportConfig:(id)a0 matchedWithPiper:(id)a1;
- (id)featuresFromConfig:(id)a0;
- (id)paramsRulesFromConfig:(id)a0;
- (id)findParamsReportRule:(id)a0;
- (void)updateConfigV2:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;

@end
