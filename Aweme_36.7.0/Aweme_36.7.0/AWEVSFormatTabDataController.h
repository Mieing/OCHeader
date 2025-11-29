@class NSIndexPath, NSString, AWELiveUserProfileVSTabApi, NSArray, HTSLiveAlbumItem, NSMutableArray, HTSLiveImage;

@interface AWEVSFormatTabDataController : NSObject

@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) AWELiveUserProfileVSTabApi *api;
@property (retain, nonatomic) NSMutableArray *episodeMutableArray;
@property (copy, nonatomic) NSArray *seasons;
@property (retain, nonatomic) HTSLiveAlbumItem *streaming;
@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) HTSLiveImage *darkCover;
@property (retain, nonatomic) HTSLiveImage *lightCover;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) long long isFetchingPreloadEpisodes;
@property (retain, nonatomic) NSIndexPath *indexPathForJustWatchedEpisodeID;
@property (copy, nonatomic) NSString *targetSeasonID;
@property (nonatomic) BOOL videoStreamHasLoadedInList;
@property (copy, nonatomic) NSString *justWatchedEpisodeID;
@property (retain, nonatomic) NSArray *episodes;
@property (readonly, nonatomic) BOOL hasDataSource;
@property (retain, nonatomic) NSIndexPath *targetShowScrollTopIndex;

- (id)initWithUserID:(id)a0;
- (BOOL)needLoadMore;
- (id)initWithUserID:(id)a0 justWatchedEpisodeID:(id)a1;
- (void)disposeDataSourceForLoadMore:(BOOL)a0 episodeList:(id)a1;
- (void)loadMoreWithUIDataCompletion:(id /* block */)a0 preloadDataCompletion:(id /* block */)a1;
- (void)preparePreloadPlayInfoForEpisodes:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreForTargetSeasonID:(id)a0 completion:(id /* block */)a1;
- (void)checkShouldScrollToTopItemIndex;
- (BOOL)needLoadMoreForJustWatched;
- (BOOL)needLoadMoreForCheckingVideoStreamIsInList;
- (void)fetchPreloadEpisodePlayInfoForEpisodeIDs:(id)a0 completion:(id /* block */)a1;
- (void)p_addEpisodeObjForProgramList:(id)a0;
- (void)refreshWithUIDataCompletion:(id /* block */)a0 preloadDataCompletion:(id /* block */)a1;
- (void)preloadVSVideoWithRows:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
