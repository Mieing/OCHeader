@class UIView, NSString, LSNaviBar, MJRefreshComponent, NSMutableDictionary, UITableView, NSObject, LSStatusView;
@protocol LSAdditionalViewProtocol, LSListVMProtocol, LSListVCDelegate;

@interface LSListVC : UIViewController <LSAdditionalViewDelegate, LSListVCProtocol, LSListVMDelegate, UITableViewDataSource, UITableViewDelegate>

@property (nonatomic) unsigned long long listStyle;
@property (readonly, nonatomic) NSMutableDictionary *cellReuseIDAndViews;
@property (readonly, nonatomic) UIView *topViewContainer;
@property (readonly, nonatomic) UIView *bottomViewContainer;
@property (nonatomic) BOOL hasShowedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<LSListVCDelegate> vcDelegate;
@property (retain, nonatomic) LSStatusView *statusView;
@property (retain, nonatomic) LSNaviBar *naviBar;
@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MJRefreshComponent *refreshHeader;
@property (retain, nonatomic) MJRefreshComponent *refreshFooter;
@property (retain, nonatomic) UIView<LSAdditionalViewProtocol> *topView;
@property (retain, nonatomic) UIView<LSAdditionalViewProtocol> *bottomView;
@property (retain, nonatomic) NSObject<LSListVMProtocol> *listVM;

- (void)closePage;
- (void)p_bindModel;
- (void)additionalView:(id)a0 heightChanged:(double)a1;
- (id)initWithListStyle:(unsigned long long)a0;
- (void)cellDidChangeHeightWithIndexPath:(id)a0 needShowFull:(BOOL)a1;
- (void)listVM:(id)a0 action:(id)a1;
- (void)p_pageStateChanged:(long long)a0;
- (void)p_naviBarStateChanged:(long long)a0;
- (void)p_refreshHeaderStateChanged:(long long)a0;
- (void)p_refreshFooterStateChanged:(long long)a0;
- (id)useRefreshComponent;
- (id)useLoadMoreComponent;
- (void)disableLoadMoreRefreshComponent;
- (void)resetLoadMoreRefreshComponent;
- (void)listVM:(id)a0 cellVMHeightDidChanged:(id)a1 needShowFull:(BOOL)a2;
- (void)showPageWithFromVC:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)modalPresentationStyle;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)hidesBottomBarWhenPushed;

@end
