@class NSString, LiveTabResponse_Extra;

@interface AWELiveWorkDataController : AWEListDataController

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) long long pageSize;
@property (nonatomic) long long cursor;
@property (readonly, nonatomic) BOOL needReloadData;
@property (retain, nonatomic) LiveTabResponse_Extra *extraModel;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMore:(id /* block */)a0;
- (id)initWithUserID:(id)a0 secUserID:(id)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)refresh:(id /* block */)a0;

@end
