@class NSString, BDXBridgeEventSubscriber, NSHashTable, NSObject, AWEShowAnnieXPageClickShowTrackUtil;
@protocol AWEPaymentEventHandlerProtocol;

@interface AWEShowMonetizeGiftTicket : NSObject <AWEShowMonetizeGiftTicketService>

@property (retain, nonatomic) NSHashTable *handlers;
@property (nonatomic) BOOL shouldShowGiftTicketPage;
@property (retain, nonatomic) NSObject<AWEPaymentEventHandlerProtocol> *paymentHandler;
@property (retain, nonatomic) BDXBridgeEventSubscriber *giftPaySubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *giftTicketPageOpenSubscriber;
@property (retain, nonatomic) AWEShowAnnieXPageClickShowTrackUtil *clickShowTrackUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addFEEvent;
- (id)getHandlersForContainerID:(id)a0;
- (void)createPaymentHandlerWithAweme:(id)a0 containerID:(id)a1;
- (void)trackGiftTicketPageShowWithErrorCode:(long long)a0 containerID:(id)a1 extraParams:(id)a2;
- (void)addGiftTicketHandler:(id)a0;
- (void)removeGiftTicketHandler:(id)a0;
- (void)tryToShowGetGiftTicketPageWithJson:(id)a0 aweme:(id)a1 params:(id)a2 containerID:(id)a3 completion:(id /* block */)a4;
- (BOOL)isShowingGetGiftTicketPage;
- (void).cxx_destruct;
- (id)init;

@end
