@class NSDictionary, SECRulerFeatures, NSArray;
@protocol SECSourceURLConfigProvider;

@interface SECSourceURLManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _updateMutex;
    BOOL _hasUpdated;
}

@property (retain, nonatomic) id<SECSourceURLConfigProvider> configProvider;
@property (retain) SECRulerFeatures *relatedLogFilter;
@property (copy) NSDictionary *URLAssets;
@property (copy) NSDictionary *URLExpiryPolicy;
@property (copy) NSArray *logFilters;
@property (copy) NSDictionary *constantsPool;
@property BOOL enableURLParamsDetector;
@property BOOL enableURLParamsExtractor;

- (BOOL)shouldIgnoreLog:(id)a0;
- (id)wholeConfig;
- (id)initWithConfigProvider:(id)a0;
- (void).cxx_destruct;
- (void)updateConfig;
- (void)setup;
- (void)_updateConfig;

@end
