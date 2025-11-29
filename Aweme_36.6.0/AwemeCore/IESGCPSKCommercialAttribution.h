@class NSString, IESGCPApi;

@interface IESGCPSKCommercialAttribution : NSObject <IESGCPSKAttributionInterface>

@property (retain, nonatomic) IESGCPApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributionWithContext:(id)a0;
- (void)validContext:(id)a0;
- (void)reportAttributionEventForContext:(id)a0 gamesMonitorInfo:(id)a1;
- (void)fetch:(id)a0 completion:(id /* block */)a1;
- (id)requestParamsForContext:(id)a0;
- (id)eventNameForContext:(id)a0;
- (id)reportParamsForContext:(id)a0 gameMonitorInfo:(id)a1;
- (id)validLiveSceneParamsWithContext:(id)a0;
- (id)validVideoSceneParamsWithContext:(id)a0;
- (id)validCommercialParamsWithContext:(id)a0;
- (void).cxx_destruct;

@end
