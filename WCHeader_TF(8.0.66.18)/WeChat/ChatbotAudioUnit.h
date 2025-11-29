@class AVAudioPlayer, NSRecursiveLock, NSString, CHHapticEngine;

@interface ChatbotAudioUnit : NSObject <AUAudioDataSource, AVAudioPlayerDelegate>

@property (nonatomic) BOOL enableInterphoneMode;
@property (retain, nonatomic) NSRecursiveLock *audioEncLock;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL isAudioSucc;
@property (retain, nonatomic) CHHapticEngine *hapticsEngine;
@property (copy, nonatomic) id /* block */ startAudioHandler;
@property (retain, nonatomic) AVAudioPlayer *beginSoundplayer;
@property (retain, nonatomic) AVAudioPlayer *endSoundplayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)preloadSoundPlayer;
- (BOOL)getIfEnableInterphoneMode;
- (BOOL)getIfLagPlayMode;
- (void)changeIntoFullDuplexMode;
- (void)changeInfoHalfDuplexMode;
- (void)startChatbotAudio:(id /* block */)a0;
- (void)setSpeakerMode;
- (void)releaseAll;
- (void)StartRecord;
- (void)StopRecord;
- (void)StartPlay;
- (BOOL)getIsRecordMode;
- (void)setMute:(BOOL)a0 needPlaySound:(BOOL)a1 needFullDuplex:(BOOL)a2;
- (void)audioDeviceStartedSuccess;
- (void)createHapticsEngine;
- (void)startHapticsEnginePlay;
- (void)stopHapticsEngine;
- (BOOL)isGetDataReady;
- (int)AudioDevPutData:(char *)a0 length:(unsigned int)a1;
- (int)AudioDevGetData:(char *)a0 length:(unsigned int)a1;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
