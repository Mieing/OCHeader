@class IESLiveChatChannelTopUserListViewModel, RoomChannelInfo, NSString, IESLiveChatChannelTopUserListView;

@interface IESLiveChatChannelTopUserList : NSObject <IESLiveChatChannelTopUserListController, IESLiveChatChannelLinkmicActions>

@property (retain, nonatomic) IESLiveChatChannelTopUserListViewModel *userListViewModel;
@property (retain, nonatomic) RoomChannelInfo *channelInfo;
@property (retain, nonatomic) IESLiveChatChannelTopUserListView *userListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)enableAudioChat;
- (void)chatChannel:(id)a0 onUserMuted:(id)a1 mute:(BOOL)a2;
- (void)chatChannel:(id)a0 onUserVolumeChanged:(id)a1 volume:(long long)a2;
- (id)currentChannelInfo;
- (id)linkedUserListArray;
- (id)waitingUserListArray;
- (void)layoutWithMaxWidthIfNeeded:(double)a0;
- (void)showUserListPanel;
- (void)reloadListWithChannelInfo:(id)a0;
- (BOOL)isVolumeButtonShow;
- (void)reloadVolumeButton;
- (void).cxx_destruct;

@end
