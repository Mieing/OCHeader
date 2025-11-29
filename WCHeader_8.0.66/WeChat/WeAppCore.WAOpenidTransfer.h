@interface WeAppCore.WAOpenidTransfer : NSObject

+ (void)batchTransferBetweenUsernameOpenGidWithAppid:(id)a0 type:(unsigned int)a1 chatRoomInfo:(id)a2 needEncryptedData:(BOOL)a3 handler:(id /* block */)a4;
+ (void)batchGetWxaGroupOpenidWithAppid:(id)a0 usernameList:(id)a1 chatroomName:(id)a2 singleChatname:(id)a3 handler:(id /* block */)a4;
+ (void)batchGetWxaUsernameWithAppid:(id)a0 openidList:(id)a1 handler:(id /* block */)a2;

- (id)init;

@end
