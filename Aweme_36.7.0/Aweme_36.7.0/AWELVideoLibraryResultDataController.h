@class AWELVideoLibraryResultResponseModel, AWELVideoLibraryResultRequestModel;
@protocol AWEHttpTask;

@interface AWELVideoLibraryResultDataController : AWEBaseDataController

@property (weak, nonatomic) id<AWEHttpTask> currentRequest;
@property (retain, nonatomic) AWELVideoLibraryResultRequestModel *requestModel;
@property (retain, nonatomic) AWELVideoLibraryResultResponseModel *resultData;
@property (nonatomic) BOOL isOnFeedSharePanel;

- (void)refreshDataWithCompletion:(id /* block */)a0;
- (void)fetchWithCompletion:(id /* block */)a0 fetchType:(unsigned long long)a1;
- (void)requestWithMaxRetryTimes:(long long)a0 completion:(id /* block */)a1;
- (void)loadmoreDataWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
