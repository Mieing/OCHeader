@class NSDictionary, NSError;

@interface AWESearchGuessWordsPrefetchManager : NSObject

@property (nonatomic) long long gsRequestTime;
@property (nonatomic) long long gsResponseTime;
@property (copy, nonatomic) NSDictionary *responseData;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *preRequestParams;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWESearchModuleServiceDOUYINJXAdapterClass;
+ (id)sharedManager;

- (void)prefetchGuessWordsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)prefetchGuessWordsForScene:(id)a0 WithSearchUrl:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)userRecommendSearchSwitch;
- (id)getResponseData;
- (long long)getGSRequestTime;
- (long long)getGSResponseTime;
- (void)trackPrefetchCancelForScene:(id)a0 WithSearchUrl:(id)a1 extraParams:(id)a2;
- (void)prefetchGuessWordsForScene:(id)a0 WithSchemaDic:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)trackPrefetchCancelForScene:(id)a0 WithSearchParams:(id)a1 extraParams:(id)a2;
- (void)p_prefetchGuessWordsForScene:(id)a0 WithParams:(id)a1 completion:(id /* block */)a2;
- (void)clearPrefetchData;
- (id)newBuildRequestParamsWith:(id)a0;
- (void)handleGSDataResponse:(id)a0 error:(id)a1 entryParams:(id)a2;
- (id)customRequestParamsWith:(id)a0;
- (id)aAWESearchModuleServiceDOUYINJXAdapter;
- (BOOL)isLifeServiceSearch:(id)a0;
- (id)lifeServiceCustomRequestParamsWith:(id)a0;
- (id)feedCustomRequestParamsWith:(id)a0;
- (void)prefetchOnlyGuessWordsForScene:(id)a0 WithParams:(id)a1 completion:(id /* block */)a2;
- (void)prefetchOnlyGuessWordsWithGSRequestContext:(id)a0 scene:(id)a1;
- (id)createGSPreRequestContextForScene:(id)a0 WithParams:(id)a1 completion:(id /* block */)a2;
- (void)trackPrefetchCancelWith:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)fetchError;

@end
