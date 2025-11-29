@class NSArray, RoomChannelInfo, IESLiveChatChannelTopUserCellModel, IESLiveChatChannelUserListPanel;
@protocol IESLiveChatChannelTopUserListUpdatable, IESLiveChatChannelTopUserListController;

@interface IESLiveChatChannelTopUserListViewModel : NSObject

@property (retain, nonatomic) IESLiveChatChannelTopUserCellModel *ownerCellModel;
@property (copy, nonatomic) NSArray *userCellModels;
@property (nonatomic) long long totalUserCount;
@property (retain, nonatomic) IESLiveChatChannelUserListPanel *userListPanel;
@property (retain, nonatomic) RoomChannelInfo *channelInfo;
@property (nonatomic) BOOL shouldShowSpeakerButton;
@property (nonatomic) long long originRemoteVolume;
@property (weak, nonatomic) id<IESLiveChatChannelTopUserListUpdatable> list;
@property (weak, nonatomic) id<IESLiveChatChannelTopUserListController> controller;
@property (readonly, nonatomic) BOOL isRemoteMuted;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)bindData:(id)a0;
- (void)updateUserVolume:(id)a0 volume:(long long)a1;
- (void)updateUserMuteState:(id)a0 mute:(BOOL)a1;
- (void)reloadVolumeButtonState;
- (void)showUserListPanel;
- (void)handleMuteRemoteVolume;
- (void)reloadUserList;
- (void)reloadUserList:(id)a0;
- (void)reloadSpeakerButtonHiddenWithLinkedList:(id)a0;
- (id)cellModelWithUser:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (void)setup;
- (BOOL)shouldShowSeparator;

@end
