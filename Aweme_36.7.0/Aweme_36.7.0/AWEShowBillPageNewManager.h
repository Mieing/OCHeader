@class NSMutableDictionary, NSDictionary, BDXBridgeEventSubscriber, NSString, NSMutableArray, AWEShowMonetizeAnnieXCardTrackPlugin;
@protocol AWEPaymentEventHandlerProtocol, AWEShowBillPageManagerDelegate;

@interface AWEShowBillPageNewManager : NSObject <AWEShowMonetizeAnnieXCardPlugin, AWEShowBillPageProtocol>

@property (nonatomic, getter=isBillPageOpening) BOOL billPageOpening;
@property (retain, nonatomic) id<AWEPaymentEventHandlerProtocol> paymentEventHandler;
@property (retain, nonatomic) BDXBridgeEventSubscriber *payPanelVisitRecallSubscriber;
@property (retain, nonatomic) NSMutableDictionary *clientSessionIdRecorder;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (copy, nonatomic) NSDictionary *sessionIdDictionary;
@property (retain, nonatomic) AWEShowMonetizeAnnieXCardTrackPlugin *trackPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEShowBillPageManagerDelegate> paymentDelegate;

+ (id)shared;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidClose:(id)a0;
- (id)preCache;
- (void)preCachePlayletVipBillPageDataWithModel:(id)a0 params:(id)a1;
- (void)preCacheIapBillPageDataWithModel:(id)a0 params:(id)a1;
- (void)handlePayEvent:(id)a0;
- (void)openBillPageWithSchema:(id)a0 model:(id)a1 enterFrom:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)setupPaymentHandler;
- (void)addPayPanelVisitRecallSubscriber;
- (void)trackClickOrderPageStatusWithEventResponseModel:(id)a0;
- (id)registerClientSessionIDWithModel:(id)a0;
- (void)monitorOpenFailedWithModel:(id)a0 enterFrom:(id)a1;
- (void)handleCacheDataWithPayEventModel:(id)a0;
- (void)addFEEvent;
- (id)getInjGetDataInfoWithModel:(id)a0 enterFrom:(id)a1 extraParams:(id)a2;
- (void)updateTrackPluginWithParams:(id)a0;
- (void).cxx_destruct;
- (id)containerID;
- (id)init;
- (void)dealloc;

@end
