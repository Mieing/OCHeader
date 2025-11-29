@interface IESLiveAnchorAdminPromptAPI : HTSLiveApi

- (void)addPromptWithRoomID:(id)a0 secUserId:(id)a1 secAnchorID:(id)a2 finished:(id /* block */)a3;
- (void)deletPromptWithRoomID:(id)a0 secUserId:(id)a1 secAnchorID:(id)a2 finished:(id /* block */)a3;

@end
