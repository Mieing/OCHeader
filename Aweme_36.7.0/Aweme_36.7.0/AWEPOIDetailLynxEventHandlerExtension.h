@class BDXBridgeEventSubscriber;

@interface AWEPOIDetailLynxEventHandlerExtension : AWEPOIBaseExtension

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;

- (void)handleBroadcastNotification:(id)a0;
- (void)initializeExtension;
- (id)constData;
- (void)p_initObserver;
- (void)p_initSubScriber;
- (void)p_handleSubscriberLynxEvent:(id)a0 params:(id)a1;
- (void)p_subScribeLynxEvent;
- (BOOL)p_isNeedClosePOIAfterPay:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
