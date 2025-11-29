@class HTSLiveUser, NSArray, IESLiveChatChannelUserListPanelCellModel, RoomChannelInfo, NSString;
@protocol IESLiveChatChannelUserListPanelView, IESLiveChatChannelUserListController;

@interface IESLiveChatChannelUserListPanelViewModel : NSObject <IESLiveChatChannelUserListPanelCellDataProvider>

@property (copy, nonatomic) NSArray *users;
@property (copy, nonatomic) NSArray *listSections;
@property (retain, nonatomic) IESLiveChatChannelUserListPanelCellModel *infoCell;
@property (retain, nonatomic) IESLiveChatChannelUserListPanelCellModel *settingCell;
@property (retain, nonatomic) HTSLiveUser *ownerUser;
@property (retain, nonatomic) RoomChannelInfo *channelInfo;
@property (nonatomic) BOOL shouldShowLoadMore;
@property (weak, nonatomic) id<IESLiveChatChannelUserListPanelView> view;
@property (weak, nonatomic) id<IESLiveChatChannelUserListController> controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore:(id /* block */)a0;
- (id)linkedUserList;
- (void)updateUserVolume:(id)a0 volume:(long long)a1;
- (id)currentChannelInfo;
- (void)updateUserMuteState:(id)a0 mute:(BOOL)a1;
- (void)reloadWithChannelInfo:(id)a0;
- (void)reloadWithChannelUserList:(id)a0 hasMore:(BOOL)a1;
- (id)linkWaitingUserList;
- (BOOL)isCurrentChannelEnableAudioChat;
- (BOOL)isUserWaitingLinked:(id)a0;
- (BOOL)isUserMuted:(id)a0;
- (void)handleCellSelectAtIndexPath:(id)a0;
- (void)handleSettingButtonClicked;
- (void).cxx_destruct;

@end
