@class AFDSJBSearchView, UIView, NSObject, NSString, AFDInviteFriendTogetherViewModel, UITableView, AFDSJBInviteFriendHeader, AFDPlayTogetherFriendsDataManager, DUXButton, UILabel, NSMutableArray;
@protocol AWEUserRecommendCardTrackManagerProtocol;

@interface AFDSJBInviteFriendView : UIView <UITableViewDelegate, UITableViewDataSource, AFDSJBSearchViewDelegate>

@property (retain, nonatomic) AFDPlayTogetherFriendsDataManager *dataManager;
@property (retain, nonatomic) AFDInviteFriendTogetherViewModel *viewModel;
@property (retain, nonatomic) UITableView *searchTableView;
@property (retain, nonatomic) AFDSJBSearchView *searchTableViewHeader;
@property (retain, nonatomic) UILabel *searchEmptyLabel;
@property (retain, nonatomic) UITableView *recentTableView;
@property (retain, nonatomic) AFDSJBInviteFriendHeader *recentTableViewHeader;
@property (retain, nonatomic) UIView *inviteButtonContainer;
@property (retain, nonatomic) DUXButton *inviteButton;
@property (retain, nonatomic) NSMutableArray *selectedFriendArray;
@property (retain, nonatomic) NSObject<AWEUserRecommendCardTrackManagerProtocol> *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)followUser:(id)a0;
- (void)finishSearch;
- (void)searchUser;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 dataController:(id)a2;
- (void)p_inviteBtnDidClicked;
- (void)selectFriend:(id)a0;
- (void)updateInviteButtonStatus;
- (BOOL)enableShowRecentFriendsInSection:(long long)a0;
- (BOOL)checkFriendIsSelected:(id)a0;
- (id)friendAtIndexPath:(id)a0;
- (void)p_inviteByOffSite;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)reloadTableView;

@end
