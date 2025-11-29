@class NSString;

@interface AWEIMBlockListDataController : AWEListDataController

@property (nonatomic) long long listType;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long hotsoonFilterCount;
@property (nonatomic) long long hotsoonHasMore;

+ (id)blockListRequestURL;
+ (id)blockListAndHideMyPostListCountRequestURL;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)updateLocalDataCenterWithBlockList:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)initWithListType:(long long)a0;

@end
