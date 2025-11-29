@class NSArray, AWEMusicCollectionPlaylistCell, NSString;
@protocol AWEMusicCollectionPlaylistCellModelProtocol;

@interface AWEMusicCollectionPlaylistCellModel : NSObject <AWEMusicCollectionPlaylistCellDelegate, AWEMusicCollectionCellViewModelProtocol>

@property (weak, nonatomic) AWEMusicCollectionPlaylistCell *cell;
@property (nonatomic) BOOL haveMorePlaylist;
@property (copy, nonatomic) id /* block */ gotoPlaylistBlock;
@property (copy, nonatomic) id /* block */ clickPlaylistBlock;
@property (copy, nonatomic) id /* block */ clickPlaylistCreateBlock;
@property (copy, nonatomic) id /* block */ didShowPlaylistBlock;
@property (retain, nonatomic) NSArray *playlistArray;
@property (weak, nonatomic) id<AWEMusicCollectionPlaylistCellModelProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldShowHighlightAnimation;

- (double)cellHieght;
- (id)cellForTableView:(id)a0 indexPath:(id)a1;
- (BOOL)isNeedShowFavoriteIconWithPlaylistModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCurrentUser;

@end
