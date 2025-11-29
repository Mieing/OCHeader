@interface BDPPluginChatGroup : BDPBridgeInstancePlugin

- (id)sha256hmac:(id)a0 content:(id)a1;
- (void)requestToJoinAwemeConversation:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getAwemeChatGroupInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)joinAwemeConversationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
