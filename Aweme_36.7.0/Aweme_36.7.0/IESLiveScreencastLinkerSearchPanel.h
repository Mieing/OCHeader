@class IESLiveScreencastLinkerSearchViewModel, IESLiveScreencastLinkerSearchTextField, NSString, UIView, IESLiveEmptyView, UITableView;
@protocol IESLiveSubscription, IESLiveScreencastLinkerSearchAction;

@interface IESLiveScreencastLinkerSearchPanel : IESLiveGameInteractPopupViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, IESLiveRefreshDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveScreencastLinkerSearchTextField *textField;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (copy, nonatomic) NSString *searchPlaceHolder;
@property (retain, nonatomic) IESLiveScreencastLinkerSearchViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) id<IESLiveScreencastLinkerSearchAction> searchDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollView:(id)a0 willBeginRefreshWithRefreshType:(unsigned long long)a1;
- (id)scrollView:(id)a0 viewForRefreshWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (double)scrollView:(id)a0 heightForRefreshViewWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (void)onSetupNavBar:(id)a0;
- (void)onReceivedCancelInviteUser:(id)a0;
- (void)p_startSearch:(id)a0 isLoadMore:(BOOL)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setup;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)textFieldDidChange:(id)a0;
- (void)cancelAction:(id)a0;
- (void)layoutUI;

@end
