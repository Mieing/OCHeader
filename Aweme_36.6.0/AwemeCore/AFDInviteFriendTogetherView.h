@class UITableView, UILabel, AWEButton, NSString, AFDPlayTogetherFriendsDataManager, UIView, AFDInviteFriendTogetherViewModel;

@interface AFDInviteFriendTogetherView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AFDPlayTogetherFriendsDataManager *dataManager;
@property (retain, nonatomic) AFDInviteFriendTogetherViewModel *viewModel;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *emptyView;
@property (nonatomic) BOOL hasMoreFriendFooterView;
@property (nonatomic) long long maxFrinedCount;
@property (retain, nonatomic) UILabel *togetherLabel;
@property (retain, nonatomic) AWEButton *inviteButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupCorner;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 dataController:(id)a2;
- (BOOL)needShowIntimateCard;
- (void)p_switchFriendBtnDidClcked:(id)a0;
- (id)makeTogethertextWithDays:(long long)a0;
- (void)p_trackMoreFriendFooterWithEvent:(id)a0;
- (void)p_trackFriendShowWithFriend:(id)a0;
- (void)p_inviteBtnDidClicked;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)reloadTableView;

@end
