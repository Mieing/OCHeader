@class NSString, ContactUpdateHelper, WARedEnvelopesDetailViewModel, UIView, MMTableView;

@interface WARedEnvelopesDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource> {
    MMTableView *m_tableView;
    UIView *m_oHeaderView;
    WARedEnvelopesDetailViewModel *m_viewModel;
    UIView *oTopHeaderView;
}

@property (retain, nonatomic) ContactUpdateHelper *m_helperForSenderNickName;
@property (retain, nonatomic) UIView *m_pinImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)setColorTitle:(id)a0 TextColor:(id)a1;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (id)GetViewHeader:(id)a0;
- (id)GetHeaderView:(id)a0;
- (void)gotoBalanceDetail;
- (void)onLeftBarButtonDone;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeCell:(id)a0 cell:(id)a1 row:(unsigned long long)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)addBorderViewBottomAtView:(id)a0;
- (void).cxx_destruct;

@end
