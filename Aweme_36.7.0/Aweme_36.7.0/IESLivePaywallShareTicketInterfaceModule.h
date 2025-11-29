@class NSString, IESLivePaywallShareTicketAPI;

@interface IESLivePaywallShareTicketInterfaceModule : IESLiveModule <IESLivePaywallShareTicketInterface>

@property (retain, nonatomic) IESLivePaywallShareTicketAPI *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getTicketViewControllerWithTicketID:(id)a0 fromUserSecID:(id)a1 parameters:(id)a2;
- (void)fetchTicketInfoWithTicketID:(id)a0 completion:(id /* block */)a1;
- (void)fetchPaidInfoViewRightWithTicketID:(id)a0 fromUserSecID:(id)a1 completion:(id /* block */)a2;
- (void)acquireTicketFromFriendWithTicketID:(id)a0 ticketType:(long long)a1 fromUserID:(id)a2 fromUserSecID:(id)a3 completion:(id /* block */)a4;
- (void)refundShareTicketWithTicketID:(id)a0 ticketType:(long long)a1 fromUserID:(id)a2 fromUserSecID:(id)a3 completion:(id /* block */)a4;
- (void)fetchShareTicketInfoWithRoomID:(id)a0 userID:(id)a1 enterFrom:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
