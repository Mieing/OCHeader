@class NSString, NSMutableArray;

@interface AWEFantaGeneralFeatureProvider : NSObject <FantaFeatureProvider, FantaDataCollectorListener>

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } generalLock;
@property (retain, nonatomic) NSMutableArray *searchKeywordList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onDataCollector:(id)a0 collectData:(id)a1;
- (void)p_addObserver;
- (id)featureForKey:(id)a0;
- (void)p_handleWithApplogEvent:(id)a0 applogParams:(id)a1;
- (void)loadGeneralProvider;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)onApplicationDidEnterBackground:(id)a0;

@end
