@class HTSLiveUser, NSArray, NSString, IESLiveChatChannelUserListPanelCellAction;
@protocol IESLiveChatChannelUserListPanelCellView, IESLiveChatChannelUserListPanelCellDataProvider;

@interface IESLiveChatChannelUserListPanelCellModel : NSObject

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL isOwner;
@property (weak, nonatomic) id<IESLiveChatChannelUserListPanelCellView> cell;
@property (weak, nonatomic) id<IESLiveChatChannelUserListPanelCellDataProvider> dataProvider;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *avatarImageUrls;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) IESLiveChatChannelUserListPanelCellAction *action;

- (void)updateMute:(BOOL)a0;
- (void)openUserPreview;
- (void)bindUser:(id)a0;
- (void)bindLinkedUser:(id)a0;
- (void)bindActionsWithUser:(id)a0 style:(unsigned long long)a1;
- (void)bindUser:(id)a0 isOwner:(BOOL)a1;
- (void)_bindUser:(id)a0 isOwner:(BOOL)a1;
- (BOOL)isCurrentUserAdminOrOwner;
- (BOOL)isSelf:(id)a0;
- (void)bindLinkedUser:(id)a0 isOwner:(BOOL)a1;
- (BOOL)isLinkedUser;
- (void)bindChannelWaitingUser:(id)a0;
- (void)bindLinkWaitingUser:(id)a0;
- (void)bindLinkInvitedUser:(id)a0;
- (void)updateVolume:(long long)a0;
- (void).cxx_destruct;
- (void)reload;

@end
