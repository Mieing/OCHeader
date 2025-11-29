@interface AWEStudioEffectPrefetcher : NSObject

+ (id)shareInstance;

- (void)p_prefetchEffects;
- (void)startConfigPreloadEffect;
- (void)toolPreloadEffect;
- (id)preloadEffectBussnessKey;
- (void)syncLoadPreDownloadWithBusinessKey:(id)a0;
- (long long)preloadEffectBussnessID;
- (void)preDownloadEffectWithBusinessId:(long long)a0 businessKey:(id)a1 extraParameters:(id)a2;
- (void)pausePreloadEffect;
- (void)startMonitoring;

@end
