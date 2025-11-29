@class NSString, AWECreatePlaylistSectionModel, AWEPlaylistInfoModel, AWEPlaylistOfflineInfo, NSMutableArray;
@protocol AWECreatePlaylistViewModelDelegate;

@interface AWECreatePlaylistViewModel : NSObject <AWEMusicDispatchPlaylistProtocol>

@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLoadSuccess;
@property (nonatomic) BOOL isCreatingPlaylist;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;
@property (retain, nonatomic) NSMutableArray *sectionModels;
@property (retain, nonatomic) AWECreatePlaylistSectionModel *selectedSectionModel;
@property (retain, nonatomic) AWECreatePlaylistSectionModel *recommendSectionModel;
@property (retain, nonatomic) AWEPlaylistOfflineInfo *currentOfflineInfo;
@property (nonatomic) BOOL needReload;
@property (nonatomic) BOOL createButtonEnable;
@property (copy, nonatomic) NSString *relationAnchorPlaylistID;
@property (copy, nonatomic) NSString *relationGroupID;
@property (weak, nonatomic) id<AWECreatePlaylistViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchListData;
- (BOOL)isPersonalRecommendSwitchOn;
- (void)p_reloadDataIfNeeded;
- (void)handleOnlinePlaylistIfNeeded;
- (void)createPlaylistWithCompletion:(id /* block */)a0;
- (void)playlistModelChangedWithType:(unsigned long long)a0 changeModels:(id)a1 from:(id)a2;
- (void)playlistSongsChangedWithType:(unsigned long long)a0 playlistId:(id)a1 changeModels:(id)a2 from:(id)a3;
- (void)p_addSongsToRecommendSection:(id)a0;
- (void)p_removeSongsInSelectedSection:(id)a0;
- (id)p_covertSongsToCreateModel;
- (void)p_removeSongsInRecommendSection:(id)a0;
- (void)p_addSongsToSelectedSection:(id)a0;
- (void)p_removeSong:(id)a0 fromSection:(id)a1;
- (void)p_addSong:(id)a0 toSection:(id)a1 inIndex:(unsigned long long)a2;
- (void)p_refreshHeadrCoverInfo;
- (BOOL)removeSelectedSectionBySongs:(id)a0;
- (void)exchangeSelectedSongsAtIndex:(unsigned long long)a0 withObjectAtIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
