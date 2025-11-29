@class NSNumber, NSString;

@interface HTSLiveInteractiveAPIV2 : HTSLiveApi <HTSLiveLinkMicSignalApi, IESLiveInteractiveLinkAPI>

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomID:(id)a0;
- (void)inviteInterComWithChannelID:(id)a0 roomID:(id)a1 callback:(id /* block */)a2;
- (void)closeInterComWithChannelID:(id)a0 roomID:(id)a1 callback:(id /* block */)a2;
- (void)replyInterComWithChannelID:(id)a0 replyType:(unsigned long long)a1 roomID:(id)a2 alwaysReject:(BOOL)a3 callback:(id /* block */)a4;
- (void)interactRivalListOfType:(long long)a0 finished:(id /* block */)a1;
- (void)updateStreamLayoutWithType:(int)a0 focusUid:(id)a1 channelID:(id)a2 roomID:(id)a3 callback:(id /* block */)a4;
- (void)getMultiLinkSettingsWithRoomID:(id)a0 userID:(id)a1 secUid:(id)a2 callback:(id /* block */)a3;
- (void)updateMultiLinkSettings:(id)a0 withRoomID:(id)a1 secUid:(id)a2 callback:(id /* block */)a3;
- (void)replySwitchChannel:(unsigned long long)a0 extraParams:(id)a1 fromAnchorID:(id)a2 fromRoomID:(id)a3 toJoinChannelID:(id)a4 completion:(id /* block */)a5;
- (void)inviteSwitchChannel:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)cancelSwitchChannel:(id)a0 completion:(id /* block */)a1;
- (void)muteAnchorMicWithUserID:(id)a0 channelID:(id)a1 toRoomID:(id)a2 silence:(BOOL)a3;
- (void)muteAllAnchorMicWithChannelID:(id)a0 silence:(BOOL)a1 completion:(id /* block */)a2;
- (void)getMultiChannelInfo:(id)a0 requestSource:(unsigned long long)a1 callback:(id /* block */)a2;
- (void)updateCrossRoomStatus:(id)a0 roomID:(id)a1 toRoomID:(id)a2 silence:(BOOL)a3 isBackground:(BOOL)a4 callback:(id /* block */)a5;
- (void)sendSignal:(id)a0 toUsers:(id)a1 channel:(id)a2 finished:(id /* block */)a3;
- (void)fetchListWithStatus:(unsigned long long)a0 channelID:(id)a1 anchorID:(id)a2 isAudience:(BOOL)a3 source:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)guestCheckLinkerWithLinkType:(long long)a0 silenceStatus:(long long)a1 videoCaptureType:(int)a2 audioCaptureType:(int)a3 filterReason:(int)a4 rtcInfoParams:(id)a5 completion:(id /* block */)a6;
- (void)checkAudienceLinkersWithList:(id)a0 rtcInfoParams:(id)a1 requestSource:(id)a2 callback:(id /* block */)a3;
- (void)checkAnchorLinkersWithList:(id)a0 rtcInfoParams:(id)a1 requestSource:(id)a2 callback:(id /* block */)a3;
- (void)muteAIUserMicWithUserID:(id)a0 channelID:(id)a1 silence:(BOOL)a2 completion:(id /* block */)a3;
- (void)sendSignal:(id)a0 toUsers:(id)a1 channel:(id)a2 extra:(id)a3 finished:(id /* block */)a4;
- (void)inviteUser:(id)a0 secUserID:(id)a1 extraParams:(id)a2 callback:(id /* block */)a3;
- (void)replyUser:(id)a0 type:(unsigned long long)a1 extraParams:(id)a2 callback:(id /* block */)a3;
- (void)applyChannel:(id)a0 toUser:(id)a1 secUserID:(id)a2 extraParams:(id)a3 callback:(id /* block */)a4;
- (void)cancelInviteUser:(id)a0 secUserID:(id)a1 source:(unsigned long long)a2 extraParams:(id)a3 callback:(id /* block */)a4;
- (void)cancelApplyChannel:(id)a0 toUser:(id)a1 toSecUserID:(id)a2 source:(unsigned long long)a3 extraParams:(id)a4 callback:(id /* block */)a5;
- (void)permitUser:(id)a0 extraParams:(id)a1 callback:(id /* block */)a2;
- (void)joinChannel:(id)a0 extraParams:(id)a1 callback:(id /* block */)a2;
- (void)leaveChannel:(id)a0 source:(unsigned long long)a1 extraParams:(id)a2 callback:(id /* block */)a3;
- (void)kickoutUser:(id)a0 extraParams:(id)a1 callback:(id /* block */)a2;
- (void)turnOffChannel:(id)a0 source:(unsigned long long)a1 extraParams:(id)a2 callback:(id /* block */)a3;
- (void)switchChannelID:(id)a0 fromUserID:(id)a1 fromScene:(unsigned long long)a2 toScene:(unsigned long long)a3 toPlayMode:(int)a4 extraParams:(id)a5 callback:(id /* block */)a6;
- (void)interactRivalList:(id /* block */)a0;
- (void)muteAnchorMicWithUserID:(id)a0 channelID:(id)a1;
- (void).cxx_destruct;

@end
