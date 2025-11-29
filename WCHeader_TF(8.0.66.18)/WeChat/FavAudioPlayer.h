@class NSString, MMTimer, FavAudioInfo, NSDate;
@protocol AudioPlayerProtocol;

@interface FavAudioPlayer : MMUserService <WCAudioModuleDelegate, AudioPlayerDelegate, MMServiceProtocol> {
    unsigned int m_uiAudioOffset;
    int m_playStat;
    MMTimer *m_playTimer;
    unsigned int m_uiLastPlayedTime;
}

@property (retain, nonatomic) NSDate *m_lastStartTime;
@property (retain, nonatomic) FavAudioInfo *m_curAudioInfo;
@property (retain, nonatomic) FavAudioInfo *m_lastAudioInfo;
@property (retain, nonatomic) id<AudioPlayerProtocol> audioPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)generatePlayerWithFormat:(unsigned int)a0;
- (void)SetAndPlayFavAudio:(id)a0;
- (void)SetAndPlayFavAudio:(id)a0 startFromOffsetms:(unsigned int)a1;
- (void)StartPlayFromOffsetms:(unsigned int)a0;
- (void)setProgress:(unsigned int)a0;
- (BOOL)StopPlay;
- (BOOL)PausePlay;
- (BOOL)ReStartPlay;
- (BOOL)isPlaying;
- (int)getPlayStat;
- (id)getCurAudioInfo;
- (double)getAudioOffset;
- (void)audioPlayerDidStartPlaying:(id)a0;
- (void)audioPlayerDidStop:(id)a0;
- (void)audioPlayerDidFinishPlaying:(id)a0;
- (void)audioPlayer:(id)a0 didFailWithError:(id)a1;
- (void)onBeginPlaying;
- (void)onEndPlaying;
- (void)onPlayError;
- (void)stopTimer;
- (void)startTimer;
- (void)onAudioPlaying;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void).cxx_destruct;

@end
