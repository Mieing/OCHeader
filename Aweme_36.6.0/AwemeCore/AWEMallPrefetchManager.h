@class IESECMallClientAiPerfModel, NSArray, NSMutableDictionary, NSString;

@interface AWEMallPrefetchManager : NSObject <AWEMallImagesPrefetchDelegate, AWEUserMessage> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *prefetchProcessorMap;
@property (retain, nonatomic) NSMutableDictionary *prefetchConfigMap;
@property (copy, nonatomic) NSArray *preConnectDomain;
@property (nonatomic) BOOL ecMallPreloadFirstScreenImage;
@property (nonatomic) BOOL ecMallPreloadLoadmoreImage;
@property (nonatomic) long long preConnectInterval;
@property (nonatomic) double lastLeaveTimeInterval;
@property (nonatomic) BOOL tabMallOpened;
@property (nonatomic) long long pitayaPredictionCount;
@property (nonatomic) long long pitayaOrderHomepagePredictionCount;
@property (nonatomic) long long feedProductCardPredictionCount;
@property (retain, nonatomic) IESECMallClientAiPerfModel *perModel;
@property (nonatomic) unsigned long long prefetchStatus;
@property (retain, nonatomic) NSMutableDictionary *statusMap;
@property (retain, nonatomic) NSMutableDictionary *vcMap;
@property (nonatomic) double dataCreateTimestamp;
@property (nonatomic) double orderHomepageDataCreateTimestamp;
@property (nonatomic) double feedProductCardDataCreateTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)syncGetAWEECMallMultiTab;
+ (void)unRegisterAwemeEcomPreloadMessageHandler;
+ (BOOL)enableBottomMallPrefetch;
+ (void)registerPreloadMessageHandlerWhenPitayaReady;
+ (id)mallPreloadTrigger;
+ (void)unRegisterOrderHomepagePreloadMessageHandler;
+ (BOOL)enableTopMallPrefetch;
+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (id)logExtra;
- (void)preloadImagesFormData:(id)a0 withECPreloadConfig:(id)a1 imageConfigTag:(id)a2 bizTag:(id)a3 sceneTag:(id)a4;
- (void)preconnectImageHosts;
- (void)preconnectImageHostsIfLeaveLong;
- (void)updateLeaveTimeInterval;
- (id)prefetchProcessorWithRequestId:(id)a0;
- (void)removeProcessorWithRequestId:(id)a0;
- (BOOL)isEcMallPreloadLoadmoreImage;
- (id)ecMallPreloadLoadmoreImageKey;
- (id)triggerMallPrefetch:(id)a0;
- (void)registerOrderHomepagePreloadMessageHandler;
- (void)registerFeedProductCardPreloadMessageHandler;
- (void)trackerMallClientAiPerf:(unsigned long long)a0 message:(id)a1;
- (void)registerAwemeEcomPreloadMessageHandler;
- (void)trackEventPrefetchEvent:(unsigned long long)a0 error:(id)a1 message:(id)a2;
- (unsigned long long)orderHomepagePrefetchStatus:(id)a0;
- (void)feedProductCardDeliveryXtabHomepagePrefetchWithValidTime:(double)a0 message:(id)a1 completion:(id /* block */)a2;
- (id)enterFrom:(id)a0;
- (void)pitayaTriggerOrderHomepagePrefetchWithValidTime:(double)a0 message:(id)a1 completion:(id /* block */)a2;
- (long long)maxPredictionCount;
- (void)pitayaTriggerMallPrefetchWithValidTime:(double)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)tryClearAiPrefetchData;
- (id)triggerMallPrefetchWithPitaya:(id)a0 prefetchId:(id)a1;
- (BOOL)enableOrderHomepageAiprefetch;
- (id)triggerMallPrefetch:(id)a0 prefetchId:(id)a1;
- (id)triggerMallPrefetchWithSchema:(id)a0 prefetchKey:(id)a1 prefetchId:(id)a2;
- (void)preloadImagesFormData:(id)a0 withConfig:(id)a1 bizTag:(id)a2 sceneTag:(id)a3 preloadTag:(id)a4;
- (void)preloadImages:(id)a0 formDataDictionary:(id)a1 withConfigDictionary:(id)a2 waitTime:(id)a3;
- (id)logExtraWithTag:(id)a0;
- (void)insetImage:(id)a0 toPreloadImages:(id)a1 waitTime:(id)a2;
- (id)ecMallPreloadImageOptKey;
- (id)ecMallPreloadImageOpt;
- (void)preloadImagesFormData:(id)a0 withConfig:(id)a1 schema:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)updateMessageInfo:(id)a0;

@end
