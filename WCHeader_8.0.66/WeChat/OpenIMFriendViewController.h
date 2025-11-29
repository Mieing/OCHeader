@class UIView, NSString, ContactSearchLogic, UIImageView, UIButton, WCSearchBar, MMUILabel, MMTableView, WCTimeLineFooterView;

@interface OpenIMFriendViewController : MMUIViewController <MMTableViewDelegate, contactInfoDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, ContactSearchLogicDelegate> {
    ContactSearchLogic *_contactSearchLogic;
    UIImageView *_searchBarWrap;
    UIView *_searchBarSuperView;
    UIButton *_backButton;
    WCSearchBar *_searcher;
    BOOL _bForbidSearchControllerCallBack;
    WCTimeLineFooterView *_loadingFooterView;
    UIView *_emptyFooterView;
    MMUILabel *_emptyFooterLable;
    MMTableView *m_tableView;
    BOOL _bIsSearchingFromNetwork;
    NSString *_reportSessionId;
}

@property (nonatomic) BOOL islastVCNavBarHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)isSeachActive;
- (void)UISplitViewWillChangeSplitMode;
- (id)navigationBarBackgroundColor;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillPopOrDismiss:(BOOL)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)initView;
- (void)initSearchBar;
- (void)initTable;
- (void)initSearchTableFoot;
- (void)updateEmptyFooterView:(id)a0;
- (void)initData;
- (void)beginSearch;
- (void)didEndSearch;
- (void)setLoadingStatus;
- (void)OpenContactInfo:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)doSearchAction:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)onContactSearchLogicDone:(id)a0 FromScene:(unsigned int)a1;
- (void)onContactSearchLogicFail:(id)a0;
- (void)onBackBtnClick;
- (void)cancelButtonClicked;
- (void).cxx_destruct;

@end
