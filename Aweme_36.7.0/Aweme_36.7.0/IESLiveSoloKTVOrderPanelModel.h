@class HTSEventContext, IESLiveSoloKTVHomeModel, NSArray, IESLivePartyKTVChorusJumpService, NSString, NSMutableDictionary, IESLiveCombineSubject, IESSoloKTVMusicManager;
@protocol IESLiveRoomService, IESLiveTracker, IESLiveKTVFullLinkMonitor;

@interface IESLiveSoloKTVOrderPanelModel : NSObject <IESLiveKTVOrderPanelProtocol>

@property (weak, nonatomic) IESLiveSoloKTVHomeModel *model;
@property (nonatomic) long long requestMode;
@property (retain, nonatomic) IESSoloKTVMusicManager *ktvMusicManager;
@property (retain, nonatomic) NSMutableDictionary *categoryQueryDict;
@property (retain, nonatomic) IESLivePartyKTVChorusJumpService *partyKTVChorusJumpService;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) NSArray *mainTabs;
@property (copy, nonatomic) NSString *currentMainTab;
@property (copy, nonatomic) NSString *fastStartTabName;
@property (nonatomic) long long fastStartFirstLevelIndex;
@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isOrderPanlShow;
@property (retain, nonatomic) id<IESLiveTracker> tracker;
@property (retain, nonatomic) id<IESLiveKTVFullLinkMonitor> ktvMonitor;
@property (retain, nonatomic) NSMutableDictionary *singListCallBackBlkDict;
@property (copy, nonatomic) id /* block */ showFeedBackBlock;
@property (retain, nonatomic) IESLiveCombineSubject *orderPanelActionSignal;
@property (nonatomic) BOOL isLinked;
@property (nonatomic) BOOL enableRecommendChorusRoom;
@property (nonatomic) BOOL isSoloKTV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)topSongId;
- (void)fetchKTVCategoryWithRequestMode:(long long)a0 firstLevelTab:(int)a1 completion:(id /* block */)a2;
- (void)fetchKTVMusicListWithRequestMode:(long long)a0 firstLevelTab:(int)a1 category:(id)a2 isLoadMore:(BOOL)a3 topSongId:(id)a4 collectionId:(id)a5 completion:(id /* block */)a6;
- (void)cell:(id)a0 songDidAddSuccessFor:(id)a1;
- (void)cell:(id)a0 refreshDownloadButtonUIWithMusicModel:(id)a1;
- (void)listView:(id)a0 configurationForCell:(id)a1;
- (void)listView:(id)a0 configurationFooter:(id)a1 forSection:(long long)a2;
- (void)listView:(id)a0 willDisplayCell:(id)a1 forIndexPath:(id)a2;
- (void)cell:(id)a0 didFavoriteItem:(id)a1;
- (void)cell:(id)a0 didClickChorusRecommendInfo:(id)a1 forItem:(id)a2;
- (void)cell:(id)a0 clickedAddSongFor:(id)a1;
- (void)showMusicListFeedbackInHomePanelViewWithSongName:(id)a0 singerName:(id)a1;
- (id)combineMusicListArray:(id)a0 firstLevelTab:(int)a1 category:(id)a2;
- (BOOL)needRefreshWithName:(id)a0;
- (BOOL)needAddAllHeaderWithName:(id)a0;
- (BOOL)needShowCountWithName:(id)a0;
- (BOOL)needReloadDataWithName:(id)a0;
- (void)addSingListCallBackWithViewModel:(id)a0;
- (void)refreshTabSortStatusWithTabArray:(id)a0;
- (void)needLoadBannerData;
- (void)fetchKTVMusicListWithRequestMode:(long long)a0 firstLevelTab:(int)a1 category:(id)a2 completion:(id /* block */)a3;
- (void)trackContainerCellShow;
- (void)trackShowPageWithViewModel:(id)a0;
- (void)trackClickSearchEventWithSearchType:(long long)a0 requestPage:(id)a1;
- (void)trackSearchRequestEventWithContent:(id)a0 contentType:(id)a1 searchType:(long long)a2;
- (void)trackSearchResultEventWithContent:(id)a0 requestPage:(id)a1 contentType:(id)a2 searchType:(long long)a3;
- (void)trackCellShowWithList:(id)a0;
- (void)getKingItemArrayWithCompletion:(id /* block */)a0;
- (void)fetchKTVRoomListWithCompletion:(id /* block */)a0;
- (void)trackSoloKTVSongClickWithSong:(id)a0 tabName:(id)a1 clickType:(id)a2;
- (id)initWithModel:(id)a0 diContext:(id)a1;
- (void)trackSoloKTVSongClickWithSong:(id)a0 tabName:(id)a1 clickType:(id)a2 extra:(id)a3;
- (void)trackSoloKTVSongShowWithSong:(id)a0 tabName:(id)a1;
- (void).cxx_destruct;
- (id)collectionId;

@end
