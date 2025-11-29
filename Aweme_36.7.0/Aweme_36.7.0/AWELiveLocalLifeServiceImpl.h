@class NSString;

@interface AWELiveLocalLifeServiceImpl : NSObject <IESLiveLocalLifeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)goodsDetailPreload;
- (void)stopAllPreRequestTask;
- (id)getBcmChainForFantaPureFeatureWithExtraInfo:(id)a0;
- (BOOL)isContainedInPrerenderWhiteList:(id)a0;
- (BOOL)startImpressionWithModel:(id)a0 tag:(id)a1;
- (BOOL)endImpressionWithModel:(id)a0 tag:(id)a1;
- (id)addParams:(id)a0 withTargetString:(id)a1;
- (void)trackLiveComponentADEventWithLabel:(id)a0 refer:(id)a1 extra:(id)a2;
- (BOOL)routeWithWebURL:(id)a0 adInfo:(id)a1 queries:(id)a2;
- (void)endWebLandingPreRender:(id)a0;
- (void)startWebLandngPreRenderWithModel:(id)a0;
- (void)startWebLandingPreloadWithModel:(id)a0;
- (id)availableLiveModuleService;
- (void)registerShelfService:(id)a0;
- (id)getJSBridgeBroadcastNotificationName;
- (id)getAwemeLiveRoomModel:(id)a0;
- (id)getNewCommerceLiveComponentsManager;
- (BOOL)openPOIGoodsDetail:(id)a0 queries:(id)a1 liveInfo:(id)a2;
- (id)getAweOriginalAdModelExtraAdTypeNatureFlowValue;
- (void)aweTrackEvent:(id)a0 params:(id)a1;
- (id)getOriginAdModel;
- (id)getOriginAdCardModel;
- (id)getHttpResponseWithModel:(id)a0;
- (void)adTrackURLWithURLList:(id)a0 creativeID:(id)a1 groupID:(id)a2 adID:(id)a3 logExtra:(id)a4 adExtraData:(id)a5;
- (id)getLocalLifeRecordChangeID;
- (void)showText:(id)a0;

@end
