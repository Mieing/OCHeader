@class UIView, NSString, NSArray, CJPayDyPaySignInfoQueryResponse, NSDictionary, CJPaySignAssetInfoModel, CJPaySignAssetListView, UILabel;

@interface CJPayAssetSignCardListViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) CJPaySignAssetListView *assetListView;
@property (copy, nonatomic) NSArray *assetInfoModels;
@property (retain, nonatomic) CJPayDyPaySignInfoQueryResponse *signInfoQueryResponse;
@property (copy, nonatomic) NSString *payTypeListUrl;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (retain, nonatomic) CJPaySignAssetInfoModel *defaultAssetInfoModel;
@property (retain, nonatomic) CJPaySignAssetInfoModel *currentSelectedAssetInfoModel;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isSignOnly;
@property (copy, nonatomic) NSString *zgAppId;
@property (copy, nonatomic) NSString *zgMerchantId;
@property (copy, nonatomic) NSString *tokenScene;
@property (copy, nonatomic) NSString *bindCardUrl;
@property (copy, nonatomic) id /* block */ didClickMethodBlock;
@property (copy, nonatomic) id /* block */ bindCardBlock;
@property (copy, nonatomic) id /* block */ startBindNewCardBlock;
@property (copy, nonatomic) id /* block */ didBindNewCardBlock;
@property (copy, nonatomic) id /* block */ endBindNewCardBlock;

- (void)p_trackEvent:(id)a0 params:(id)a1;
- (id)p_buildCommonModel;
- (void)p_updateSignCardListView;
- (id)p_getCommonTrackParams:(id)a0;
- (void)p_bindCard;
- (void)didSelectAtIndex:(int)a0 selectedAssetInfoModel:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)back;

@end
