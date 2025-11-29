@class NSDiffableDataSourceSnapshot, NSString, UITableViewDiffableDataSource, NSMutableSet, WCFinderListLoadingStateModel, NSData, NSMutableArray;

@interface WCFinderContinueCollectionVM : NSObject

@property (nonatomic) int scene;
@property (retain, nonatomic) WCFinderListLoadingStateModel *loadingState;
@property (retain, nonatomic) NSMutableSet *svrMentionIDSet;
@property (copy, nonatomic) NSString *descTitle;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSMutableArray *colletionModelArr;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;

- (id)initWithScene:(int)a0;
- (BOOL)dataEmpty;
- (void)reFetchPageData:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void)fetchMoreData:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void)clearData;
- (void)_fetchDataWithSuccessBlock:(id /* block */)a0 failBlock:(id /* block */)a1;
- (void)appendCollectionList:(id)a0;
- (id)dataSnapshot;
- (id)cellVMIndexPath:(id)a0;
- (void)deleteCollectionWithIndexPath:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void).cxx_destruct;

@end
