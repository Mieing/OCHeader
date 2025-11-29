@interface LSIMChatSettingsNetwork : LSIMChatNetwork

+ (void)createGroupOneOneChatWithCurrentPigeonUID:(id)a0 otherPigeonUID:(id)a1 conversationID:(id)a2 enterFrom:(id)a3 completion:(id /* block */)a4;
+ (void)quitGroupConversationWithConversationID:(id)a0 completion:(id /* block */)a1;
+ (void)updateUserMuteInConversationID:(id)a0 isMute:(BOOL)a1 completion:(id /* block */)a2;
+ (id)hostURL;

@end
