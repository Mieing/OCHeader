@class NSArray, AWEPlaylistInfoModel, NSMutableSet, NSMutableArray, AWEMusicSongListSelectSectionModel;

@interface AWEMusicSongListSelectViewControllerViewModel : NSObject

@property (retain, nonatomic) NSArray *cellModels;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSMutableSet *musicIDSet;
@property (nonatomic) unsigned long long feedRequestCount;
@property (retain, nonatomic) AWEMusicSongListSelectSectionModel *collectSectionModel;
@property (retain, nonatomic) AWEMusicSongListSelectSectionModel *feedSectionModel;
@property (retain, nonatomic) NSMutableArray *trackIDs;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistModel;
@property (nonatomic) BOOL isMiniLuna;
@property (retain, nonatomic) NSMutableArray *sectionModels;

- (BOOL)isPersonalRecommendSwitchOn;
- (id)curUserSecUid;
- (void)queryPlaylistWithBlock:(id /* block */)a0;
- (void)loadMorePlaylistWithBlock:(id /* block */)a0;
- (void)loadMusicListWithBlock:(id /* block */)a0;
- (void)reactLoadMoreFeedWithResponseCount:(long long)a0 responseFilteredCount:(long long)a1;
- (id)feedLoadCount;
- (void)loadMoreFeedWithBlock:(id /* block */)a0;
- (id)userID;
- (void).cxx_destruct;

@end
