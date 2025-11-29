@class IESLivePKFlexActivityPanelViewModel, NSString, PKRecordListArea, UITableView;

@interface IESLivePKFlexActivityPKRecordListArea : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) PKRecordListArea *area;
@property (retain, nonatomic) UITableView *pkRecordTableView;
@property (retain, nonatomic) IESLivePKFlexActivityPanelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 areaIndex:(unsigned long long)a1;
- (id)setupDescriptionLabel;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)layoutUI;

@end
