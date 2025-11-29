@class UIView, NSString, CJPayChooseQualityDyPayMethodGroupModel, NSArray, CJPayTextArrowView, UITableView, MASConstraint, UILabel;

@interface CJPayAssetQualityPayMethodGroupView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) CJPayChooseQualityDyPayMethodGroupModel *model;
@property (copy, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL isMethodViewFold;
@property (nonatomic) unsigned long long viewHeight;
@property (nonatomic) double viewWidth;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titleZoneView;
@property (retain, nonatomic) UIView *titleLineView;
@property (retain, nonatomic) UITableView *payMethodsTableView;
@property (retain, nonatomic) CJPayTextArrowView *topRightBtnView;
@property (retain, nonatomic) MASConstraint *methodTableViewHeightConstraint;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) id /* block */ clickMethodUnfoldBlock;
@property (copy, nonatomic) id /* block */ clickTopRightBtnBlock;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_didSelectedShowConfig:(id)a0 cell:(id)a1;
- (void)updatePayMethodViewBySelectConfig:(id)a0;
- (void)updatePayMethodViewWithFoldStatus:(BOOL)a0;
- (void)changeTitleViewHidden:(BOOL)a0;
- (void)refreshGroupViewWithModel:(id)a0 reloadInstantly:(BOOL)a1;
- (void)p_updatePayMethodGroupViewContent;
- (void)p_reloadMethodListDataSource:(id)a0 needReloadTableview:(BOOL)a1;
- (id)p_buildPayMethodDataSource:(id)a0 displayCount:(long long)a1;
- (double)p_getMethodTableViewHeight;
- (id)p_createSeparatorCellViewModel;
- (void)p_clickFoldSeparatorCell;
- (void)p_updateTitleLineHiddenStatus:(BOOL)a0;
- (BOOL)p_isPayAgainGroupStyle;
- (void)p_clickTopRightBtn;
- (id)initWithPayMethodViewModel:(id)a0 viewWidth:(double)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
