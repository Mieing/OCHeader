@class WavAudioPlayer, NSString, NSRecursiveLock;

@interface SPXAudioRecorder : BaseAudioRecorder <CommonPlayerDelegate> {
    NSRecursiveLock *mPrepareSentLock;
    BOOL mIsPrepareSent;
    int mSlientTime;
}

@property (retain, nonatomic) WavAudioPlayer *m_wavAudioPlayer;
@property (nonatomic) BOOL needRestartMusic;
@property (nonatomic) BOOL needRestartAudioTalk;
@property (nonatomic) BOOL needWaitForTipAudio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataFormat;
- (void)prepareBuffers;
- (void)createAudioFile_WAVE:(id)a0;
- (void)setMagicCookieToAudioFile;
- (void)onCommonPlayerPlay;
- (void)onCommonPlayerStop;
- (void)onCommonPlayerPlayEnd;
- (void)onCommonPlayerPause;
- (void)onCommonPlayerError:(id)a0;
- (void)onCommonPlayerPlayAtTime:(double)a0;
- (BOOL)shouldAutoRestartWith:(int)a0;
- (BOOL)canAutoRestart;
- (id)init;
- (void)dealloc;
- (void)setSlientTime:(int)a0;
- (BOOL)prepareRecord;
- (BOOL)prepareRecord:(BOOL)a0 cache:(BOOL)a1;
- (void)createWaveFile:(id)a0;
- (void)createSpeexFile:(id)a0;
- (void)createFile:(id)a0;
- (BOOL)prepareSend;
- (void)playBeginTipAudio;
- (void)playEndTipAudio;
- (void)record;
- (void)cleanResource;
- (void)stop;
- (void)autostop;
- (long long)getVoiceFormat;
- (void).cxx_destruct;

@end
