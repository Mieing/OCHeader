@class NSString, BDPFlowAdDataManager;

@interface BDPAppFlowAdImpl : NSObject <BDPPluginAppFlowAdvertisementImplProtocol>

@property (nonatomic) BOOL isEnterBackground;
@property (retain, nonatomic) BDPFlowAdDataManager *adDataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)preloadFlowAdView:(id)a0 callback:(id /* block */)a1 uniqueId:(id)a2;
- (void)flowAdViewWithUniqueID:(id)a0 adUnitID:(id)a1 callback:(id /* block */)a2;
- (BOOL)isValidUnitID:(id)a0 uniqueID:(id)a1 isForceFlowAd:(BOOL)a2 error:(id *)a3;
- (void)insertFlowAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateFlowAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeFlowAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)p_trackFlowAdInsertErrCode:(long long)a0 errMsg:(id)a1 source:(id)a2 componentId:(id)a3 uniqueId:(id)a4 flowId:(id)a5 adUnitId:(id)a6;
- (void)_advertisementStateChangeWithAdUnitID:(id)a0 state:(id)a1 data:(id)a2 pageId:(long long)a3 uniqueId:(id)a4;
- (void)_onStateAdErrorWithAdUnitID:(id)a0 pageId:(long long)a1 error:(id)a2 errorCode:(long long)a3 errorType:(id)a4 uniqueId:(id)a5 source:(id)a6 componentId:(id)a7;
- (void).cxx_destruct;
- (id)init;

@end
