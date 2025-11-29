@class NSString, NSMutableArray, _TtC21AWEMusicStreamingImpl9LunaAlbum;

@interface AWEMusicCardAlbumDialogViewModel : NSObject <AWEMusicCardPlaylistDialogViewModelProtocol>

@property (retain, nonatomic) NSMutableArray *songList;
@property (nonatomic) BOOL hasMoreSong;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl9LunaAlbum *album;
@property (copy, nonatomic) NSString *albumId;
@property (nonatomic) BOOL canShowSkeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
