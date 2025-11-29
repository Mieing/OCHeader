@class NSString, NSDictionary, AWESearchSchemaModel, AWEEcomSearchMiddleBFFStreamPrefetcher;

@interface AWEEcomSearchMiddlePagePrefetcher : NSObject <AWEEcomSearchMiddlePagePrefetcherProtocol>

@property (nonatomic) long long guessWordPrefetchState;
@property (nonatomic) long long ecDisableGuessSearchAnchor;
@property (copy, nonatomic) NSString *ecSuggestQueryApiABParams;
@property (retain, nonatomic) AWEEcomSearchMiddleBFFStreamPrefetcher *streamPrefetch;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWESearchSchemaModel *schemaModel;
@property (copy, nonatomic) id /* block */ updateDataToLynx;
@property (nonatomic) long long enterSearchInitTime;
@property (copy, nonatomic) NSDictionary *lynxGlobalProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestDefaultParams;

- (id)commonParams;
- (void)prefetchIfNeeded;
- (id)lynxBizGlobalProps;
- (void)prefetchBFFStream;
- (void)prefetchBFF;
- (void)prefetchGuessedSearchKeyword;
- (BOOL)shouldPrefetchNewer;
- (void)prefetchNewer;
- (BOOL)shouldPrefetchHotlist;
- (void)prefetchHotList;
- (BOOL)shouldPrefetchCategory;
- (void)prefetchCategoryList;
- (BOOL)isPrivateSearch;
- (void)reportGuessWordPrefetchWithReason:(id)a0;
- (id)middleInfoExtra;
- (BOOL)shouldPrefetchGuessed;
- (void)sendPostRequestWithURL:(id)a0 params:(id)a1 response:(id /* block */)a2 completion:(id /* block */)a3;
- (void)sendRequestWithURL:(id)a0 params:(id)a1 response:(id /* block */)a2 completion:(id /* block */)a3;
- (id)buildGuessedRequestParams;
- (void)trackWithComponent:(id)a0 response:(id)a1 error:(id)a2;
- (id)timingInfoWithResponse:(id)a0 startTime:(double)a1;
- (void)sendDataToComponent:(id)a0 perfModel:(id)a1 transferModel:(id)a2;
- (id)buildCategoryRequestParams;
- (id)buildHotlistRequestParams;
- (void)updateDataWithComponent:(id)a0 params:(id)a1;
- (id)dataKeyWithComponent:(id)a0;
- (id)groupId;
- (void).cxx_destruct;
- (id)prefetchConfig;
- (id)settings;
- (double)currentTimeStamp;

@end
