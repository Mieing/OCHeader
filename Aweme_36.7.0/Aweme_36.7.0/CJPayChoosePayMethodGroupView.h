@class UIView, CJPayChooseDyPayMethodGroupModel, CJPayBaseListDataSource, NSString, CJPayTextArrowView, CJPayDyPayMethodCellViewModel, UITableView, MASConstraint, UILabel;

@interface CJPayChoosePayMethodGroupView : UIView <UITableViewDelegate, UITableViewDataSource, CJPayBaseLoadingProtocol>

@property (retain, nonatomic) CJPayChooseDyPayMethodGroupModel *viewModel;
@property (retain, nonatomic) CJPayBaseListDataSource *dataSource;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titleZoneView;
@property (retain, nonatomic) UIView *titleLineView;
@property (retain, nonatomic) UITableView *payMethodsTableView;
@property (retain, nonatomic) CJPayTextArrowView *topRightBtnView;
@property (retain, nonatomic) MASConstraint *methodTableViewHeightConstraint;
@property (retain, nonatomic) MASConstraint *extraDescLabelBottomConstraint;
@property (nonatomic) BOOL isPaymentToolsFold;
@property (nonatomic) BOOL isSetGradientBGColor;
@property (nonatomic) unsigned long long viewHeight;
@property (nonatomic) unsigned long long bindCardPaymentCount;
@property (copy, nonatomic) NSString *primaryAmountStrWhenCombine;
@property (copy, nonatomic) NSString *secondaryAmountStrWhenCombine;
@property (nonatomic) long long payMethodScene;
@property (retain, nonatomic) CJPayDyPayMethodCellViewModel *selectAddCardCellVM;
@property (copy, nonatomic) id /* block */ cellWillDisplayBlock;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) id /* block */ clickTopRightBtnBlock;
@property (copy, nonatomic) id /* block */ contentHeightDidChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePayMethodViewBySelectConfig:(id)a0;
- (void)updatePayMethodViewWithFoldStatus:(BOOL)a0;
- (void)changeTitleViewHidden:(BOOL)a0;
- (void)refreshGroupViewWithModel:(id)a0 reloadInstantly:(BOOL)a1;
- (void)p_updatePayMethodGroupViewContent;
- (void)p_updateTitleLineHiddenStatus:(BOOL)a0;
- (BOOL)p_isPayAgainGroupStyle;
- (void)p_clickTopRightBtn;
- (id)initWithPayMethodViewModel:(id)a0 scene:(long long)a1;
- (unsigned long long)p_getBindCardPaymentToolTotalCount:(id)a0;
- (void)p_reloadMethodListDataSource:(id)a0 needRelaodTableview:(BOOL)a1;
- (void)p_handleCombineAmountDetailByMethodList:(id)a0;
- (id)p_buildPaymentToolDataSource:(id)a0 limitBindCardCount:(long long)a1;
- (id)p_buildFinanceChannelDataSource:(id)a0;
- (double)p_getTableViewHeightWithViewModels:(id)a0;
- (void)didSelectedCellViewModel:(id)a0;
- (void)p_showPaymentToolsWithFoldStatus:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)startLoading;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)stopLoading;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
