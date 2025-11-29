@class UITableView, MASConstraint, CJPayDyPayMethodCellViewModel, NSString, CJPaySignPayChoosePayMethodModel, UILabel, CJPayBaseListDataSource;

@interface CJPaySignPayChoosePayMethodView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) CJPaySignPayChoosePayMethodModel *viewModel;
@property (retain, nonatomic) CJPayBaseListDataSource *dataSource;
@property (retain, nonatomic) UILabel *groupTitleLabel;
@property (retain, nonatomic) UITableView *payMethodsTableView;
@property (retain, nonatomic) MASConstraint *payMethodViewBottomConstraint;
@property (retain, nonatomic) MASConstraint *methodTableViewHeightConstraint;
@property (retain, nonatomic) MASConstraint *extraDescLabelBottomConstraint;
@property (nonatomic) BOOL isPaymentToolsFold;
@property (nonatomic) unsigned long long bindCardPaymentCount;
@property (retain, nonatomic) CJPayDyPayMethodCellViewModel *selectAddCardCellVM;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePayMethodViewBySelectConfig:(id)a0;
- (unsigned long long)p_getBindCardPaymentToolTotalCount:(id)a0;
- (double)p_getTableViewHeightWithViewModels:(id)a0;
- (void)didSelectedCellViewModel:(id)a0;
- (void)p_showPaymentToolsWithFoldStatus:(BOOL)a0;
- (id)initWithPayMethodViewModel:(id)a0;
- (void)p_reloadWithViewModel:(id)a0;
- (void)p_reloadMethodListDataSource:(id)a0;
- (id)p_buildDataSource:(id)a0 limitBindCardCount:(long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)startLoading;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)stopLoading;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
