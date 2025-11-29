@class NSString, NSMutableArray, NSArray;

@interface AWEMiniLunaPlaylistPagingFetcher : NSObject

@property (nonatomic) BOOL isFirstRequest;
@property (copy, nonatomic) NSString *createdCursor;
@property (nonatomic) BOOL createdHasMore;
@property (retain, nonatomic) NSMutableArray *innerCreatedPlaylists;
@property (copy, nonatomic) NSString *collectedCursor;
@property (nonatomic) BOOL collectedHasMore;
@property (retain, nonatomic) NSMutableArray *innerCollectedPlaylists;
@property (retain, nonatomic) NSMutableArray *innerRecommendPlaylists;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) NSArray *playlists;
@property (readonly, nonatomic) NSArray *createdPlaylists;
@property (readonly, nonatomic) NSArray *collectedPlaylists;
@property (readonly, nonatomic) NSArray *recommendPlaylists;

- (id)initWithUserID:(id)a0 secUserID:(id)a1;
- (void)requestPlaylistsWithCount:(long long)a0 completion:(id /* block */)a1;
- (void)p_requestCreatedPlaylistsWithSecUserID:(id)a0 cursor:(id)a1 count:(long long)a2 completion:(id /* block */)a3;
- (void)p_requestCollectedPlaylistsWithSecUserID:(id)a0 cursor:(id)a1 count:(long long)a2 completion:(id /* block */)a3;
- (BOOL)p_shouldRequestDailyPlaylistInfo;
- (void)p_requestDailyPlaylistsCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
