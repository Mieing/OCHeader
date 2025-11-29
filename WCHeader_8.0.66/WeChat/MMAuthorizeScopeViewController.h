@class UIView, NSString, NSArray, MMAuthorizeScopeTopView, UIButton, NSMutableArray, OauthScopeInfo, MMTableView;
@protocol MMAuthorizeViewControllerDelegate;

@interface MMAuthorizeScopeViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMAuthorizeScopeTopView *tableHeaderView;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) UIButton *comfirmBtn;
@property (retain, nonatomic) UIButton *denyBtn;
@property (retain, nonatomic) NSMutableArray *arrSelect;
@property (copy, nonatomic) NSString *cloudGameScopeWording;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) OauthScopeInfo *scopeInfo;
@property (weak, nonatomic) id<MMAuthorizeViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *scopeInfoList;
@property (readonly, nonatomic) NSArray *comfirmScopeInfoList;
@property (nonatomic) unsigned int fromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppName:(id)a0 iconUrl:(id)a1 scopeInfoList:(id)a2 cloudGameScopeWording:(id)a3;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)onReturn;
- (BOOL)shouldInteractivePop;
- (void)initData;
- (void)initSubViews;
- (void)initTableHeaderView;
- (void)layoutTableHeaderView;
- (void)initTableFooterView;
- (void)layoutTableFooterView;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onComfirmBtnClick;
- (void)onDenyBtnClick;
- (void).cxx_destruct;

@end
