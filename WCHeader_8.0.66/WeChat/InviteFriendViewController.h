@class InviteFriendLogic, NSString, MMTableViewInfo;

@interface InviteFriendViewController : MMUIViewController <MMTableViewInfoDelegate, InviteFriendLogicDelegate>

@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) InviteFriendLogic *inviteLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupInviteLogic:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (void)initTableView;
- (void)initTableCells;
- (void)makeHeaderView:(id)a0;
- (void)makeInviteSourceCell:(id)a0 cellInfo:(id)a1;
- (void).cxx_destruct;

@end
