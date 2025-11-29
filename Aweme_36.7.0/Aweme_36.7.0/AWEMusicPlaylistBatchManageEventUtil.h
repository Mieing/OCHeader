@class NSString;

@interface AWEMusicPlaylistBatchManageEventUtil : NSObject

@property (retain, nonatomic) NSString *playlistId;

- (void)trackLoadAllSongsWithPageCount:(long long)a0 songCount:(long long)a1 succuss:(BOOL)a2 loadDuration:(double)a3;
- (id)initWithPlaylistId:(id)a0;
- (void)trackLoadAllSongsWithPageCount:(long long)a0 songCount:(long long)a1;
- (void)trackDeleteSongs:(long long)a0 chunkCount:(long long)a1 failedChunk:(long long)a2 duration:(double)a3 isSelectAll:(BOOL)a4;
- (void)trackAddSongs:(long long)a0 isFailure:(BOOL)a1 isSelectAll:(BOOL)a2;
- (void).cxx_destruct;

@end
