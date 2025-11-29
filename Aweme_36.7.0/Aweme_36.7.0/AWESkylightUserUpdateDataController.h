@class NSNumber, NSArray, NSString;

@interface AWESkylightUserUpdateDataController : AWEListDataController <AWESkylightUserUpdateDataControllerProtocol>

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;
@property (retain, nonatomic) NSNumber *level;
@property (nonatomic) BOOL isSpecialModel;
@property (nonatomic) long long scene;
@property (nonatomic) long long firstRefreshTotalCount;
@property (retain, nonatomic) NSArray *moreAuthorList;
@property (retain, nonatomic) NSArray *oftenWatchList;
@property (retain, nonatomic) NSArray *allItemList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithIsSpecialFollow:(BOOL)a0;
- (id)initWithIsSpecialFollow:(BOOL)a0 scene:(long long)a1;
- (void)loadDataWithCompletion:(id /* block */)a0 pullType:(long long)a1;
- (id)deduplicatedArray:(id)a0 withRawArray:(id)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
