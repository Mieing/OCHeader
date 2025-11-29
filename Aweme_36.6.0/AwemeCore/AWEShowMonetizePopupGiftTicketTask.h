@class NSDictionary, NSString, AWEAwemeModel;

@interface AWEShowMonetizePopupGiftTicketTask : AWEShowMonetizePopupTask <AWEShowMonetizeGiftTicketHandler>

@property (copy, nonatomic) NSDictionary *json;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) id /* block */ trackParamsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)giftTicketWillShow:(id)a0;
- (id)giftTicketReceiveHandlerEventContainerID:(id)a0;
- (void)giftTicketDidShow:(id)a0;
- (void)giftTicket:(id)a0 didClosedForStatus:(unsigned long long)a1;
- (id)initWithGiftTicketJson:(id)a0 aweme:(id)a1 containerID:(id)a2 trackParamsHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)canRun;
- (void)run;
- (void)dealloc;
- (void)cancel;

@end
