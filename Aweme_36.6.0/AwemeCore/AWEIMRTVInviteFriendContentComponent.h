@class NSString;

@interface AWEIMRTVInviteFriendContentComponent : AWEIMFlexComponent <IESIMRTVIMCommandMessage, AWEIMMessageContentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)didTapContent;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)didReceiveCommandMessage:(id)a0;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)__markRoomTerminal;
- (id)__roomTerminalLocalExtKey;
- (void)__requestRoomStatusWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)__handleJoinRoom;
- (void)p_createSmallCardPresenter;
- (void)__refreshInviteCardStatusWithShowTips:(BOOL)a0 enableReload:(BOOL)a1;
- (id)rtvInviteMessage;
- (id)__subtitleLabelWithRoomTerminal:(BOOL)a0;
- (void)__refreshUIWithRoomTerminal:(BOOL)a0 enableReload:(BOOL)a1;
- (id)displayMessage;
- (void)dealloc;

@end
