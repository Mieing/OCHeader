@interface IESLiveInteractionChatGroupAPI : HTSLiveApi

- (void)fetchGroupInfo:(id)a0 type:(int)a1 completion:(id /* block */)a2;
- (void)inviteUser:(id)a0 groupID:(id)a1 roomID:(id)a2 completion:(id /* block */)a3;

@end
