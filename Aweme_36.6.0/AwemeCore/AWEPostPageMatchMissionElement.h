@class AWENewPublishTableCell, NSString, NSDictionary, AWEStudioMissionViewController;

@interface AWEPostPageMatchMissionElement : AWEPostPageCellElement <UITableViewDelegate, UITableViewDataSource, AWEPostPageAnchorProtocol>

@property (retain, nonatomic) AWENewPublishTableCell *matchMissionCell;
@property (weak, nonatomic) AWEStudioMissionViewController *popVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)starAtlas;
- (id)localLife;
- (void)setupCell:(id)a0;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)forceReceiveEvents;
- (void)showAnchorPanel;
- (void)cancelMissionAction;
- (void)p_trackShowEventAnchorPanel;
- (void)tapXToCancelMissionAction;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)service;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (id)listData;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (id)cell;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)didSelect;

@end
