@class AWEIMSendMessageController, NSString, NSArray, IESIMCoreServiceFactory, IESIMMessageChatRoomDataManger, NSMutableArray;
@protocol AWEIMRTVChatControllerDelegate;

@interface AWEIMRTVChatController : NSObject <IESIMMessageChatRoomDataMangerDelegate, IESIMMessageSenderDelegate, IESIMChatDataManagerDelegate, AWEIMRTVChatControllerProtocol>

@property (readonly, nonatomic) AWEIMSendMessageController *sendController;
@property (readonly, nonatomic) IESIMMessageChatRoomDataManger *dataManager;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *imConversationID;
@property (readonly, copy, nonatomic) NSArray *messageTypeWhiteList;
@property (weak, nonatomic) IESIMCoreServiceFactory *serviceFactory;
@property (readonly, nonatomic) NSMutableArray *sentMsgs;
@property (nonatomic) long long markedOrderIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMRTVChatControllerDelegate> delegate;

- (void)iesim_chatDataManager:(id)a0 chatListDidUpdateWithDeletedChats:(id)a1 insertedChats:(id)a2 firstPage:(BOOL)a3 reason:(long long)a4;
- (void)iesim_chatDataManager:(id)a0 totalUnreadCountUpdate:(long long)a1;
- (void)iesim_onConversationDataSourceMessagesCreated:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2;
- (void)iesim_didReceiveSendMessageResponse:(id)a0;
- (void)iesim_didReceiveAsyncSendMessageResponse:(id)a0;
- (void)updateConvID:(id)a0 forType:(unsigned long long)a1;
- (id)sendMessage:(id)a0 toIM:(BOOL)a1;
- (void)sendGuideVerifyFakeMessageWithConversationId:(id)a0;
- (void)sendNobodySetRingtoneNoticeMessageWithConversationId:(id)a0 extra:(id)a1;
- (void)sendPeerUserSetRingtoneNoticeMessageWithConversationId:(id)a0 musicId:(id)a1 musicName:(id)a2 extra:(id)a3;
- (void)sendHangUpNotice:(id)a0 text:(id)a1 needShowRecall:(BOOL)a2 callType:(id)a3 hangUpCode:(long long)a4;
- (void)messageLanded:(id)a0;
- (id)initWithConversationID:(id)a0 type:(unsigned long long)a1 delegate:(id)a2;
- (void)__activeDataManagerType:(unsigned long long)a0;
- (long long)__aweIMMessageTypeWithRTVMessageType:(long long)a0;
- (void)__didReceiveMsg:(id)a0 isSelfSendResp:(BOOL)a1;
- (void)__didReceiveSelfSendResponse:(id)a0;
- (void)__rtvChatControllerDidReceiveMessages:(id)a0;
- (void)__didReceiveSendMessageResponse:(id)a0 async:(BOOL)a1;
- (void)iesim_chatRoom:(id)a0 didReceiveMessages:(id)a1;
- (void)iesim_chatRoom:(id)a0 didReceiveSendMessageResponse:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
