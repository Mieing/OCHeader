@class NSString, NSNumber, NSArray;

@interface AWEAwemeDetailCommonDataController : AWEListDataController

@property (copy, nonatomic) NSString *requestURLString;
@property (retain, nonatomic) NSNumber *refreshCursor;
@property (retain, nonatomic) NSNumber *loadMoreCursor;
@property (nonatomic) long long pageSize;
@property (copy, nonatomic) NSArray *filterAwemeTypes;

+ (void)p_mutableURL:(id)a0 deleteQueryItem:(id)a1;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)trackHotAuthorMonitorIfNeeded:(id)a0 error:(id)a1;
- (id)awemesByFilterAwmeTypes:(id)a0;
- (void)fetchDataWithCompletion:(id /* block */)a0 isLoadmore:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
