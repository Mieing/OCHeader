@class CJPayUnifyPayMethodModel, NSArray, NSString, NSMutableDictionary, CJPayUnifyPayMethodManager, UITableView, CAGradientLayer, CJPayUnifyPayMethodListTopView;
@protocol CJPayUnifyPayMethodListViewDelegate;

@interface CJPayUnifyPayMethodListView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) CJPayUnifyPayMethodManager *manager;
@property (retain, nonatomic) CJPayUnifyPayMethodListTopView *fixedTopView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) CJPayUnifyPayMethodModel *viewModel;
@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) NSMutableDictionary *foldedList;
@property (retain, nonatomic) NSMutableDictionary *groupFoldHasExpanded;
@property (nonatomic) BOOL scrollToFirstMethod;
@property (nonatomic) BOOL scrollToSelectedMethod;
@property (weak, nonatomic) id<CJPayUnifyPayMethodListViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (copy, nonatomic) id /* block */ assetAppearBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)p_getMethodTableViewHeight;
- (id)p_createMethodCellViewModel:(id)a0;
- (id)p_getSelectedPayMethodIndex;
- (void)p_updateMethodTopViewWithScrollView:(id)a0;
- (void)p_handleAssetAppear:(id)a0 params:(id)a1;
- (id)initWithViewModel:(id)a0 withManager:(id)a1;
- (id)p_buildListViewDataSourceWithGroupModels:(id)a0;
- (double)isCellFullyVisible:(id)a0;
- (void)p_scrollToIndexPathWithFixedTopViewControl:(id)a0;
- (id)p_buildSeparatorCellVMWithGroupModel:(id)a0 isNeedTopLine:(BOOL)a1;
- (BOOL)p_judgeIsNeedFoldWithGroupInfo:(id)a0;
- (void)p_handleFoldCellClickWithGroupModel:(id)a0;
- (void)p_handleUnfoldForGroupModel:(id)a0 withGroupTitle:(id)a1;
- (void)refreshTableViewDataAndHeight;
- (void)p_clickShowConfig:(id)a0 extraParams:(id)a1;
- (BOOL)canSelectAsDefault:(id)a0;
- (void)refreshPayMethodSelectStatus;
- (void)reloadWithUnifyPayMethodModel:(id)a0 scrollType:(unsigned long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
