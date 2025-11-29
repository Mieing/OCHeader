@interface IESLiveAnchorTicketApi : HTSLiveApi

- (void)updateTicketInfoWithTicketID:(id)a0 roomID:(id)a1 bindStatus:(BOOL)a2 callback:(id /* block */)a3;
- (void)updateExplainCardStatus:(BOOL)a0 ticketID:(id)a1 roomID:(id)a2 callback:(id /* block */)a3;

@end
