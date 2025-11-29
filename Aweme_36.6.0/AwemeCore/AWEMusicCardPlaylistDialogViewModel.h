@class NSArray, NSString, NSMutableArray, AWEMiniLunaPlaylistInfoModel;

@interface AWEMusicCardPlaylistDialogViewModel : NSObject <AWEMusicCardPlaylistDialogViewModelProtocol>

@property (retain, nonatomic) NSMutableArray *songList;
@property (nonatomic) BOOL hasMoreSong;
@property (retain, nonatomic) AWEMiniLunaPlaylistInfoModel *playlistInfo;
@property (nonatomic) long long cursor;
@property (nonatomic) unsigned long long playlistType;
@property (retain, nonatomic) NSArray *insertMediaList;
@property (copy, nonatomic) NSString *playlistId;
@property (retain, nonatomic) NSString *queueType;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL canShowSkeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
