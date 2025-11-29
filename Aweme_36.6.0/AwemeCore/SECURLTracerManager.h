@class SECSourceURLManager, NSString, NSDictionary, SECURLTrie, SECRulerFeatures;

@interface SECURLTracerManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _updateMutex;
    BOOL _hasUpdated;
}

@property (copy) NSDictionary *constantsPool;
@property (retain, nonatomic) SECURLTrie *protectedAPITrie;
@property (retain) SECRulerFeatures *features;
@property (retain, nonatomic) SECSourceURLManager *routerURLManager;
@property (retain, nonatomic) SECSourceURLManager *hybridURLManager;
@property BOOL enablePnsRefer;
@property BOOL enableLogDetector;
@property unsigned long long pnsReferSampleRate;
@property BOOL pnsReferMock;
@property (copy) NSString *pnsReferKey;

+ (id)shared;

- (BOOL)shouldProtectAPIPath:(id)a0;
- (id)runFeaturesWith:(id)a0;
- (BOOL)shouldProtectAPI:(id)a0;
- (id)wholeConfig;
- (void)setupTracer;
- (void).cxx_destruct;
- (id)init;
- (void)updateConfig;
- (void)clearCache;
- (void)setup;
- (void)_updateConfig;

@end
