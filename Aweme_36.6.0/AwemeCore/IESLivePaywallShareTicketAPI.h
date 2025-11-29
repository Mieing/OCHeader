@interface IESLivePaywallShareTicketAPI : HTSLiveApi

- (void)fetchTicketInfoWithTicketID:(id)a0 completion:(id /* block */)a1;
- (void)fetchPaidInfoViewRightWithTicketID:(id)a0 fromUserSecID:(id)a1 completion:(id /* block */)a2;
- (void)acquireTicketFromFriendWithTicketID:(id)a0 ticketType:(long long)a1 fromUserID:(id)a2 fromUserSecID:(id)a3 completion:(id /* block */)a4;
- (void)refundShareTicketWithTicketID:(id)a0 ticketType:(long long)a1 fromUserID:(id)a2 fromUserSecID:(id)a3 completion:(id /* block */)a4;
- (void)fetchShareTicketInfoWithRoomID:(id)a0 userID:(id)a1 enterFrom:(long long)a2 completion:(id /* block */)a3;

@end
