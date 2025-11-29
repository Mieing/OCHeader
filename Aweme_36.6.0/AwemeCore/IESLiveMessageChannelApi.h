@interface IESLiveMessageChannelApi : HTSLiveApi

- (void)reportInviteUserWithRoomID:(id)a0 channelID:(id)a1 inviteItems:(id)a2 completion:(id /* block */)a3;
- (void)createChannelWithRoomID:(id)a0 disableLinkmic:(BOOL)a1 completion:(id /* block */)a2;
- (void)inviteUserJoinChannelWithRoomID:(id)a0 channelID:(id)a1 completion:(id /* block */)a2;
- (void)joinChannelWithRoomID:(id)a0 inviteId:(id)a1 channelId:(id)a2 createType:(id)a3 fansChannelType:(id)a4 groupId:(id)a5 completion:(id /* block */)a6;
- (void)setChatChannelSettingsWithRoomID:(id)a0 channelID:(id)a1 linkMicSwitch:(BOOL)a2 memberInviteSwitch:(BOOL)a3 completion:(id /* block */)a4;
- (void)quitChannelWithRoomID:(id)a0 channelID:(id)a1 completion:(id /* block */)a2;
- (void)disbandChannelWithRoomID:(id)a0 channelID:(id)a1 completion:(id /* block */)a2;
- (void)kickOutUserWithRoomID:(id)a0 channelID:(id)a1 userID:(id)a2 secUserID:(id)a3 completion:(id /* block */)a4;
- (void)replyUserAccessChannelWithRoomID:(id)a0 channelID:(id)a1 secUid:(id)a2 isPermit:(BOOL)a3 completion:(id /* block */)a4;
- (void)fetchWhisperMessagesWithRoomID:(id)a0 userID:(id)a1 completion:(id /* block */)a2;
- (void)fetchChannelUserListWithRoomID:(id)a0 channelID:(id)a1 offset:(id)a2 count:(id)a3 completion:(id /* block */)a4;

@end
