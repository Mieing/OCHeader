@class NSString, IESLiveKTVTuningStore, IESLiveKtvSongStruct;

@interface IESSoloKTVTuningViewModel : NSObject <IESLiveTuningStorePlayerProtocol>

@property (retain, nonatomic) NSString *firstKey;
@property (retain, nonatomic) NSString *originKey;
@property (retain, nonatomic) NSString *earKey;
@property (retain, nonatomic) NSString *midiKey;
@property (retain, nonatomic) NSString *voiceKey;
@property (retain, nonatomic) NSString *musicKey;
@property (copy, nonatomic) id /* block */ didClickEffectBlock;
@property (retain, nonatomic) IESLiveKTVTuningStore *tuning;
@property (nonatomic) BOOL originStatus;
@property (nonatomic) BOOL earStatus;
@property (nonatomic) BOOL midiStatus;
@property (nonatomic) double voiceVol;
@property (nonatomic) double musicVol;
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
- (void)setRemoteAudioPlaybackVolume:(id)a0 volume:(int)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setVoiceVolume:(float)a0;
- (void)setPlaybackVolume:(long long)a0;

@end
