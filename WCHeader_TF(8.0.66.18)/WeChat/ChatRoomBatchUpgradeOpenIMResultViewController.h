@class UIButton, NSString, NSMutableDictionary, MMAcceptAgreementCommonHeadView, UIImage, NSMutableArray, MMTableView;

@interface ChatRoomBatchUpgradeOpenIMResultViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate> {
    MMTableView *m_tableView;
    NSMutableArray *m_upgradeOpenIMChatRoomAr;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    UIImage *m_logoSVGImage;
    UIButton *m_iAcceptBtn;
}

@property (retain, nonatomic) NSMutableDictionary *dicBatchUpgradeOpenIMResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initData;
- (void)layoutView;
- (void)layoutCommonHeadView;
- (void)layoutIAcceptBtn;
- (void)reloadData;
- (void)initTableView;
- (id)genHeaderView;
- (void)reloadTableData;
- (id)genFooterView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)makeCell:(id)a0 ForRowAtIndexPath:(id)a1;
- (void)doIAccept;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end
