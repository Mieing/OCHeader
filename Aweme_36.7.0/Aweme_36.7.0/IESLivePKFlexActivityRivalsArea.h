@class IESLivePKFlexActivityPanelViewModel, NSString, IESLiveTableViewCellDisplayTrackHelper, RivalsArea, UITableView;

@interface IESLivePKFlexActivityRivalsArea : UIView <UITableViewDelegate, UITableViewDataSource, IESLiveTableViewCellDisplayTrackHelperDelegate>

@property (retain, nonatomic) RivalsArea *area;
@property (retain, nonatomic) IESLivePKFlexActivityPanelViewModel *viewModel;
@property (retain, nonatomic) UITableView *inviteAnchorTableView;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *tableViewTrackHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)trackDisplayedCellWithIndexPath:(id)a0;
- (id)initWithViewModel:(id)a0 areaIndex:(unsigned long long)a1;
- (void)trackRivalsDisplayedCells;
- (id)setupDescriptionLabel;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)layoutUI;

@end
