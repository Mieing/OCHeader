@class UIView, NSString, NSArray, UIImageView, UIButton, UITableView, NSMutableArray, IESLiveInviteFriendTableHeaderView, UILabel;
@protocol IESLiveIMService;

@interface IESLiveChatShareEmptyView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) BOOL noneUsersState;
@property (retain, nonatomic) UIImageView *noneUsersIcon;
@property (retain, nonatomic) UIView *labelView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *inviteButton;
@property (retain, nonatomic) UITableView *friendsTableView;
@property (retain, nonatomic) IESLiveInviteFriendTableHeaderView *tableHeaderView;
@property (retain, nonatomic) NSMutableArray *avatarFriendList;
@property (retain, nonatomic) NSMutableArray *selectedFriendArray;
@property (retain, nonatomic) NSMutableArray *recommendList;
@property (retain, nonatomic) NSArray *recommendSection;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) id<IESLiveIMService> imService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)clearStatus;
- (void)refreshView;
- (void)followUser:(id)a0;
- (id)recommendDisplayRecommendReasonWithShareModel:(id)a0;
- (void)refreshUserList;
- (void)filterFriendListGroupChat;
- (void)p_addSelectedFriend:(id)a0;
- (void)setupNoneFriendView;
- (void)clearSubviewsData;
- (void)inviteFriendsAction:(id)a0;
- (void)longPressInvite;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)setupView;
- (void)setupViews;

@end
