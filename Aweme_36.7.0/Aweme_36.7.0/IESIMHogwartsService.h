@class NSString;

@interface IESIMHogwartsService : HTSService <IESIMHogwartsService, AWERTVIMCommandMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeVoIPWithTargetUserID:(id)a0 targetStickerID:(id)a1 selfStickerID:(id)a2 enterFrom:(long long)a3 trackDict:(id)a4;
- (void)joinGroupVoipWithRoomID:(id)a0 enterFrom:(long long)a1 sessionCompletion:(id /* block */)a2;
- (void)joinGroupVoipWithRoomID:(id)a0 cameraOff:(id)a1 enterFrom:(long long)a2 sessionCompletion:(id /* block */)a3;
- (void)prejoinCheckOnTheCallWarningAlertWithRoomID:(id)a0 confirmHandler:(id /* block */)a1 refusehandler:(id /* block */)a2;
- (void)observeRoom:(BOOL)a0 withRoomID:(id)a1 callback:(id /* block */)a2;
- (void)showVoipRingtoneDetailPanelWithMusicId:(id)a0 enablePlay:(BOOL)a1 extra:(id)a2;
- (void)showVoipRingtonePickerWithExtra:(id)a0 dismissCompletion:(id /* block */)a1;
- (void)showVoipRingtoneHistoryPickerPanelWithExtra:(id)a0 dismissCompletion:(id /* block */)a1;
- (void)checkVoipRoomAliveWithID:(id)a0 callback:(id /* block */)a1;
- (BOOL)isVoipEnable;
- (BOOL)isInRTV;
- (BOOL)isSceneEnable;
- (BOOL)isRingtoneEnable;
- (void)preCreateMainAppIDEngine;
- (void)clearPreCreatedEngine;
- (BOOL)isCameraRelatedFunctionEnabled;
- (id)enterFromWithMsgConvID:(id)a0;
- (id)enterMethodWithMsgConvID:(id)a0;
- (void)messageListAppear:(BOOL)a0 withConvID:(id)a1;
- (BOOL)isRTVAudioEnableWithUid:(id)a0 scene:(unsigned long long)a1 shortConversationID:(id)a2;
- (BOOL)isRTVVideoEnableWithUid:(id)a0 scene:(unsigned long long)a1 shortConversationID:(id)a2;
- (BOOL)isDegradeByServerWithUid:(id)a0 isVideo:(BOOL)a1;
- (BOOL)viewIsNarrowVisible;
- (void)invokeVoipWithTargetUserID:(id)a0 type:(long long)a1 enterFrom:(long long)a2 extraAction:(unsigned long long)a3 trackDict:(id)a4 succeed:(id /* block */)a5;
- (id)notificationNameOfRTVFeedShareRouteToChatNotification;
- (void)showVoipActionSheetViewWithVideoHandleAction:(id /* block */)a0 audioHandleAction:(id /* block */)a1;
- (void)showIMVoipActionSheetViewWithVideoHandleAction:(id /* block */)a0 audioHandleAction:(id /* block */)a1 cancelHandler:(id /* block */)a2 onView:(id)a3 showCompletion:(id /* block */)a4;
- (void)showVoipActionSheetViewWithFeedShareHandleAction:(id /* block */)a0 gameHandleAction:(id /* block */)a1;
- (void)trackVoipEntranceShowStatusWithParams:(id)a0;
- (void)invokeRTVInteractionOperationWithParams:(id)a0 invitees:(id)a1 conversationID:(id)a2 autoJoinConfig:(id)a3;
- (BOOL)isInviteFriendTogetherRoomOverWithKey:(id)a0;
- (void)setInviteFriendTogetherRoomOverWithKey:(id)a0 over:(BOOL)a1;
- (void)didReceiveCommandMessage:(id)a0;
- (unsigned long long)convertIESRTVDegradeScene:(unsigned long long)a0;
- (void)invokeRTVInteractionOperationWithMessage:(id)a0;
- (id)init;
- (void)dealloc;

@end
