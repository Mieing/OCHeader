@class CJPayBytePayMethodView, NSString, NSArray, CJPaySignQueryMemberPayListResponse, UIView, CJPayDefaultChannelShowConfig, NSDictionary, QueryMemberPayTypeItem, UILabel, CJPayDyPaySignInfoQueryResponse;

@interface CJPaySignCardListViewController : CJPayHalfPageBaseViewController <CJPayMethodTableViewDelegate>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) CJPayBytePayMethodView *payMethodView;
@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) CJPaySignQueryMemberPayListResponse *listResponse;
@property (retain, nonatomic) CJPayDyPaySignInfoQueryResponse *signInfoQueryResponse;
@property (copy, nonatomic) NSString *payTypeListUrl;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultShowConfig;
@property (retain, nonatomic) QueryMemberPayTypeItem *firstChooseItem;
@property (retain, nonatomic) QueryMemberPayTypeItem *defaultChooseItem;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isSignOnly;
@property (copy, nonatomic) NSString *zgAppId;
@property (copy, nonatomic) NSString *zgMerchantId;
@property (copy, nonatomic) NSString *tokenScene;
@property (nonatomic) BOOL notNeedSortWhenChange;
@property (copy, nonatomic) NSString *bindCardUrl;
@property (copy, nonatomic) id /* block */ didClickMethodBlock;
@property (copy, nonatomic) id /* block */ startBindNewCardBlock;
@property (copy, nonatomic) id /* block */ didBindNewCardBlock;
@property (copy, nonatomic) id /* block */ endBindNewCardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectAtIndex:(int)a0;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (id)p_buildCommonModel;
- (id)p_getCommonTrackParams:(id)a0;
- (void)p_bindCard;
- (id)p_getShouldShowConfigs;
- (void)p_updateMethodView;
- (void)p_refreshCardList;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)back;

@end
