@class NSString, IESLiveChatChannelUserListPanelView, IESLiveMessageChannelApi, IESLiveChatChannelUserListPanelViewModel, RoomChannelInfo, NSMutableArray, NSNumber;
@protocol IESLiveChatChannelUserListPanelDelegate;

@interface IESLiveChatChannelUserListPanel : NSObject <IESLiveChatChannelUserListController, IESLiveChatChannelLinkmicActions, IESLiveChatChannelAction>

@property (retain, nonatomic) IESLiveChatChannelUserListPanelViewModel *panelViewModel;
@property (retain, nonatomic) IESLiveChatChannelUserListPanelView *panelView;
@property (retain, nonatomic) IESLiveMessageChannelApi *api;
@property (retain, nonatomic) NSMutableArray *cachedAllUsers;
@property (retain, nonatomic) RoomChannelInfo *cachedChannelInfo;
@property (readonly, nonatomic) NSNumber *channelID;
@property (weak, nonatomic) id<IESLiveChatChannelUserListPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)enableInvite;
- (void)chatChannelAllowInviteSettingChanged:(BOOL)a0 channelID:(id)a1;
- (void)chatChannel:(id)a0 linkmicStateDidChangeFrom:(long long)a1 to:(long long)a2;
- (void)chatChannel:(id)a0 onUserMuted:(id)a1 mute:(BOOL)a2;
- (void)chatChannel:(id)a0 onUserVolumeChanged:(id)a1 volume:(long long)a2;
- (id)linkedUserList;
- (void)enableUserListPanelAccess:(BOOL)a0;
- (void)trackChatChannelUserListPanelShow;
- (void)reloadData:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableAnnouncement;
- (BOOL)isAudioChatEnable;
- (id)linkWaitingUserList;
- (void)onSelectUser:(id)a0;
- (void)onClickedSetting;
- (void)onClickedInvite;
- (void)onClickedAnnouncement;
- (void)onLoadMore:(id /* block */)a0;
- (void)reloadLinkedUser:(id)a0;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (void)setAccessibilityElementsHidden:(BOOL)a0;
- (void)show:(id /* block */)a0;
- (void)dismiss:(id /* block */)a0;
- (id)roomID;

@end
