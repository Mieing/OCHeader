@class AWEPOISourceTraceProducer, NSMutableDictionary, NSDictionary, NSString;

@interface AWEPOISourceTraceFlowManager : NSObject <AWEPOISourceTraceFlowManagerProtocol> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSMutableDictionary *sourceTraceProducerDictionary;
@property (weak, nonatomic) AWEPOISourceTraceProducer *commonSourceTraceProducer;
@property (copy, nonatomic) NSDictionary *lastSourceTraceParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateSourceTrace:(id)a0 pageParam:(id)a1 unitParam:(id)a2;
- (void)bindBtmPage:(id)a0 producer:(id /* block */)a1;
- (id)getCommonSourceTrace;
- (void)p_bindBtmPage:(id)a0 pageParam:(id)a1 unitParam:(id)a2 isUpdate:(BOOL)a3 producer:(id /* block */)a4;
- (id)getSourceTraceIdWithBtmPage:(id)a0;
- (id)getLastSourceTraceProducerWithBtmPage:(id)a0;
- (unsigned long long)getClearCacheMaxNum;
- (unsigned long long)getClearCacheDelayTime;
- (void)cleanExpiredDataAsync;
- (id)getPageBTM:(id)a0;
- (id)createSourceTraceId;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
