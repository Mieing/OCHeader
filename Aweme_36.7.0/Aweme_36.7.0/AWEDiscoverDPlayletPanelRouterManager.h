@class NSString, NSObject;
@protocol AWEDiscoverDPlayletPanelRouterManagerDelegate, AWEPaymentEventHandlerProtocol, AWEPaymentDetailEventHandlerProtocol;

@interface AWEDiscoverDPlayletPanelRouterManager : NSObject <AWEPaymentEventHandlerDelegate>

@property (weak, nonatomic) id<AWEDiscoverDPlayletPanelRouterManagerDelegate> delegate;
@property (retain, nonatomic) NSObject<AWEPaymentEventHandlerProtocol, AWEPaymentDetailEventHandlerProtocol> *paymentEventHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshFeedData;
- (void)handlePayEvent:(id)a0;
- (void)handleLoginEvent:(id)a0;
- (void)routeOrderWithParams:(id)a0;
- (id)playletVIPPaidPanelExtraParamsHasPaid:(BOOL)a0;
- (void)routeOrder;
- (void)routeVIP;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
