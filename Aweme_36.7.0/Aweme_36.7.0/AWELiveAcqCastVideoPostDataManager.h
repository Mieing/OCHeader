@class NSNumber, NSString;

@interface AWELiveAcqCastVideoPostDataManager : AWEListDataController

@property (copy, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (nonatomic) long long hotSpotCount;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long pageSize;
@property (nonatomic) BOOL isCurrentUser;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL richAwemeEnabled;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)commonParams;
- (id)initWithUserID:(id)a0;
- (BOOL)canLoadMore;
- (id)getExpectedSizeInfo;
- (void)loadMoreWithCompletion:(id /* block */)a0 shouldLocatedJustWatched:(BOOL)a1;
- (id)RequestURL;
- (void)p_filterPrivateAndRichWorkIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)refresh:(id /* block */)a0;

@end
