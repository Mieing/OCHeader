@class NSArray, NSString, NSNumber;

@interface AWEProfileSelectCoverDataManager : NSObject

@property (copy, nonatomic) NSArray *recommendDataList;
@property (copy, nonatomic) NSArray *postWorkDataList;
@property (nonatomic) BOOL postWorkHasMore;
@property (copy, nonatomic) NSString *awemeSourceText;
@property (copy, nonatomic) NSString *routerSchema;
@property (copy, nonatomic) NSNumber *maxCursor;

- (id)postWorkURLString;
- (void)loadMorePostWorkListWithCompletion:(id /* block */)a0;
- (void)fetchRecommendListWithCompletion:(id /* block */)a0;
- (void)fetchPostWorkListWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
