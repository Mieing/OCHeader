@class NSString;

@interface AWEIMRedPacketFactoryProtocol : HTSService <AWEIMRedPacketFactoryProtocol>

@property (nonatomic) BOOL isRefreshingUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)aweim_isNewDefinedSocialGroup:(id)a0;
- (void)sendGiphyMessageWithContent:(id)a0 aweType:(long long)a1 conversationID:(id)a2 enterMethod:(id)a3;
- (BOOL)isEnableSendRedPacketWithUser:(id)a0 conversation:(id)a1 needToast:(BOOL)a2;
- (void)p_redPackRejectWithToast:(id)a0 conversation:(id)a1;
- (void)trackRedPackRejectEventWithConversation:(id)a0;
- (BOOL)isPitayaRevert;
- (BOOL)isGroupBlocked:(id)a0;
- (id)createConversationWithId:(id)a0;
- (id)createConversationWithId:(id)a0 options:(id)a1;
- (void)sendGiphyMessageWithContent:(id)a0 conversationID:(id)a1;
- (void)sendInteractiveEmojiGiphyMessageWithContent:(id)a0 conversationID:(id)a1 enterMethod:(id)a2;
- (void)sendRedPacketWithContent:(id)a0 conversationID:(id)a1 isFansCreator:(BOOL)a2 preSendMsgID:(id)a3 coverId:(id)a4 isPitayaRedpacket:(BOOL)a5;
- (id)createVolumeIncreaseViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fetchSendRedPacketEnableStatusWithConversation:(id)a0 completion:(id /* block */)a1;
- (void)didOpenRedPacketWithConversationId:(id)a0 isPitayaRedPacket:(BOOL)a1;
- (void)didSendRedPacketMessageWithConversationId:(id)a0 isPitayaRedPacket:(BOOL)a1;
- (id)nickNamePlaceHolderKey;
- (BOOL)openTaskResultPanelIfParamValid:(id)a0;
- (void)recordPetElfAsset:(id)a0;
- (BOOL)ifAccountHasPetElfAsset;

@end
