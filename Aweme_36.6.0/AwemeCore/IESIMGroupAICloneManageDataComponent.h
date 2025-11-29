@class NSArray, NSMutableDictionary, NSString;
@protocol IESIMBotsDataManagerProtocol;

@interface IESIMGroupAICloneManageDataComponent : AWEIMComponentBase <UITableViewDelegate, UITableViewDataSource, IESIMGroupAICloneAction, IESIMBotsDataManagerDelegate, IESIMGroupAICloneBusinessInterface>

@property (retain, nonatomic) id<IESIMBotsDataManagerProtocol> botsDataController;
@property (retain, nonatomic) NSArray *aiClones;
@property (retain, nonatomic) NSMutableDictionary *userMap;
@property (nonatomic) BOOL canClickCell;
@property (nonatomic) BOOL canManageAIClone;
@property (nonatomic) BOOL canAddAIClone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesim_botsDataSourceDidUpdate;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_reloadUI;
- (void)emptyViewButtonTapped;
- (BOOL)canShowAddButton;
- (void)p_configureNaviBar;
- (void)p_reloadAICloneDataWithCurrentData:(id)a0 completion:(id /* block */)a1;
- (void)transferToAddAICloneViewController;
- (void)p_didClickManageAIClone:(id)a0 viewModel:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;

@end
