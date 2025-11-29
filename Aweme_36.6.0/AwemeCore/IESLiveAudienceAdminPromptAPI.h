@interface IESLiveAudienceAdminPromptAPI : HTSLiveApi

- (void)postPromptWithRoomID:(id)a0 content:(id)a1 finished:(id /* block */)a2;
- (void)getPromptListWithRoomID:(id)a0 finished:(id /* block */)a1;

@end
