@class IESGCPAudienceDetailViewControllerRouterModel, NSString, IESGCPDetailDynamicDataSource, IESGCPDetailContentNode, IESGCPDetailDynamicProtocolAPI, IESGCPDetailDynamicProtocolParamModel, NSError;

@interface IESGCPDetailDataManager : NSObject

@property (retain, nonatomic) IESGCPDetailDynamicProtocolAPI *dataApi;
@property (copy, nonatomic) NSString *trackID;
@property (retain, nonatomic) IESGCPDetailDynamicDataSource *dynamicDataSource;
@property (readonly, nonatomic) IESGCPAudienceDetailViewControllerRouterModel *routerModel;
@property (retain, nonatomic) IESGCPDetailDynamicProtocolParamModel *requestModel;
@property (nonatomic) unsigned long long secondPageDataRequestStatus;
@property (retain, nonatomic) IESGCPDetailContentNode *secondPageNode;
@property (retain, nonatomic) NSError *secondPageError;
@property (copy, nonatomic) id /* block */ secondPageDataCompletion;

- (void)concurrentGetFirstPageFetch:(id)a0 cacheCompletion:(id /* block */)a1 netCompletion:(id /* block */)a2;
- (void)startSecondPageFetch:(id)a0;
- (void)getDetailData:(id)a0 cacheCompletion:(id /* block */)a1 netCompletion:(id /* block */)a2;
- (void)firstPageCacheWithModel:(id)a0 completion:(id /* block */)a1;
- (id)addMonitorToReportParams:(id)a0 errorCode:(id)a1 errorMsg:(id)a2;
- (id)generateDetailDataWith:(id)a0 isFromCache:(BOOL)a1 error:(id *)a2;
- (void)addDebug;
- (void)invokeSecondPageData:(id)a0 error:(id)a1;
- (id)initWithRouterModel:(id)a0 diContext:(id)a1;
- (void)startConcurrentFetch:(id)a0 cacheCompletion:(id /* block */)a1 netCompletion:(id /* block */)a2;
- (void)serialGetDetailData:(id)a0 cacheCompletion:(id /* block */)a1 netCompletion:(id /* block */)a2;
- (void)fetchSecondPageDataCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
