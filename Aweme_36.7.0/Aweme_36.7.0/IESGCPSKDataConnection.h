@class NSString, IESGCPApi;

@interface IESGCPSKDataConnection : NSObject <IESGCPSKDataConnectionInterface>

@property (retain, nonatomic) IESGCPApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)expiredDate;
- (void)triggerDataConnectWithModel:(id)a0;
- (void)validContext:(id)a0;
- (void)fetch:(id)a0 completion:(id /* block */)a1;
- (id)validLiveSceneParamsWithContext:(id)a0;
- (id)validVideoSceneParamsWithContext:(id)a0;
- (BOOL)shouldTriggerDataConnectionWithModel:(id)a0;
- (void)writeTriggerActionCacheWithModel:(id)a0;
- (void)reportEventForModel:(id)a0 gamesMonitorInfo:(id)a1;
- (id)cacheKeyForModel:(id)a0;
- (id)watchContentKeyWithModel:(id)a0;
- (id)watchContentCacheWithModel:(id)a0;
- (BOOL)isActionCacheConditionSuccessWithModel:(id)a0;
- (BOOL)isWatchActionForModel:(id)a0;
- (BOOL)isSingleWatchDurationLimitConditionSuccessWithModel:(id)a0;
- (BOOL)isAllWatchContentLimitConditionSuccessWithModel:(id)a0;
- (void)writeWatchContentWithModel:(id)a0;
- (id)requestParamsForModel:(id)a0;
- (id)eventNameForModel:(id)a0;
- (id)reportParamsForModel:(id)a0 gameMonitorInfo:(id)a1;
- (void)removeWatchContentWithModel:(id)a0;
- (void).cxx_destruct;

@end
