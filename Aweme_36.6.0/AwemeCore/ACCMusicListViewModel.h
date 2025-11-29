@class ACCMusicUIThemeModel, NSString, NSArray, ACCMusicListUseCase, NSMutableSet, AWEVideoPublishViewModel, ACCMusicItemViewModel;
@protocol ACCMusicListBizHandler, ACCMusicListRepositoryProtocol, AWEStudioEditMusicFeaturePublicAPI, ACCMusicTrackerProtocol;

@interface ACCMusicListViewModel : NSObject <ACCMusicListViewModelProtocol>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long uiState;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *emptyText;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) id<ACCMusicListRepositoryProtocol> repository;
@property (retain, nonatomic) ACCMusicListUseCase *useCase;
@property (weak, nonatomic) id<ACCMusicListBizHandler> bizHandler;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableSet *trackedIds;
@property (weak, nonatomic) ACCMusicItemViewModel *loadingItemViewModel;
@property (nonatomic) long long panelStartShowTimeStamp;
@property (weak, nonatomic) id<AWEStudioEditMusicFeaturePublicAPI> musicFeatureAPI;
@property (nonatomic) BOOL enableStreamDownload;
@property (nonatomic) BOOL itemEnableDeselect;
@property (nonatomic) BOOL useFPAPI;
@property (retain, nonatomic) id<ACCMusicTrackerProtocol> tracker;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)musicSelectedFrom;
- (void)setupBinding;
- (id)itemsFromMusicList:(id)a0;
- (id)selectedMusic;
- (BOOL)contextMenuEnabled:(id)a0;
- (id)itemWithMusic:(id)a0;
- (void)trackItemClickAtIndex:(unsigned long long)a0;
- (void)selectMusicItem:(id)a0;
- (void)trackItemDeselectAtIndex:(unsigned long long)a0;
- (void)updateTrackInfoOnDeselectItem:(id)a0;
- (void)updateTrackInfoOnSelectIndex:(unsigned long long)a0;
- (void)trackItemSelectAtIndex:(unsigned long long)a0;
- (void)preloadMusicResourceIfNeededWithCenterIndex:(unsigned long long)a0;
- (void)applyBGMMusicAtIndex:(unsigned long long)a0;
- (void)downloadMusicAtIndex:(unsigned long long)a0;
- (void)recoverBGMVolume;
- (void)selectMusicItemAtIndex:(unsigned long long)a0;
- (void)clipMusic:(id)a0;
- (void)toggleMusicFavorite:(id)a0 index:(unsigned long long)a1;
- (void)triggerApplyMusic:(id)a0;
- (id)initWithRepository:(id)a0 useCase:(id)a1 publishModel:(id)a2 bizHandler:(id)a3 musicFeatureAPI:(id)a4;
- (void)removeMusicItem:(id)a0;
- (id)contextMenuActionsWithItem:(id)a0;
- (void)didTriggerMenu:(id)a0 withItem:(id)a1;
- (void)panelStartShow;
- (void)panelEndShow;
- (void)trackItemShowAtIndex:(unsigned long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)fetchData;

@end
