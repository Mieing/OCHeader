@class MASConstraint, NSArray, NSString, CJPayUnifyPayMethodModel, CJPayUnifyPayMethodListGroupModel, UITableView;

@interface CJPayUnifyPayMethodListViewController : CJPayHalfPageBaseViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) CJPayUnifyPayMethodModel *viewModel;
@property (retain, nonatomic) CJPayUnifyPayMethodListGroupModel *methodGroupModel;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) UITableView *payMethodsTableView;
@property (retain, nonatomic) MASConstraint *methodTableViewHeightConstraint;
@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) long long combineAssetIndex;
@property (nonatomic) double pageHeight;
@property (copy, nonatomic) NSString *naviBarTitle;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (copy, nonatomic) id /* block */ btmTrackerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)p_getMethodTableViewHeight;
- (id)p_createMethodCellViewModel:(id)a0;
- (void)p_clickShowConfig:(id)a0;
- (id)p_getSelectedPayMethodIndex;
- (void)refreshPayMethodSelectStatus;
- (void)p_buildListViewDataSourceWithGroupModel:(id)a0;
- (id)initWithViewModel:(id)a0 withGroupModel:(id)a1 combineAssetIndex:(long long)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)back;

@end
