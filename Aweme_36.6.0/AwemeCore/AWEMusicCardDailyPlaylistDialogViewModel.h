@class NSString, NSMutableArray, NSNumber;

@interface AWEMusicCardDailyPlaylistDialogViewModel : NSObject <AWEMusicCardPlaylistDialogViewModelProtocol>

@property (retain, nonatomic) NSMutableArray *songList;
@property (nonatomic) BOOL hasMoreSong;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *lunaTrackId;
@property (copy, nonatomic) NSString *playlistId;
@property (nonatomic) unsigned long long sceneType;
@property (retain, nonatomic) NSNumber *limitCount;
@property (nonatomic) BOOL canShowSkeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)playlistInfo;
- (void)requestDailyPlaylistDetailWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
