@class NSString, AWEBinding, AWEVideoPublishViewModel, NSMutableArray;
@protocol ACCEditServiceProtocol, ACCMusicVolumeServiceProtocol, ACCMusicPlayerServiceProtocol, ACCStickerServiceProtocol, ACCAIEditConflictManagerProtocol, ACCEditSpecialEffectServiceProtocol, AWEEditKit, AEKMegaEditor, ACCEditMusicServiceProtocol, ACCEditAudioEffectProtocolD, IESServiceProvider;

@interface ACCEditToolMusicEffectViewModel : NSObject <ACCEditToolMusicEffectProtocol>

@property (retain, nonatomic) AWEBinding *addEffectSignal;
@property (retain, nonatomic) AWEBinding *removeEffectSignal;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditAudioEffectProtocolD> audioEffectService;
@property (retain, nonatomic) NSMutableArray *audioAssets;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEfectService;
@property (weak, nonatomic) id<ACCMusicPlayerServiceProtocol> musicPlayer;
@property (nonatomic) BOOL needUpdateMainTrackDuration;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCMusicVolumeServiceProtocol> volumeService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> editMusicService;
@property (weak, nonatomic) id<ACCAIEditConflictManagerProtocol> AIConflictManager;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindService;
- (id)initWithModel:(id)a0 serviceProvider:(id)a1;
- (void)clearPGCAndUGCData:(id)a0;
- (void)addPGCAndUGCSlotTrackFromEffectModel:(id)a0;
- (void)updateEditVCWithEffect;
- (void)resetMainTrackDuration;
- (void)updateVideoMainTrackDuration:(double)a0;
- (void)addUGCSlotTrackFromDictionary:(id)a0 modelFile:(id)a1 excludeMusic:(BOOL)a2;
- (void)addPGCSlotTrackFromDictionary:(id)a0 excludeMusic:(BOOL)a1;
- (void)analysisAudioInfo:(id)a0 trackType:(long long)a1 audioAssetURL:(id)a2 excludeMusic:(BOOL)a3;
- (void)fetchMusicWithMusicID:(id)a0 complete:(id /* block */)a1;
- (id)clipRangeWithAssetURL:(id)a0 start:(double)a1 duration:(double)a2 isLoop:(BOOL)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObservers;

@end
