@class NSString, RTVVoipNotifyViewDataService;
@protocol RTVUserProfileManagerInterface, RTVChatControllerDelegate, AWEIMRTVChatControllerProtocol, RxInjector, RTVXRRoomSessionControllerInterface, RTVInteractionConfigureManagerInterface, RTVVoipContextManagerInterface;

@interface __RTVChatDataController : NSObject <RTVChatDataController, AWEIMRTVChatControllerDelegate, RTVXRControllerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomSession;
@property (readonly, nonatomic) id<AWEIMRTVChatControllerProtocol> chatController;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVVoipNotifyViewDataService *notifyViewDataService;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigManager;
@property (readonly, copy, nonatomic) NSString *imConvID;
@property (weak, nonatomic) id<RTVChatControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (unsigned long long)__imRTVChatControllerType:(unsigned long long)a0;
- (id)__createChatController:(id)a0 type:(unsigned long long)a1;
- (id)sendMessage:(id)a0 toIM:(BOOL)a1;
- (void)sendGuideVerifyFakeMessageWithConversationId:(id)a0;
- (void)sendNobodySetRingtoneNoticeMessageWithConversationId:(id)a0 extra:(id)a1;
- (void)sendPeerUserSetRingtoneNoticeMessageWithConversationId:(id)a0 musicId:(id)a1 musicName:(id)a2 extra:(id)a3;
- (void)sendHangUpNotice:(id)a0 text:(id)a1 needShowRecall:(BOOL)a2 callType:(id)a3 hangUpCode:(long long)a4;
- (BOOL)__isSendFromSelf:(id)a0;
- (id)__rtvMessageWithIMMessage:(id)a0;
- (unsigned long long)__rtvChatMessageWithAWEIMRTVChatMessage:(long long)a0;
- (unsigned long long)__rtvChatMessageStatusWithAWEIMRTVChatMessageStatus:(long long)a0;
- (void)renderWithConversationID:(id)a0 type:(unsigned long long)a1;
- (id)notifyBannerDisplayName:(id)a0;
- (void)updateIMConvID:(id)a0;
- (void)rtvChatController:(id)a0 didReceiveMessages:(id)a1;
- (void)rtvChatController:(id)a0 sendErrorWithNotFriend:(id)a1;
- (void)rtvChatController:(id)a0 didReceiveSendMessageResponse:(id)a1 error:(id)a2;
- (BOOL)rtvChatControllerEnableDoubleSend;
- (BOOL)rtvChatControllerEnableDoubleReceive;
- (void).cxx_destruct;

@end
