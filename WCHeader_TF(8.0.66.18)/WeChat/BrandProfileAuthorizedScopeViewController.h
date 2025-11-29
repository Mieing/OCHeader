@class UIView, NSString, MMWebImageView, UIButton, NSMutableArray, CContact, MMTableView, MMUILabel;

@interface BrandProfileAuthorizedScopeViewController : MMUIViewController <BrandProfileAuthorizedScopeTableCellDelegate, UITableViewDelegate, UITableViewDataSource, PBMessageObserverDelegate>

@property (retain, nonatomic) UIView *tableHeaderView;
@property (retain, nonatomic) MMWebImageView *appIconImageView;
@property (retain, nonatomic) MMUILabel *appNameLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) UIButton *manageButton;
@property (retain, nonatomic) UIView *footerSeperatorLine;
@property (nonatomic) BOOL isManaging;
@property (retain, nonatomic) CContact *brandContact;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSMutableArray *arrTableViewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModels:(id)a0 contact:(id)a1 appId:(id)a2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupTableView;
- (void)initTableHeader;
- (void)initTableFooter;
- (void)layoutTableHeader;
- (void)layoutTableFooter;
- (double)tableviewContentHeight;
- (id)navigationBarBackgroundColor;
- (void)onManageButtonClicked;
- (void)onCellDeleteButtonClicked:(id)a0;
- (BOOL)isContextMenuEnabled:(id)a0;
- (void)onStartManage;
- (void)onEndManage;
- (void)notifyToDeleteWithViewModel:(id)a0;
- (void)initDataWithWrap:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)openConfirmActionSheetWithViewModel:(id)a0;
- (void)requestAuthorizedInfo;
- (void)handleModBizUseUserInfoResponse:(id)a0;
- (void)handleGetBizAuthInfoResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
