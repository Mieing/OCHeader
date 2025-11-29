@class NSString;

@interface ACCTagsListDataController : NSObject

@property (nonatomic) long long currentCursor;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *currentFrameUri;

- (void)loadMoreWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void)searchWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecommendDataWithCompletion:(id /* block */)a0;
- (id)requestParametersWithKeyword:(id)a0 requestType:(id)a1;
- (void).cxx_destruct;
- (id)requestURL;

@end
