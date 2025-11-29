@class NSArray, NSString, AWELongVideoAlbumModel, NSNumber;
@protocol AWEHttpTask;

@interface AWELVSelectEpisodeDataController : AWEListDataController <AWELVSelectEpisodeDataControllerProtocol>

@property (retain, nonatomic) Class longVideoDataService;
@property (nonatomic) long long currentEpisodePageType;
@property (retain, nonatomic) AWELongVideoAlbumModel *currentAlbumModel;
@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *awemeMinCursor;
@property (retain, nonatomic) NSNumber *awemeMaxCursor;
@property (nonatomic) BOOL awemeHasMore;
@property (retain, nonatomic) NSNumber *episodeMinCursor;
@property (retain, nonatomic) NSNumber *episodeMaxCursor;
@property (nonatomic) BOOL episodeHasMore;
@property (weak, nonatomic) id<AWEHttpTask> fetchMetaInfoTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchMetaInfoWithAlbumID:(id)a0 episodeID:(id)a1 awemeID:(id)a2 currentCursor:(long long)a3 completionBlock:(id /* block */)a4;
- (id)fetchAwemeListWithAlbumID:(id)a0 seriesID:(id)a1 currentCursor:(long long)a2 completionBlock:(id /* block */)a3;
- (id)updateNumberAwemeListWithAlbumID:(id)a0 selectedRank:(long long)a1 completionBlock:(id /* block */)a2;
- (id)updateEpisodeListWithAlbumID:(id)a0 requestType:(long long)a1 completionBlock:(id /* block */)a2;
- (id)updateCoverAwemeListWithAlbumID:(id)a0 seriesID:(id)a1 requestType:(long long)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
