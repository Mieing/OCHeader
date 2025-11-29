@class NSString, NSArray, NSNumber;

@interface AWEAwemeDetailVideoDiaryDataController : AWEListDataController

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSArray *itemIDArray;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic, getter=isIntial) BOOL intial;
@property (nonatomic, getter=isInvalidURL) BOOL invalidURL;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchDataWithCompletion:(id /* block */)a0 isLoadmore:(BOOL)a1;
- (id)initWithURL:(id)a0 minCursor:(id)a1 maxCursor:(id)a2 itemIDArray:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
