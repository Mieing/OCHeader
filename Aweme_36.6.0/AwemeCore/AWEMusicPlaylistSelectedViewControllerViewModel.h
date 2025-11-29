@class NSArray, NSMutableSet;
@protocol AWEMusicPlaylistTableViewCellViewModelProtocol;

@interface AWEMusicPlaylistSelectedViewControllerViewModel : NSObject

@property (retain, nonatomic) NSArray<AWEMusicPlaylistTableViewCellViewModelProtocol> *cellModels;
@property (nonatomic) unsigned long long playlistCreateType;
@property (retain, nonatomic) NSMutableSet *playlistIdSet;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL isMiniLuna;

- (id)curUserSecUid;
- (void)updatePlaylist:(id)a0;
- (void)appendPlaylistModels:(id)a0;
- (void)addObjectToPlaylistIdSet:(id)a0;
- (void)loadMorePlaylistWithBlock:(id /* block */)a0;
- (void)requstPlaylistAddSongToPlaylist:(id)a0 musicModels:(id)a1 completion:(id /* block */)a2;
- (void)appendMiniLunaPlaylistModels:(id)a0;
- (void)addPlaylist:(id)a0;
- (void)delPlaylist:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
