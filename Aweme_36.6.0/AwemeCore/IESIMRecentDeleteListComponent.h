@class NSString, MJRefreshFooter, UILabel, UIView, UITableView;
@protocol IESIMToastLoadingProtocol, IESIMRichRefreshFooterProtocol, IESIMRecentDeleteVacantPageInterface, IESIMRecentDeleteDataInterface;

@interface IESIMRecentDeleteListComponent : AWEIMComponentBase <UITableViewDelegate, UITableViewDataSource, IESIMRecentDeleteListInterface>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *tableViewHeader;
@property (weak, nonatomic) MJRefreshFooter<IESIMRichRefreshFooterProtocol> *footer;
@property (weak, nonatomic) UIView<IESIMToastLoadingProtocol> *loading;
@property (weak, nonatomic) id<IESIMRecentDeleteDataInterface> dataProvider;
@property (weak, nonatomic) id<IESIMRecentDeleteVacantPageInterface> vacantPageService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)loadMoreData;
- (void)forceUpdateFooter;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)loadData;
- (void)reloadTableView;
- (void)createUI;

@end
