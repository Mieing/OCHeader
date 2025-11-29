@class NSString;
@protocol RTVVoipWebServiceAdapterProtocol, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVXRRoomMessageSender, RTVSettingsManager, RTVUserProfileManagerInterface, RTVXRRoomClockController, RTVChatControllerDelegate;

@interface RTVRoomChatMessageController : NSObject <RTVChatDataController, RTVXRRoomMessageSenderObserver, RTVRoomChatMessageControllerInterface>

@property (readonly, weak, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, weak, nonatomic) id<RTVXRRoomClockController> roomClockController;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVVoipWebServiceAdapterProtocol> webServiceAccess;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (weak, nonatomic) id<RTVChatControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (id)sendMessage:(id)a0 toIM:(BOOL)a1;
- (void)sendGuideVerifyFakeMessageWithConversationId:(id)a0;
- (void)sendNobodySetRingtoneNoticeMessageWithConversationId:(id)a0 extra:(id)a1;
- (void)sendPeerUserSetRingtoneNoticeMessageWithConversationId:(id)a0 musicId:(id)a1 musicName:(id)a2 extra:(id)a3;
- (void)sendHangUpNotice:(id)a0 text:(id)a1 needShowRecall:(BOOL)a2 callType:(id)a3 hangUpCode:(long long)a4;
- (unsigned long long)__rtvChatMessageWithAWEIMRTVChatMessage:(long long)a0;
- (void)renderWithConversationID:(id)a0 type:(unsigned long long)a1;
- (id)notifyBannerDisplayName:(id)a0;
- (void)updateIMConvID:(id)a0;
- (void)messageSender:(id)a0 didReceiveMessage:(id)a1;
- (long long)getIMMessageTypeWithIMRTVMessageType:(long long)a0;
- (long long)getIMRTVMessageTypeWithIMMessageType:(long long)a0;
- (id)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
