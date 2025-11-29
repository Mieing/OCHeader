@class MJPublisherContext, NSString, NSArray, MMBGMSelectedConfig, EditVideoMusicController, NSMutableDictionary, NSMutableArray, RecommendedMusicInfo, OMJMusicInfo, MJCameraMusicTabViewModel;
@protocol MMBGMSelectedMusicDataProtocol, MJShootingMusicPickingViewModelDelegate;

@interface MJShootingMusicPickingViewModel : NSObject <MJCameraMusicTabViewModelDataSource, MJCameraMusicTabViewModelDelegate, MMBGMSelectedFavFeedSoundTabViewModelDelegate>

@property (retain, nonatomic) MJCameraMusicTabViewModel *camMusicVM;
@property (retain, nonatomic) NSMutableArray *wxToMaasMusicIds;
@property (retain, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSString *templateMusicId;
@property (retain, nonatomic) OMJMusicInfo *templateMusicInfo;
@property (retain, nonatomic) OMJMusicInfo *followMusicInfo;
@property (readonly, nonatomic) EditVideoMusicController *musicController;
@property (retain, nonatomic) id<MMBGMSelectedMusicDataProtocol> currentPlayingMusicData;
@property (copy, nonatomic) NSString *queryWord;
@property (weak, nonatomic) id<MJShootingMusicPickingViewModelDelegate> delegate;
@property (readonly, nonatomic) NSMutableArray *bgmPanelTabModels;
@property (readonly, nonatomic) MMBGMSelectedConfig *bgmPanelConfig;
@property (readonly, nonatomic) NSArray *templateMusics;
@property (readonly, nonatomic) OMJMusicInfo *currentMusicInfo;
@property (readonly, nonatomic) unsigned long long tabIndex;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) unsigned long long currentMusicSource;
@property (retain, nonatomic) RecommendedMusicInfo *patMusicInfo;
@property (retain, nonatomic) MJPublisherContext *publisherContext;
@property (nonatomic) BOOL isOSTSelected;
@property (nonatomic) BOOL isBGMSelected;
@property (nonatomic) BOOL isManualSettingMusicOn;
@property (nonatomic) BOOL isFirstShow;
@property (nonatomic) BOOL shouldOpenMusicPanelForFavMusicEntry;
@property (nonatomic) BOOL didSelectedMusicTriggeredByMusicPanelFirstShowing;
@property (readonly, nonatomic) NSMutableDictionary *musicDataByID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lyricInfosWithResp:(id)a0 musicDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (unsigned long long)bgmIDWithMusicID:(id)a0;
+ (int)bgmTypeWithMusicID:(id)a0;

- (id)init;
- (long long)favMusicTabIndex;
- (void)loadAndPlayMusic:(id)a0;
- (void)pauseMusic;
- (void)replayMusic;
- (void)playMusicWithLocalMusicInfo:(id)a0 filePath:(id)a1;
- (void)configForceUsedMusicsWithTemplateInfo:(id)a0 wxToMaasMusicIds:(id)a1 patMusicInfo:(id)a2;
- (void)fillMusicParamsTo:(id)a0 withTemplateId:(id)a1;
- (id)genMusicInfoAfterClearTemplate;
- (void)updateTemplateMusic:(id)a0 selectedMusic:(id)a1;
- (void)updateCurrentMusic:(id)a0 atTabIndex:(unsigned long long)a1 index:(unsigned long long)a2 queryWord:(id)a3;
- (void)updateCurrentMusic:(id)a0 source:(unsigned long long)a1;
- (BOOL)_isForceUsedMusic:(id)a0;
- (id)overrideMusicInfoWithPatInfoIfNeeded:(id)a0;
- (id)_insertSelectMusicToFirst:(id)a0 selectedMusic:(id)a1;
- (void)downloadMusic:(id)a0 completion:(id /* block */)a1;
- (id)MJCameraMusicTabViewModelGetMusicInfo:(id)a0;
- (void)cameraMusicTabViewModelDidFetchRecommendedMusic:(id)a0;
- (void)bgmSelectedFavFeedSoundTabViewModel:(id)a0 didFetchMusicDatas:(id)a1;
- (void)requestLyricForCurrentMusicInfoWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
