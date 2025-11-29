@class NSDictionary;

@interface AWESearchMiddlePOIViewController : AWESearchMiddleBaseViewController

@property (copy, nonatomic) NSDictionary *lifeServicePageConfig;
@property (nonatomic) BOOL isLifeService;
@property (nonatomic) BOOL isLifeMall;
@property (nonatomic) BOOL isLifeActivity;

- (id)initWithRouterModel:(id)a0;
- (BOOL)enableGSPrefetch;
- (BOOL)isNearbyLifeMallChannel;
- (BOOL)p_lifeMallUseNewPage;
- (BOOL)shouldBlockGuessWordForLifeService;
- (BOOL)isLifePOI;
- (id)p_getHistoryConfig;
- (id)lifeServicePageDynamicConfig;
- (id)getMiddlePageConfig;
- (BOOL)enableUpdateGSData;
- (id)middlePageTraceIdentifier;
- (BOOL)enableGetRecommendReasonAndSearchPassParamsStruct;
- (id)getSSEPreFetchData;
- (BOOL)enableCustomGid;
- (id)getProcessedMiddleTrackDic:(id)a0;
- (id)getLynxConfigBizExtraSubDictWithKey:(id)a0;
- (id)getLynxConfigBizMiddleInfoExtra;
- (id)p_getBusinessID;
- (BOOL)p_isFromLifeService;
- (BOOL)p_isLifeActivity;
- (BOOL)p_isLifeMall;
- (BOOL)p_needGuessSearch;
- (long long)p_getGuessSearchWordsCount;
- (id)p_getPD;
- (id)p_getFromGroupID;
- (id)p_getGuessSearchPenetrateExtraParams;
- (BOOL)p_needHistory;
- (BOOL)p_getDisableHistoryTag;
- (id)p_getDefaultPlaceHolderText;
- (id)p_getLynxConfig;
- (id)p_getBTMIdentifier;
- (id)p_getExtraGlobalParams;
- (id)p_getExtraBizParams;
- (BOOL)p_lifeMallUseNewConfig;
- (BOOL)isFromNearbyDoubleCol;
- (BOOL)isFromGrouponDoubleCol;
- (void).cxx_destruct;

@end
