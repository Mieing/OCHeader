@interface IESLiveChatChannelLinkmicAPI : HTSLiveApi

- (void)applyWithRoomID:(id)a0 channelID:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)cancelApplyWithRoomID:(id)a0 channelID:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)replyApplyWithRoomID:(id)a0 channelID:(id)a1 secUserID:(id)a2 permit:(BOOL)a3 extra:(id)a4 completion:(id /* block */)a5;
- (void)inviteWithRoomID:(id)a0 channelID:(id)a1 secUserID:(id)a2 extra:(id)a3 completion:(id /* block */)a4;
- (void)cancelInviteWithRoomID:(id)a0 channelID:(id)a1 secUserID:(id)a2 extra:(id)a3 completion:(id /* block */)a4;
- (void)replyInviteWithRoomID:(id)a0 channelID:(id)a1 permit:(BOOL)a2 extra:(id)a3 completion:(id /* block */)a4;
- (void)joinChannelWithRoomID:(id)a0 channelID:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)exitChannelWithRoomID:(id)a0 channelID:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)kickoutWithRoomID:(id)a0 channelID:(id)a1 secUserID:(id)a2 extra:(id)a3 completion:(id /* block */)a4;
- (void)fetchRTCInfoWithRoomID:(id)a0 roomChannelID:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)silenceWithRoomID:(id)a0 roomChannelID:(id)a1 roomChannelOwnerSecID:(id)a2 secUserID:(id)a3 extra:(id)a4 completion:(id /* block */)a5;
- (void)unsilenceWithRoomID:(id)a0 roomChannelID:(id)a1 roomChannelOwnerSecID:(id)a2 secUserID:(id)a3 extra:(id)a4 completion:(id /* block */)a5;
- (void)checkLinkersWithRoomID:(id)a0 roomChannelID:(id)a1 requestSource:(id)a2 linkmicIDList:(id)a3 extra:(id)a4 completion:(id /* block */)a5;
- (void)checkAudienceLinkersWithRoomID:(id)a0 roomChannelID:(id)a1 silenceStatus:(BOOL)a2 publishStatus:(int)a3 extra:(id)a4 completion:(id /* block */)a5;

@end
