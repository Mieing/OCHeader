@class NSArray, HTSLiveInteractiveAPIV2, NSString, UITableView;

@interface IESLiveScreencastLinkerSettingPanel : IESLiveGameInteractPopupViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSArray *multiLinkItemInfos;
@property (retain, nonatomic) UITableView *settingListView;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *interactAPI;
@property (copy, nonatomic) NSArray *multiLinkerSettingItems;
@property (nonatomic) BOOL linkEnabled;
@property (nonatomic) BOOL multiLinkEnabled;
@property (nonatomic) BOOL noFollowAuth;
@property (nonatomic) BOOL sendGiftToOthers;
@property (nonatomic) long long multiLinkerSubItemsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_reload;
- (void)onSetupNavBar:(id)a0;
- (void)p_buildMultiLinkSettingDataSource;
- (void)p_builSettingView;
- (id)p_makeSwitchItemWithTitle:(id)a0 initialValue:(BOOL)a1 style:(long long)a2;
- (void)p_updateSetting:(id)a0 completion:(id /* block */)a1;
- (id)cellWithIndex:(long long)a0 section:(long long)a1;
- (void)trackActionWithItem:(id)a0 isOn:(BOOL)a1 partition:(id)a2;
- (void)p_trackScreencastSettingWithItem:(id)a0 status:(BOOL)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
