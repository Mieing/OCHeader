@class NSString, IESECOrderListLastRequest, IESECOrderListBridgeModel, NSArray, NSMutableDictionary, NSDictionary, IESECOrderListShowRequest, IESECOrderQualityMonitor, IESECQualityInfoV2, IESECOrderBridgeManager, IESECOrderListBaseViewController;
@protocol YataInstanceInterface, YataRenderObjectInterface;

@interface IESECOrderListContext : NSObject {
    double _statusBarHeight;
    double _safeAreaBottomHeight;
}

@property (retain, nonatomic) IESECOrderListShowRequest *request;
@property (weak, nonatomic) id<YataInstanceInterface> yataInstance;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (retain, nonatomic) NSMutableDictionary *tradePerformanceInfo;
@property (retain, nonatomic) IESECOrderQualityMonitor *qualityMonitor;
@property (retain, nonatomic) IESECOrderListLastRequest *lastRequest;
@property (copy, nonatomic) NSString *lastLogID;
@property (nonatomic) unsigned long long currentTabIndex;
@property (nonatomic) BOOL firstEntry;
@property (copy, nonatomic) NSDictionary *cacheWhenAppear;
@property (retain, nonatomic) id<YataRenderObjectInterface> cacheNode;
@property (retain, nonatomic) IESECOrderListBridgeModel *bridgeCallbackModel;
@property (retain, nonatomic) IESECOrderBridgeManager *bridgeManger;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (weak, nonatomic) IESECOrderListBaseViewController *viewController;
@property (copy, nonatomic) NSArray *hideLoadingOperatorTypeList;

+ (double)contentScale;

- (id)prepareQueryParams;
- (id)prepareQueryExParams;
- (void)updateRequest:(id)a0;
- (BOOL)chunkRequestForMultiTabsEnabled;
- (void)analyzeRequest;
- (id)orderListParams;
- (id)orderSearchParams;
- (void)reportRequestParamsErrorWithKey:(id)a0;
- (id)schemaQueryWithKey:(id)a0;
- (void)updateLastLogID:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (double)fontScale;
- (double)viewScale;

@end
