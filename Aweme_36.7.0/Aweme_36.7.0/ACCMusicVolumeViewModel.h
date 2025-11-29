@class ACCMusicUIThemeModel, NSString, NSMutableSet, ACCMusicVolumeModel, NSLock, AWEVideoPublishViewModel;
@protocol AWEEditKit, AEKMegaEditor, IESServiceProvider, ACCEditMusicServiceProtocol, AWEStudioEditMusicFeaturePublicAPI;

@interface ACCMusicVolumeViewModel : NSObject <AEKDiffChangeSubscriber, ACCMusicVolumeViewModelProtocol, ACCMusicVolumeServiceProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCMusicVolumeModel *volumeModel;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<AWEStudioEditMusicFeaturePublicAPI> musicFeatureAPI;
@property (nonatomic) BOOL voiceEnabled;
@property (nonatomic) BOOL voiceOn;
@property (nonatomic) double voiceVolume;
@property (nonatomic) BOOL bgmEnabled;
@property (nonatomic) double clipMaxMusicVolume;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) double maxBgmVolume;
@property (retain, nonatomic) NSLock *taskLock;
@property (retain, nonatomic) NSMutableSet *tasks;
@property (nonatomic) BOOL isShowVoiceChangeAlert;
@property (nonatomic) BOOL isShowAudioChangeAlert;
@property (nonatomic) BOOL captionEnabled;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double maxVoiceVolume;

- (void)diffResults:(id)a0 fromSource:(unsigned long long)a1;
- (BOOL)updateVoiceVolume:(float)a0;
- (BOOL)updateBgmVolume:(float)a0;
- (void)updateAIGCVolume:(float)a0;
- (void)onBgmVolumeChanged:(double)a0;
- (void)setNeedsRefreshFunction:(long long)a0 bizScene:(id)a1;
- (void)executeTask;
- (void)onVoiceVolumeChanged:(double)a0;
- (void)onVoiceVolumeChangedStart:(double)a0;
- (void)onVoiceVolumeChangedEnd:(double)a0;
- (void)onBgmVolumeChangedStart:(double)a0;
- (void)onBgmVolumeChangedEnd:(double)a0;
- (void)toggleVoiceOn:(BOOL)a0;
- (void)voiceOnUpdateInfo:(BOOL)a0;
- (void)toggleCaptionEnabled:(BOOL)a0;
- (id)initWithPublishModel:(id)a0 serviceProvider:(id)a1;
- (void)updateVolumeModel:(id)a0;
- (void)volumeViewWillShow;
- (double)maxBgmVolumeWithPublishModel:(id)a0;
- (void)checkForAudioTrack;
- (void)setupSlidesVolumeState;
- (void)setupBindingV2;
- (void)updateVoiceEnable;
- (void)updateBgmAudioInfo;
- (void)updateVoiceVolumeData;
- (void)updateBgmVolumeData;
- (void)updateVoiceAudioData;
- (void)ensureAlert:(id /* block */)a0 cancelBlock:(id /* block */)a1 title:(id)a2 detail:(id)a3;
- (void)updateBgmAudioData;
- (void)updateVoiceAudioInfo;
- (void).cxx_destruct;
- (void)setup;
- (void)audioDidChange;
- (void)trackEventWithName:(id)a0;

@end
