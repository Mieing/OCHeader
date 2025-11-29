@class NSString, AWEAwemeModel, AWERVNewDetailPageContext, NSNumber;

@interface AWERVNewDetailDataController : AWEListDataController

@property (nonatomic) long long requestNums;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *itemId;
@property (weak, nonatomic) AWERVNewDetailPageContext *context;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (void)loadmoreWithCompletion:(id /* block */)a0;
- (void)fetchWithCompletion:(id /* block */)a0 fetchType:(unsigned long long)a1;
- (void)trackRelatedWithModel:(id)a0 error:(id)a1;
- (void)trackListRefreshWithRequestDuration:(double)a0 responseModel:(id)a1 error:(id)a2;
- (void)setupWithRelatedPreloadVideos:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
