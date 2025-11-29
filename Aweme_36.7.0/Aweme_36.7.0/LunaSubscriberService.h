@class _TtC21AWEMusicStreamingImpl19LunaActivityFreeVip, NSTimer, NSString, _TtC21AWEMusicStreamingImpl14LunaMembership, RxMultipleDelegate, NSDictionary, _TtC21AWEMusicStreamingImpl22LunaGetUpsellsResponse, _TtC21AWEMusicStreamingImpl29LunaGetMySubscriptionResponse, LunaSubsResponseWrapper;
@protocol AWEMusicCommerceConfig, IESLCMessageHandlerProtocol, LunaSubscriberServiceDelegate;

@interface LunaSubscriberService : NSObject <IESLCMessageHandlerService, AWEUserMessage>

@property (retain, nonatomic) RxMultipleDelegate<LunaSubscriberServiceDelegate> *delegates;
@property (nonatomic) BOOL isMySubscriptionRequesting;
@property (nonatomic) BOOL isUpsellsRequesting;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl22LunaGetUpsellsResponse *getUpsellsResponse;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl29LunaGetMySubscriptionResponse *getMySubscriptionResponse;
@property (nonatomic) BOOL isSubscriberCenterShowing;
@property (retain, nonatomic) LunaSubsResponseWrapper *lastResponse;
@property (nonatomic) BOOL enterBackOnce;
@property (retain, nonatomic) id<AWEMusicCommerceConfig> commerceConfig;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl14LunaMembership *memberShip;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl19LunaActivityFreeVip *activityFreeVip;
@property (retain, nonatomic) NSDictionary *commerceInfoMap;
@property (nonatomic) BOOL isCommerceInfoRequesting;
@property (nonatomic) BOOL isV2;
@property (nonatomic) BOOL enterMiniOnce;
@property (retain, nonatomic) NSTimer *expireRefreshTimer;
@property (nonatomic) BOOL queryButNoActivity;
@property (readonly, nonatomic) unsigned long long subscriberStatus;
@property (readonly, nonatomic) BOOL isSubscriber;
@property (readonly, nonatomic) BOOL hasFreeSubscriber;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMap:(id)a0;
+ (id)commerceConfig;
+ (id)shared;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)enterMini;
- (void)gotoSubscriberCenterWithModel:(id)a0 eventParams:(id)a1;
- (id)userSubsEvent;
- (id)commerceLynxViewData;
- (void)refreshCommerceInfo:(id)a0 scene:(id)a1;
- (void)onSettleFinished;
- (void)updateCommerceInfo:(id)a0 scene:(id)a1;
- (id)currentUserSubsInfo;
- (void)p_reportUpsellsRequest:(id)a0;
- (void)p_reportMySubscriptionRequest:(id)a0;
- (void)updateUpsellsScene:(long long)a0;
- (void)updateCommerceInfoIfNeeded:(id)a0;
- (void)updateMySubscription;
- (BOOL)p_isCurrentUid:(id)a0;
- (void)p_expireRefresh;
- (id)p_lunaCommerceInfoMapKey;
- (void)p_onCommerceInofUpdated:(id)a0;
- (id)p_lunaMySubscriptionKey;
- (void)p_publishSubscribeEventType:(id)a0 params:(id)a1;
- (void)updateUpsells;
- (id)p_lunaUpsellsKey;
- (id)subscriptionResponseJson;
- (id)upsellsResponseJson;
- (id)p_subscriberCenterUrl;
- (long long)p_appVersionFrom:(id)a0;
- (void)p_handleOnReceiveAWEPushServiceWithMsg:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)setup;
- (void)addObservers;
- (void)clean;

@end
