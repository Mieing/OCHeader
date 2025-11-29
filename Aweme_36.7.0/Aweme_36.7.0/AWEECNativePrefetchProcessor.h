@class NSDictionary, NSMutableArray, NSString;

@interface AWEECNativePrefetchProcessor : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSDictionary *data;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSMutableArray *registerCallbacks;
@property (copy, nonatomic) NSString *prefetchId;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *prefetchApiConfig;
@property (copy, nonatomic) NSDictionary *bussinessID;
@property (copy, nonatomic) NSString *apiKey;
@property (nonatomic) long long startProcessTime;
@property (nonatomic) unsigned long long configSource;
@property (copy, nonatomic) NSDictionary *reuseInfo;
@property (copy, nonatomic) NSDictionary *monitorInfo;
@property (copy, nonatomic) NSDictionary *perfTiming;

+ (BOOL)compareStringA:(id)a0 stringB:(id)a1;
+ (id)p_headerBlackList;
+ (BOOL)compareProcessorA:(id)a0 processorB:(id)a1 prefetchConfigKey:(id)a2 ignoreKeys:(id)a3;
+ (id)p_paramsBlackList;
+ (BOOL)compareParamsA:(id)a0 paramsB:(id)a1 ignoreKeys:(id)a2;
+ (BOOL)compareArrayA:(id)a0 arrayB:(id)a1 ignoreKeys:(id)a2;
+ (id)p_prefetchReuseConfig;
+ (unsigned long long)compareProcessorA:(id)a0 processorB:(id)a1;

- (void)registerDataCallback:(id /* block */)a0;
- (void)updateReuseInfo:(id)a0;
- (id)requestParamsDetail;
- (void)triggerNativePrefetch;
- (id)paramsFromConfig:(id)a0 url:(id)a1;
- (void)fetchDataWithCallback:(id /* block */)a0;
- (id)prefetchDataIfCompleted;
- (void).cxx_destruct;
- (id)init;

@end
