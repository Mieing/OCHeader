@class AWEShowBillPagePreCache, NSMutableDictionary, BDXBridgeEventSubscriber, NSDictionary, NSString;
@protocol AWEPaymentEventHandlerProtocol, AWEShowBillPageManagerDelegate;

@interface AWEShowBillPageManager : NSObject <PuzzleKitViewLifeCycleProtocol, BDXContainerLifecycleProtocol, AWEShowBillPageProtocol>

@property (retain, nonatomic) id<AWEPaymentEventHandlerProtocol> paymentEventHandler;
@property (retain, nonatomic) AWEShowBillPagePreCache *preCacheImpl;
@property (retain, nonatomic) NSMutableDictionary *clientSessionIdRecorder;
@property (retain, nonatomic) BDXBridgeEventSubscriber *payPanelVisitRecallSubscriber;
@property (copy, nonatomic) NSDictionary *sessionIdDictionary;
@property (nonatomic, getter=isBillPageOpening) BOOL billPageOpening;
@property (copy, nonatomic) NSString *openingContainerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEShowBillPageManagerDelegate> paymentDelegate;

+ (id)shared;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)containerDidClose:(id)a0;
- (id)preCache;
- (void)preCachePlayletVipBillPageDataWithModel:(id)a0 params:(id)a1;
- (void)preCacheIapBillPageDataWithModel:(id)a0 params:(id)a1;
- (void)kitView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)addNotification;
- (void)handlePayEvent:(id)a0;
- (void)openBillPageWithSchema:(id)a0 model:(id)a1 enterFrom:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)setupPaymentHandler;
- (void)addPayPanelVisitRecallSubscriber;
- (void)openBillPageWithSchema:(id)a0 model:(id)a1 enterFrom:(id)a2 schemaParams:(id)a3 useStandardAnnieContainer:(BOOL)a4 completion:(id /* block */)a5;
- (void)handlePayPanelVisitRecallEvent:(id)a0;
- (void)trackClickOrderPageStatusWithEventResponseModel:(id)a0;
- (id)registerClientSessionIDWithModel:(id)a0;
- (void)trackWillOpenOrderPageWithParams:(id)a0;
- (id)getCacheDataWithModel:(id)a0 enterFrom:(id)a1 extraParams:(id)a2;
- (void)monitorOpenFailedWithModel:(id)a0 enterFrom:(id)a1;
- (void)billPageContainerDidCloseNotification:(id)a0;
- (void)billPageContainerWillDestoryNotification:(id)a0;
- (void)handleCacheDataWithPayEventModel:(id)a0;
- (void).cxx_destruct;
- (id)containerID;
- (id)init;
- (void)dealloc;

@end
