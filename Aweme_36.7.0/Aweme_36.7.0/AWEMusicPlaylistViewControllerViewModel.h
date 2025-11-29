@class AWEMiniLunaPlaylistPagingFetcher, NSArray, NSString, NSMutableSet, AWEMusicPlaylistSectionViewModel;
@protocol AWEMusicPlaylistViewControllerViewModelDelegate;

@interface AWEMusicPlaylistViewControllerViewModel : NSObject <AWEMusicDispatchPlaylistProtocol>

@property (nonatomic) long long myCursor;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL myHasMore;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL mixedHasMore;
@property (nonatomic) unsigned long long playlistCreateType;
@property (retain, nonatomic) NSMutableSet *playlistIdSet;
@property (retain, nonatomic) NSArray *sectionModels;
@property (retain, nonatomic) AWEMusicPlaylistSectionViewModel *mixedSection;
@property (retain, nonatomic) AWEMiniLunaPlaylistPagingFetcher *fetcher;
@property (weak, nonatomic) id<AWEMusicPlaylistViewControllerViewModelDelegate> delegate;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *curSecUid;
@property (nonatomic) BOOL isMiniLuna;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playlistModelChangedWithType:(unsigned long long)a0 changeModels:(id)a1 from:(id)a2;
- (void)updatePlaylist:(id)a0;
- (void)updateCollectionPlaylist:(id)a0;
- (void)appendPlaylistModels:(id)a0;
- (void)addPlaylist:(id)a0;
- (void)loadMorePlaylistWithSecUid:(id)a0 block:(id /* block */)a1;
- (void)preparedModels:(id)a0 hasMore:(BOOL)a1 cursor:(id)a2 playlistType:(unsigned long long)a3;
- (void)deletePlaylistWithPlaylistInfo:(id)a0 completion:(id /* block */)a1;
- (void)cancelPlaylistCollectWithPlaylistInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)isLoginUserWithSecUid:(id)a0;
- (void)section:(id)a0 appendModels:(id)a1;
- (void)updateMixedSectionModels;
- (void).cxx_destruct;
- (id)init;
- (id)deletePlaylist:(id)a0;

@end
