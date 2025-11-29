@class NSNumber, AWECollectDiversionModel, AWEMusicStreamingQueueHandler, NSMutableArray, NSString, AWEMiniLunaPlaylistSectionViewModel, AWEMusicDSPEventModel, AWEMusicPlayerQueue, NSArray, AWEUserModel, AWEMusicCollectionLunaBannerSectionViewModel, AWEMiniLunaPlaylistInfoModel, AWEMiniLunaPlaylistPagingFetcher;
@protocol AWEMiniLunaMyCollectionViewModelDelegate;

@interface AWEMiniLunaMyCollectionViewModel : NSObject <AWEMusicStreamingQueueDelegate, AWEMusicStreamingQueueHandlerDelegate, AWEMusicDispatchPlaylistProtocol>

@property (retain, nonatomic) NSArray *sectionViewModelArray;
@property (retain, nonatomic) AWEMiniLunaPlaylistSectionViewModel *createdPlaylistSectionModel;
@property (retain, nonatomic) AWEMiniLunaPlaylistSectionViewModel *collectedPlaylistSectionModel;
@property (retain, nonatomic) AWEMiniLunaPlaylistSectionViewModel *dailyPlaylistSectionModel;
@property (retain, nonatomic) AWEMusicCollectionLunaBannerSectionViewModel *lunaBannerSectionModel;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) NSString *createdPlaylistCursor;
@property (copy, nonatomic) NSString *collectedPlaylistCursor;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long requestCount;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSMutableArray *recommendBackupPool;
@property (nonatomic) long long recommendRetryCount;
@property (nonatomic) BOOL hasShownLunaBanner;
@property (retain, nonatomic) AWEMiniLunaPlaylistPagingFetcher *fetcher;
@property (readonly, nonatomic) AWEMusicStreamingQueueHandler *queueHandler;
@property (nonatomic) BOOL hasMoreSong;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSString *purchId;
@property (weak, nonatomic) id<AWEMiniLunaMyCollectionViewModelDelegate> delegate;
@property (nonatomic) BOOL refreshFooterHidden;
@property (nonatomic) BOOL canAutoPlayPlaylist;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) AWECollectDiversionModel *collectDiversionInfo;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long highlightPlaylistCategory;
@property (retain, nonatomic) AWEMusicPlayerQueue *queue;
@property (retain, nonatomic) AWEMiniLunaPlaylistInfoModel *currentAutoPlayingPlaylist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasMoreOfScene:(id)a0;
- (void)loadMoreScene:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)playlistModelChangedWithType:(unsigned long long)a0 changeModels:(id)a1 from:(id)a2;
- (id)pageEventParams;
- (void)requestPlaylistsWithCompletion:(id /* block */)a0;
- (void)requestAutoPlayInfoWithCompletion:(id /* block */)a0;
- (id)indexPathForlunaLikePlaylistCellInTableView:(id)a0;
- (id)playlistModelAtIndexPath:(id)a0;
- (void)deletePlaylistAtIndexPath:(id)a0 completion:(id /* block */)a1;
- (void)deletePlaylist:(id)a0 completion:(id /* block */)a1;
- (id)p_makePlaylistSectionViewModelWithType:(unsigned long long)a0;
- (void)p_remakeSections;
- (void)addPlaylist:(id)a0 toType:(unsigned long long)a1;
- (id)deletePlaylist:(id)a0 toType:(unsigned long long)a1;
- (void)updatePlaylist:(id)a0;
- (void)updateCollectionPlaylist:(id)a0;
- (BOOL)p_isLynxBanner;
- (void)p_trackLunaBannerDidClicked;
- (void)p_trackLunaBannerShown;
- (BOOL)p_canShowBanner;
- (id)p_makeLunaBannerSectionViewModel:(BOOL)a0;
- (void)p_handleResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithUserModel:(id)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;

@end
