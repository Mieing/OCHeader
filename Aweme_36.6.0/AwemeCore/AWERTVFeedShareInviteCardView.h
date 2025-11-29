@class NSString, AWEIMRTVInviteFriendMessage;

@interface AWERTVFeedShareInviteCardView : AWEIMRTVInviteCardView <AWERTVIMCommandMessage>

@property (retain, nonatomic) AWEIMRTVInviteFriendMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableInvokeNewRoom;

- (void)renderModel:(id)a0;
- (void)didReceiveCommandMessage:(id)a0;
- (void)configComponents;
- (void)__configSubtitleLabelWithRoomTerminal:(BOOL)a0;
- (void)__refreshInviteCardStatusWithShowTips:(BOOL)a0;
- (void)__markRoomTerminal;
- (void)__refreshUIWithRoomTerminal:(BOOL)a0;
- (id)__roomTerminalLocalExtKey;
- (void)__requestRoomStatusWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)__handleJoinRoom;
- (void)handleJoinButtonClick:(id)a0;
- (void)handleBubbleTapAction:(id)a0;
- (void).cxx_destruct;

@end
