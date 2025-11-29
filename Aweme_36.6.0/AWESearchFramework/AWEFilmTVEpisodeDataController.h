@class NSNumber, NSString, AWEGeneralFilmTVSourceModel;

@interface AWEFilmTVEpisodeDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSString *albumID;
@property (retain, nonatomic) NSString *mpID;
@property (retain, nonatomic) NSNumber *sortType;
@property (retain, nonatomic) AWEGeneralFilmTVSourceModel *sourceModel;
@property (retain, nonatomic) NSNumber *mediumType;
@property (nonatomic) long long dataSourceType;
@property (retain, nonatomic) NSString *alaSrc;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)requestUrlString;
- (void)loadDataWithOffset:(long long)a0 withCount:(long long)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
