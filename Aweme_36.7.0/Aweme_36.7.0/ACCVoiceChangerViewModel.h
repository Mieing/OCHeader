@class NSString, NSArray, RACSubject, AWEVideoPublishViewModel, ACCVoiceEffectDataSource, SAMIVESVCInfoGroup, ACCVoiceChangerDataManager, RACSignal, SAMIVCTaskManager;
@protocol ACCEditServiceProtocol, AEKAudioAbility;

@interface ACCVoiceChangerViewModel : NSObject <ACCVoiceEffectDataSourceAdapter, ACCEditVoiceChangerServiceProtocol>

@property (nonatomic) BOOL shouldCheckChangeVoiceButtonDisplay;
@property (retain, nonatomic) RACSubject *updateCurrentBindChallengesSubject;
@property (retain, nonatomic) RACSubject *preFetchChallengeDetailSubject;
@property (retain, nonatomic) RACSubject *clearVoiceConversionSubject;
@property (retain, nonatomic) SAMIVCTaskManager *taskManager;
@property (nonatomic) long long showType;
@property (retain, nonatomic) ACCVoiceChangerDataManager *dataManager;
@property (copy, nonatomic) NSArray *effects;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (retain, nonatomic) ACCVoiceEffectDataSource *dataSource;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<AEKAudioAbility> audioAbility;
@property (retain, nonatomic) SAMIVESVCInfoGroup *curGroup;
@property (nonatomic) BOOL didPausePlayer;
@property (copy, nonatomic) id /* block */ groupFinishLoading;
@property (copy, nonatomic) id /* block */ previewVoiceEffectHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL shouldShowEntrance;
@property (readonly, nonatomic) RACSignal *updateCurrentBindChallengesSignal;
@property (readonly, nonatomic) RACSignal *preFetchChallengeDetailSignal;
@property (readonly, nonatomic) RACSignal *clearVoiceConversionSignal;
@property (nonatomic) BOOL enableVoiceChanger;

- (void)playerCurrentPlayTimeChanged:(double)a0;
- (void)panelWillShow;
- (void)panelWillDismiss;
- (void)cleanVoiceConversionEffect;
- (void)setupVoiceChangerShowType:(long long)a0;
- (void)sendUpdateCurrentBindChallengesSignal:(id)a0 moduleKey:(id)a1;
- (id)itemOfEffect:(id)a0;
- (id)cellClassesOfPage:(unsigned long long)a0;
- (void)configCell:(id)a0 useItem:(id)a1 atIndex:(id)a2 page:(unsigned long long)a3;
- (void)prepareItem:(id)a0 index:(id)a1 completion:(id /* block */)a2;
- (BOOL)itemPrepared:(id)a0 index:(id)a1;
- (BOOL)compareItem:(id)a0 matchLandingID:(id)a1;
- (Class)cellClzAtIndex:(id)a0 page:(unsigned long long)a1;
- (id)filterItemList:(id)a0 atPageIndex:(unsigned long long)a1;
- (void)setNeedCheckChangeVoiceButtonDisplay;
- (void)recoverLastSelectAndLocate;
- (void)fetchVoiceListIfNeeded;
- (BOOL)voiceConversionProcessing;
- (void)stopVCProcess;
- (void)sendPreFetchChallengeDetailSignalWithChallengeId:(id)a0;
- (BOOL)enableVoiceConversionEffect;
- (BOOL)vcEffectHasLocalCache:(id)a0;
- (void)applyVCEffect:(id)a0 startBlock:(id /* block */)a1 progressBlock:(id /* block */)a2 previewBlock:(id /* block */)a3 cancelPreviewBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)onProgressChange:(double)a0 curTime:(unsigned long long)a1 totalTime:(unsigned long long)a2;
- (void)playPreviewIfNeeded;
- (void)pausePreviewIfNeeded;
- (void)sendCleanVoiceConversionSignal;
- (void)fetchVoiceListIfNeeded:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
