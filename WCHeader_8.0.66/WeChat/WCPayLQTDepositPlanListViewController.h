@class UIView, NSString, NSArray, UIImageView, UIButton, WCPayCss, UILabel, MMTableView;
@protocol WCPayLQTDepositPlanListViewControllerDelegate;

@interface WCPayLQTDepositPlanListViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate> {
    MMTableView *m_tableView;
    id<WCPayLQTDepositPlanListViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) NSArray *planList;
@property (retain, nonatomic) UIView *navBackground;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain) WCPayCss *css;
@property (retain) UIView *containerView;
@property (retain) UIView *headerView;
@property (retain) UIImageView *emptyIcon;
@property (retain) UILabel *emptyLabel;
@property (retain) UIView *emptyFooterView;
@property (retain) UIView *addView;
@property (retain) UIImageView *addIcon;
@property (retain) UILabel *addLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContainerView;
- (void)updateHeaderView;
- (void)updateEmptyIcon;
- (void)updateEmptyLabel;
- (void)updateEmptyFooterView;
- (void)updateAddView;
- (void)onClickAddView;
- (void)updateAddIcon;
- (void)updateAddLabel;
- (void)setDelegate:(id)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)initNavigationBar;
- (void)onBack;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)refreshViewWithData:(id)a0;
- (void)addNavigationBarBackground:(id)a0;
- (void)onNewDepositPlanBtnClick:(id)a0;
- (void)updateTableView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)bannerBtnClick;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makePlanItemCellView:(id)a0 cell:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)makeAddNewPlanCell:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
