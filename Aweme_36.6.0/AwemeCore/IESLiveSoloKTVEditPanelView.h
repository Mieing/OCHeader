@class IESLiveKtvSongStruct, NSString, IESSoloKTVVoiceSlider, IESLiveNewKTVVolumeSliderViewDH, UILabel, IESLiveKTVTuningStore, IESLiveKTVTuningEffectView;

@interface IESLiveSoloKTVEditPanelView : UIView <IESLiveTuningStorePlayerProtocol>

@property (retain, nonatomic) IESLiveNewKTVVolumeSliderViewDH *voiceSlider;
@property (retain, nonatomic) IESLiveNewKTVVolumeSliderViewDH *musicSlider;
@property (retain, nonatomic) IESSoloKTVVoiceSlider *delaySlider;
@property (retain, nonatomic) IESLiveKTVTuningStore *tuningStore;
@property (retain, nonatomic) IESLiveKTVTuningEffectView *effectView;
@property (retain, nonatomic) UILabel *delayLabel;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ updateVoiceVolume;
@property (copy, nonatomic) id /* block */ updateMusicVolume;
@property (copy, nonatomic) id /* block */ updateVoiceDelay;
@property (copy, nonatomic) id /* block */ updateEffectPath;
@property (nonatomic) BOOL isScoreMode;
@property (nonatomic) BOOL isShowLyric;
@property (nonatomic) BOOL enableEarReturnMode;
@property (readonly, nonatomic) BOOL headphonesMonitoringEnabled;
@property (nonatomic) BOOL canSwitchSongPlayingType;
@property (nonatomic) unsigned long long currentSongPlayingType;
@property (nonatomic) unsigned long long savedSongPlayingType;
@property (retain, nonatomic) IESLiveKtvSongStruct *currentPlayKTVMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMusicVolume:(float)a0;
- (void)setReverberationEnabled:(BOOL)a0;
- (void)setMusicPushVolume:(float)a0;
- (void)setHeadphonesMonitoringEnabled:(BOOL)a0;
- (void)switchKtvEffectWithSourcePath:(id)a0;
- (void)startEffect;
- (void)stopEffect;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)exitKTVMode;
- (void)setToneVolume:(float)a0;
- (void)setMusicPlayVolume:(float)a0;
- (void)setVoiceVolumeV2:(float)a0;
- (BOOL)isHeadphonesPluggedIn;
- (void)handleHeadphonesStatus;
- (void)setEarReturnOn:(BOOL)a0;
- (BOOL)savedEarReturnEnabled;
- (BOOL)isEnabledAutotune;
- (void)resetDefaultHeadphonesMonitoring;
- (void)setEarMonitorVolume:(long long)a0 isLiveCore:(BOOL)a1;
- (void)setCurrentOrDefaultEarReturnOn:(BOOL)a0;
- (void)updateViewWithDraftModel:(id)a0;
- (id)valueToText:(double)a0;
- (void)setRemoteAudioPlaybackVolume:(id)a0 volume:(int)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVoiceVolume:(float)a0;
- (void)setPlaybackVolume:(long long)a0;

@end
