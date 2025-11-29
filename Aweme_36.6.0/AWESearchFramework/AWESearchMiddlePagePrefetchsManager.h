@class NSDictionary, NSMutableDictionary, NSArray;

@interface AWESearchMiddlePagePrefetchsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestTimes;
@property (retain, nonatomic) NSMutableDictionary *responseTimes;
@property (retain, nonatomic) NSMutableDictionary *responseData;
@property (retain, nonatomic) NSMutableDictionary *errors;
@property (retain, nonatomic) NSMutableDictionary *preRequestRealParamsMap;
@property (copy, nonatomic) NSDictionary *preRequestParams;
@property (retain, nonatomic) NSDictionary *commonRequestParams;
@property (retain, nonatomic) NSDictionary *preRequestMap;
@property (retain, nonatomic) NSArray *preRequestConfig;

+ (id)sharedManager;

- (void)prefetchDataForScene:(id)a0 WithParams:(id)a1;
- (id)addFantaFeatureToClientExtra:(id)a0;
- (BOOL)enableCommonRequestParamsAddFeedFeature;
- (id)getLibraPreRequestConfig;
- (id)getResponseData:(id)a0;
- (long long)getRequestTime:(id)a0;
- (long long)getResponseTime:(id)a0;
- (void)removeResponseData:(id)a0;
- (id)fetchError:(id)a0;
- (void)postAckUrlForEventName:(id)a0 response:(id)a1;
- (id)getAliasForEventName:(id)a0;
- (id)getRequestParamsForEventName:(id)a0;
- (id)getLibraPreRequestMap;
- (long long)searchMiddleDualLinesHistoryCnt;
- (BOOL)getLibraPreRequestIsEnable;
- (void)clearPrefetchDataForUrl;
- (void)generateRequestCommonParams;
- (void)prefetchDataForScene:(id)a0 WithParams:(id)a1 forEventName:(id)a2;
- (BOOL)getPrefetchOptimizeFlagForEventName:(id)a0;
- (id)getTransDicFromMap:(id)a0 valueMap:(id)a1;
- (id)getRequestMethodForEventName:(id)a0;
- (id)getUrlForEventName:(id)a0;
- (void)handlePrefetchDataResponse:(id)a0 error:(id)a1 entryParams:(id)a2 forEventName:(id)a3;
- (void)requestPrefetchDataWithURL:(id)a0 requestParams:(id)a1 requestMethod:(id)a2 completion:(id /* block */)a3;
- (id)getAckMapForEventName:(id)a0;
- (id)getAckUrlForEventName:(id)a0;
- (id)getPreRequestRealParams:(id)a0;
- (void)requestPrefetchDataWithURL:(id)a0 requestParams:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
