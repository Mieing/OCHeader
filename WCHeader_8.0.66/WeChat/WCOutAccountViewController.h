@class MMTableView, NSString, UIImageView, UILabel, WCOutInviteFriendLogic, MMUILabel;

@interface WCOutAccountViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCOutInviteFriendLogicDelegate, IWCOutFacadeExt, ILinkEventExt>

@property (retain, nonatomic) UIImageView *recordRedDot;
@property (retain, nonatomic) UILabel *remainingTime;
@property (retain, nonatomic) UILabel *invalidDate;
@property (retain, nonatomic) MMUILabel *discountLabel;
@property (retain, nonatomic) UIImageView *chargeRedDot;
@property (retain, nonatomic) UIImageView *msgRedDot;
@property (retain, nonatomic) NSString *enterTs;
@property (retain, nonatomic) NSString *outTs;
@property (nonatomic) unsigned int clickDetailCount;
@property (nonatomic) unsigned int clickFeedbackCount;
@property (nonatomic) unsigned int clickReadmeCount;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WCOutInviteFriendLogic *inviteFriendLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidPop:(BOOL)a0;
- (void)viewDidBePushed:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)configModel;
- (void)configTableView;
- (id)configCloseFuntionFooterView;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)clickFAQButton;
- (void)clickAgreementButton;
- (void)didReceiveCouponResponse;
- (void)finishShowAnimation;
- (long long)getRealSectionIndex:(long long)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeAccountCell:(id)a0;
- (void)makeChargeCell:(id)a0;
- (void)refreshDisCountLabel;
- (void)makeRecordCell:(id)a0;
- (void)makeMsgCell:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)updateNewxmlInfo;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)configRightBarButtonItem;
- (void)onClickMoreBtn;
- (void)onClickActionSheetWebRecharge;
- (void)onClickActionSheetShareRecord;
- (id)getPackageArr;
- (double)getAccountCellHeight;
- (void)onCheckFeeClicked;
- (void).cxx_destruct;

@end
