@class CJPayNotSufficientFundsView, NSArray, NSMutableArray, NSMutableDictionary, CJPayAssetBizMethodListView, CJPayAssetBizMethodListModel;
@protocol CJPayAssetListManagerDelegate;

@interface CJPayAssetBizMethodListViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) CJPayAssetBizMethodListView *methodListView;
@property (retain, nonatomic) CJPayNotSufficientFundsView *fundView;
@property (retain, nonatomic) CJPayAssetBizMethodListModel *model;
@property (copy, nonatomic) NSArray *showConfigs;
@property (retain, nonatomic) NSMutableArray *groupModels;
@property (retain, nonatomic) NSMutableDictionary *trackInfoDict;
@property (weak, nonatomic) id<CJPayAssetListManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *subGroupMethodViewFoldStatus;

- (void)registerBtmPage:(id)a0 params:(id)a1;
- (void)trackBTMModuleClick:(id)a0 params:(id)a1;
- (void)trackBTMModuleShow:(id)a0 params:(id)a1;
- (void)trackBTMModuleCustom:(id)a0 params:(id)a1;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)p_updateViewContent;
- (void)p_setNavTitle;
- (void)p_initTrackData;
- (void)p_trackWhenAppear;
- (BOOL)p_canGroupMethodsShow:(long long)a0;
- (id)p_filterAndSortMethodList:(id)a0 subPayTypeIndexList:(id)a1;
- (BOOL)p_isConfigCombineAvailable:(id)a0;
- (void)p_setDefaultPayMethod:(id)a0;
- (void)p_initGroupViewFoldStatus:(id)a0;
- (void)p_didSelectPayMethod:(id)a0 loadingView:(id)a1;
- (id)initWithModel:(id)a0 subGroupFoldStatus:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)back;

@end
