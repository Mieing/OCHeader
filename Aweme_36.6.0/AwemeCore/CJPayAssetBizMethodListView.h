@class NSArray, NSMutableDictionary, NSString, UITableView;

@interface CJPayAssetBizMethodListView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *configGroups;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) id /* block */ clickMethodUnfoldBlock;
@property (nonatomic) BOOL isCombineMode;
@property (retain, nonatomic) NSMutableDictionary *subGroupMethodViewFoldStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_buildPayMethodGroupInfoModel:(id)a0 subGroupList:(id)a1;
- (id)p_createMethodCellViewModelByConfig:(id)a0;
- (id)getSubGroupFoldStatusKeyWithGroupInfoModel:(id)a0 subGroupListModel:(id)a1;
- (void)p_didSelectedShowConfig:(id)a0 cell:(id)a1;
- (id)p_createSeparatorCellViewModelWithGroupInfoModel:(id)a0 subGroupListModel:(id)a1;
- (void)updateWithConfigGroups:(id)a0;
- (void)refreshSelectStatus;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
