@class NSDictionary;
@protocol AWECommerceModuleService, AWEPerfEvaluateServicePrivate, AWEOHRServiceManager;

@interface AWEAiPortraitProducerImpl : IESMutablePortraitProducer {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (weak, nonatomic) id<AWEOHRServiceManager> ohrService;
@property (weak, nonatomic) id<AWECommerceModuleService> commerceModuleService;
@property (weak, nonatomic) id<AWEPerfEvaluateServicePrivate> perfEvaluateService;
@property (retain, nonatomic) NSDictionary *valueGetterDict;
@property (nonatomic) long long harRctRange;

+ (id)sharedInstance;

- (void)doSetup;
- (BOOL)containsKey:(id)a0 inTypes:(unsigned long long)a1;
- (id)getPortraitElement:(id)a0 inTypes:(unsigned long long)a1 params:(id)a2;
- (id)getPortraitElements;
- (void)configKeys;
- (id)portraitValueFromOHRHand:(long long)a0;
- (id)portraitConfigForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
