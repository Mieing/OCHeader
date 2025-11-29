@class NSString, NSPointerArray, NSHashTable, IESLiveClientLLMOutputDispatchMonitor, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLiveClientLLMOutputForAudienceDispatch : NSObject <IESLiveClientLLMOutputForAudienceDispatchService, IESLiveSEIListener> {
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSPointerArray *cacheListeners;
@property (retain, nonatomic) IESLiveClientLLMOutputDispatchMonitor *monitor;
@property (nonatomic) BOOL enableLLMOutputDispatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)addLLMOutputListener:(id)a0;
- (void)removeLLMOutputListener:(id)a0;
- (void)updateCacheListeners;
- (void)dispatchLLMOutput:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
