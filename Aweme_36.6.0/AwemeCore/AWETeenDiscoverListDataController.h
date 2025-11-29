@class NSString;

@interface AWETeenDiscoverListDataController : AWEListDataController

@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long cardCursor;
@property (nonatomic) unsigned long long albumListCount;
@property (copy, nonatomic) NSString *pageToken;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic) long long channelKind;

+ (void)fetchRecentWatchedWithCompletion:(id /* block */)a0;
+ (void)p_filterRecentlyWatchSection:(id)a0;
+ (void)fetchChannelDataWithCompletion:(id /* block */)a0;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)p_fetchWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)teen_loadMoreWithCompletion:(id /* block */)a0;
- (void)teen_refreshWithCompletion:(id /* block */)a0;
- (void)teen_initFetchWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
