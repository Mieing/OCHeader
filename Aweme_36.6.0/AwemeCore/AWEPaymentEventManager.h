@class NSPointerArray, BDXBridgeEventSubscriber, NSString;

@interface AWEPaymentEventManager : NSObject <AWEPaymentEventManagerProtocol>

@property (retain, nonatomic) NSPointerArray *cachedHandlers;
@property (retain, nonatomic) BDXBridgeEventSubscriber *paymentSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *loginSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *payPanelVisitRecallSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)responseToEvent:(unsigned long long)a0 responseModel:(id)a1;
- (BOOL)canResponseToEvent:(unsigned long long)a0 responseModel:(id)a1 containerID:(id)a2;
- (void)addSubscribers;
- (id)awemeParamsForPayParams:(id)a0;
- (BOOL)shouldUseNewRefreshForEventType:(unsigned long long)a0 responseModel:(id)a1;
- (void)refreshWithEventType:(unsigned long long)a0 responseModel:(id)a1 handler:(id)a2;
- (void)addPaymentSubscriber;
- (void)addLoginSubscriber;
- (void)responseToEvent:(unsigned long long)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addEventHandler:(id)a0;

@end
