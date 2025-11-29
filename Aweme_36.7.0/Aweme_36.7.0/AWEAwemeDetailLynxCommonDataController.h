@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWEAwemeDetailLynxCommonDataController : AWEListDataController <AWEAwemeDetailTableViewControllerDelegate, AWEAwemeDetailLynxCommonDataControllerProtocol>

@property (copy, nonatomic) NSString *requestURLString;
@property (retain, nonatomic) NSNumber *refreshCursor;
@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) long long pageSize;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSDictionary *defaultParams;
@property (nonatomic) long long realPreviousIndex;
@property (nonatomic) long long realMoreIndex;
@property (nonatomic) long long previousIndex;
@property (nonatomic) long long moreIndex;
@property (nonatomic) long long initialIndex;
@property (retain, nonatomic) NSArray *itemIDArray;
@property (nonatomic) BOOL isFetched;
@property (copy, nonatomic) NSString *containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)detailTableViewControllerWillDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)fetchDataWithCompletion:(id /* block */)a0 isLoadmore:(BOOL)a1;
- (id)awemeIdsWithIsLoadmore:(BOOL)a0;
- (id)initWithIDs:(id)a0 playID:(id)a1 containerID:(id)a2;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
