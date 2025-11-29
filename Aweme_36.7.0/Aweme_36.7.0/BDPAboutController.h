@class UIView, UIScrollView, BDPAboutTrustLevelView, BDPAboutEasterEggDetailInfosView, BDPAboutInfoModel, NSString, BDPAboutTradeCommentView, UITableView, NSDictionary, BDPThreadSafeArray, BDPAboutSummaryView;

@interface BDPAboutController : BDPBusinessXScreenViewController <UITableViewDelegate, UITableViewDataSource, BDPAboutTradeCommentViewDelegate>

@property (retain, nonatomic) BDPAboutInfoModel *aboutModel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) BDPAboutSummaryView *summaryView;
@property (retain, nonatomic) BDPAboutTrustLevelView *trustLevelView;
@property (retain, nonatomic) BDPAboutTradeCommentView *commentView;
@property (retain, nonatomic) BDPAboutEasterEggDetailInfosView *footerView;
@property (retain, nonatomic) NSDictionary *unionAuthInfo;
@property (retain, nonatomic) BDPThreadSafeArray *itemList;
@property (copy, nonatomic) id /* block */ disappearAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)onBackBtnClicked;
- (void)showDetailInfo;
- (void)getUnionAuthInfo;
- (void)addTableViewItem:(long long)a0;
- (BOOL)showTrustLevelView;
- (id)setNavigationBarBackButton;
- (void)parseAboutInfo:(id)a0;
- (void)sendEventOfficialAccountShow;
- (void)sendOfficialAccountClickEvent;
- (void)requestEasterEggAuthorization:(id /* block */)a0;
- (void)onSummaryNameLabelTapped;
- (void)onIconViewTapped;
- (void)commentViewDidSelectDetailPage;
- (void)commentViewDidSelectCommentPage;
- (void)updateNavigationBarStyle;
- (BOOL)XScreenWindowShouldShowCustomButton:(id)a0;
- (BOOL)XScreenWindowShouldShowLeftCustomButton:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)shouldAutorotate;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupData;
- (void)reloadTableView;
- (void)updateNavigationTitle;

@end
