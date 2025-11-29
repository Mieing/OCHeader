@class UIView, NSString, UITableView;
@protocol IESIMToastLoadingProtocol, IESIMChatDiskVacantPageInterface, IESIMChatDiskCleanDataInterface;

@interface IESIMChatDiskCleanListComponent : AWEIMComponentBase <UITableViewDelegate, UITableViewDataSource, IESIMChatDiskCleanListInterface>

@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) UIView<IESIMToastLoadingProtocol> *loading;
@property (weak, nonatomic) id<IESIMChatDiskCleanDataInterface> dataProvider;
@property (weak, nonatomic) id<IESIMChatDiskVacantPageInterface> vacantPageService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)loadData;
- (void)reloadTableView;
- (void)createUI;

@end
