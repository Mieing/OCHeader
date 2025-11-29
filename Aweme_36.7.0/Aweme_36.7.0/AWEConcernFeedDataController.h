@class AWESmartFeedLastViewModel, AWEConcernFeedResponseMonitor, AWEConcernFeedRequestParamBuilder, NSString;

@interface AWEConcernFeedDataController : AWEListDataController <AWEConcernFeedDataControllerProtocol>

@property (retain, nonatomic) AWEConcernFeedRequestParamBuilder *paramsBuilder;
@property (retain, nonatomic) AWEConcernFeedResponseMonitor *responseMonitor;
@property (retain, nonatomic) AWESmartFeedLastViewModel *lastViewModel;
@property (nonatomic) BOOL isUploadAwemeInsertedBeforeInitialFetch;
@property (nonatomic) BOOL isVCDAuthFirstTime;
@property (copy, nonatomic) NSString *blankPanelText;
@property (copy, nonatomic) NSString *previousPageValue;
@property (nonatomic) long long level;
@property (nonatomic) BOOL currentRequestContainsForceInsert;
@property (nonatomic) BOOL isForceInsertVideoOrLiveRequest;
@property (nonatomic) BOOL isAidRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)liveModuleService;
- (void)albumAppendImagesNotificationHandler:(id)a0;
- (void)didHitCachedAwemeList:(id)a0 completion:(id /* block */)a1;
- (void)didFinishRequestType:(unsigned long long)a0 response:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)requestFollowFeedWithParams:(id)a0 completion:(id /* block */)a1;
- (void)didFinishLoadMoreWithResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)updateFeedPullType:(unsigned long long)a0 dataList:(id)a1;
- (void)updateConcernCardListInfo:(id)a0 feedType:(long long)a1;
- (id)filterDuplicatedAwemeWithArray:(id)a0 pullType:(unsigned long long)a1 requestID:(id)a2;
- (BOOL)shouldSaveAwemeBeforeInitRequest;
- (id)handleSpecialCard:(id)a0 pullType:(unsigned long long)a1;
- (void)didFinishTransferResponse:(id)a0 toAwemeList:(id)a1 pullType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (id)urlPath;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
