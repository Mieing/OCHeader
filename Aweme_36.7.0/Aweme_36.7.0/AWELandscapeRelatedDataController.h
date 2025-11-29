@class NSNumber, NSString;
@protocol AWEHttpTask;

@interface AWELandscapeRelatedDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *requestCount;
@property (weak, nonatomic) id<AWEHttpTask> currentTask;
@property (retain, nonatomic) NSString *relatedItemID;

- (id)refreshWithModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)fetchWithModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)filteredModelWithModelList:(id)a0;
- (void).cxx_destruct;

@end
