@class MASConstraint, NSArray, NSString, CJPayUnifyPayMethodManager, CJPayUnifyPayMethodModel, UITableView;
@protocol CJPayUnifyPayMethodDetailViewDelegate;

@interface CJPayUnifyPayMethodDetailView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) CJPayUnifyPayMethodManager *manager;
@property (retain, nonatomic) CJPayUnifyPayMethodModel *viewModel;
@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MASConstraint *methodTableViewHeightConstraint;
@property (weak, nonatomic) id<CJPayUnifyPayMethodDetailViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) id /* block */ assetAppearBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)p_getMethodTableViewHeight;
- (void)refreshDetailViewLayout:(id)a0;
- (id)p_buildListViewDataSourceWithGroupModel:(id)a0 combineAssetIndex:(long long)a1;
- (void)p_switchToListStatus;
- (id)p_createMethodCellViewModel:(id)a0 isCombinePay:(BOOL)a1 combineAssetIndex:(long long)a2;
- (void)p_clickShowConfig:(id)a0 isCombinePay:(BOOL)a1 extraParams:(id)a2;
- (void)p_handleAssetAppear:(id)a0 params:(id)a1;
- (BOOL)p_canSelectAsDefault:(id)a0;
- (id)initWithViewModel:(id)a0 withManager:(id)a1;
- (void)reloadWithUnifyPayMethodModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
