@interface IESLivePayWallPingAPI : HTSLiveApi

- (void)requestPaiedInfoForRoom:(id)a0 ticketID:(id)a1 type:(long long)a2 complection:(id /* block */)a3;
- (void)requestVSPrivilegeInfoWithEntityID:(id)a0 paidLiveType:(int)a1 complection:(id /* block */)a2;

@end
