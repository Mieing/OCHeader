@class NSArray, NSDictionary, HTSLiveInteractiveAPIV2, NSString, UITableView;

@interface IESLiveMutliLinkerMediaSettingPanel : IESLiveCommunityInteractPopupViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSDictionary *multiLinkItemInfos;
@property (retain, nonatomic) UITableView *settingListView;
@property (copy, nonatomic) NSArray *multiLinkerSettingItems;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *interactAPI;
@property (nonatomic) BOOL linkEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_reload;
- (void)onSetupNavBar:(id)a0;
- (void)p_buildMultiLinkSettingDataSource;
- (id)p_makeSwitchItemWithTitle:(id)a0 initialValue:(BOOL)a1 style:(long long)a2;
- (void)p_updateSetting:(id)a0 completion:(id /* block */)a1;
- (id)cellWithIndex:(long long)a0 section:(long long)a1;
- (void)p_buildSettingView;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
