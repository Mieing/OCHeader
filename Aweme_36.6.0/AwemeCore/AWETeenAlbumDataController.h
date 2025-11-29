@class NSString, AWEMinorAlbum, AWEAwemeModel, NSMutableDictionary, AWETeenAlbumRecommendResponse, NSObject;
@protocol OS_dispatch_queue;

@interface AWETeenAlbumDataController : AWEListDataController

@property (retain, nonatomic) AWEMinorAlbum *originModel;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long originEpisode;
@property (retain, nonatomic) AWETeenAlbumRecommendResponse *response;
@property (nonatomic) unsigned long long albumRecommendRequestState;
@property (nonatomic) long long totalEpisode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mixDataQueue;
@property (nonatomic) unsigned long long fakeAlbumType;
@property (retain, nonatomic) AWEAwemeModel *originAwemeModel;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fromIpAlbum;
@property (retain, nonatomic) AWEAwemeModel *playingModel;
@property (nonatomic) BOOL isCollected;
@property (copy, nonatomic) NSString *albumID;
@property (retain, nonatomic) NSMutableDictionary *trackParams;

+ (void)reportAlbumPlayStatus:(id)a0 progress:(long long)a1 finished:(BOOL)a2;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (id)initWithAlbumID:(id)a0;
- (id)sortArrayByExcuteDate:(id)a0;
- (id)initWithModel:(id)a0 currentEpisode:(long long)a1;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 loadPrevious:(BOOL)a2 completion:(id /* block */)a3;
- (id)isRequestOnAirError;
- (id)isEmptyAlbumIDError;
- (id)resetRequestParams:(long long)a0 cursor:(long long)a1;
- (void)p_reportAwemeVideoNotTeen:(id)a0;
- (id)albumRequestListParam:(long long)a0 loadPrevious:(BOOL)a1;
- (void)p_addTrackParams;
- (id)initWithAlbumID:(id)a0 currentEpisode:(long long)a1;
- (void)fetchRecommendAlbums:(id)a0 completion:(id /* block */)a1;
- (void)albumInfo:(id)a0 withCompletion:(id /* block */)a1;
- (void)resetDataFromEpisode:(long long)a0 completion:(id /* block */)a1;
- (BOOL)episodeInDataSource:(long long)a0;
- (long long)indexFromEpisode:(long long)a0;
- (void)updateMinCursor:(long long)a0;
- (void)updateMaxCursor:(long long)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
