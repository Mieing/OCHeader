@class CJPayDyPayMethodTopView, CJPayBDCreateOrderResponse, NSArray, CJPayDyPayQualityHPMethodListDataManager, CJPayDyPayQualityHPMethodListCombineViewController, UIView;

@interface CJPayDyPayQualityHPMethodListViewController : CJPayCommonListViewController

@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (retain, nonatomic) CJPayDyPayQualityHPMethodListCombineViewController *combinePayMethodListVC;
@property (nonatomic) BOOL isCombinePayMethodListShown;
@property (copy, nonatomic) NSArray *firstScreenShowConfigs;
@property (retain, nonatomic) CJPayDyPayMethodTopView *payMethodTopView;
@property (retain, nonatomic) UIView *backWhiteView;
@property (retain, nonatomic) CJPayDyPayQualityHPMethodListDataManager *dataManager;
@property (copy, nonatomic) id /* block */ payMethodClickBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;
@property (copy, nonatomic) id /* block */ delayStartDouPayProcessBlock;

- (id)getFirstPagePayTypesTrackStr;
- (void)updateFirstScreenShowConfigs;
- (double)p_getTableViewAndCellIntersectsRect;
- (void)p_payMethodTopViewClick;
- (void)trackerName:(id)a0 params:(id)a1;
- (id)getCurrentSelectShowConfig;
- (BOOL)isCurrentSelectMethodInFirstScreen;
- (void)updatePayMethodWithWithHasRetain:(BOOL)a0 usePlusXData:(BOOL)a1 hasChoiceChanged:(BOOL)a2;
- (void)clickPayMethodWithIndex:(long long)a0;
- (void)resetCurrentSelectShowConfigPositionWithIsPayMethodListMustPinned:(BOOL)a0 isPayMethodListPinStatus:(BOOL)a1 isPayMethodListAnimation:(BOOL)a2 isPayMethodListNeedPostion:(BOOL)a3 payMethodListPostion:(long long)a4;
- (void)updateMethodViewControllerWithNewResponse:(id)a0;
- (id)getCurrentMethodExtTrackParams;
- (id)initWithParams:(id)a0 createOrderResponse:(id)a1;
- (BOOL)p_payMethodNeedCombineStatus:(id)a0;
- (BOOL)isPayMethodChanged;
- (void)p_updateTableViewWithDataManager;
- (void)p_payMethodClick:(id)a0 isNeedPostion:(BOOL)a1 isNeedPostionBottom:(BOOL)a2 isAnimation:(BOOL)a3;
- (id)p_getSelectedPayMethodIndex:(id)a0;
- (void)p_tableViewPostion:(id)a0 isAnimation:(BOOL)a1 atScrollPosition:(long long)a2;
- (void)p_changeCombinePay:(id)a0;
- (BOOL)p_shouldUpdateTableView:(id)a0;
- (void)p_changeUnCombinePay;
- (void)p_combinePayMethodClick:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
