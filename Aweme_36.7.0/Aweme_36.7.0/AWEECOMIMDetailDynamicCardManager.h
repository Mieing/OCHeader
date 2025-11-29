@class AWEECOMIMDetailDynamicConfigModel, BDXBridgeEventSubscriber, AWEECOMIMPageTrackUtil;
@protocol BDECRabbiFlyIDynamicSupervisor;

@interface AWEECOMIMDetailDynamicCardManager : NSObject

@property (retain, nonatomic) AWEECOMIMDetailDynamicConfigModel *configModel;
@property (retain, nonatomic) id<BDECRabbiFlyIDynamicSupervisor> dynamicSupervisor;
@property (retain, nonatomic) BDXBridgeEventSubscriber *sendEventToCardSubscriber;
@property (weak, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;

- (void)setupEnv;
- (void)setupDynamicSupervisor;
- (void)preloadLynx;
- (void)sendEventToCardWithParams:(id)a0;
- (void)sendEventToCardNotification:(id)a0;
- (id)buildTemplateCardTypeKey:(id)a0;
- (BOOL)isHitLocalConfig:(id)a0;
- (id)getLocalDynamicConfigModel:(id)a0;
- (long long)messageBodyTypeWithOriginBodyType:(long long)a0 message:(id)a1;
- (id)getDynamicCardConfigModel:(id)a0;
- (void)postWithURL:(id)a0 params:(id)a1 headerField:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubscription;
- (void)viewWillAppear;
- (void)dealloc;
- (void)viewWillDisappear;

@end
