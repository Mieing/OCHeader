@class NSString, CADisplayLink, StreamAudioQueuePlayer, SpeakTextResourceLoader, SpeakTextReporter, AVSpeechSynthesizer, SpeakTextAudioExtInfo, NSMutableArray;
@protocol SpeakTextDelegate;

@interface SpeakTextLogicV2 : NSObject <SpeakTextResourceLoaderDelegate, StreamAudioPlayerDelegate, AVSpeechSynthesizerDelegate, WCProximityStateRecognizerDelegate, WCAudioSessionExt> {
    BOOL m_forceStop;
}

@property (retain, nonatomic) SpeakTextResourceLoader *resourceLoader;
@property (retain, nonatomic) NSString *playingText;
@property (retain, nonatomic) StreamAudioQueuePlayer *audioPlayer;
@property (copy, nonatomic) id /* block */ audioPlayerBlockedHandler;
@property (nonatomic) BOOL audioPlayerBlocked;
@property (nonatomic) unsigned int playingIndex;
@property (nonatomic) BOOL useLocalSpeaker;
@property (retain, nonatomic) AVSpeechSynthesizer *synthesizer;
@property (nonatomic) int localEngineOffset;
@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) CADisplayLink *timer;
@property (retain, nonatomic) SpeakTextAudioExtInfo *currentExtInfo;
@property (nonatomic) unsigned int currentExtInfoIndex;
@property (nonatomic) int *bytesCount;
@property (nonatomic) int systemSpeakCount;
@property (nonatomic) int wxSpeakCount;
@property (nonatomic) unsigned long long prepareSpeakTime;
@property (nonatomic) unsigned long long startSpeakTime;
@property (retain, nonatomic) SpeakTextReporter *reporter;
@property (weak, nonatomic) id<SpeakTextDelegate> m_delegate;
@property (retain, nonatomic) NSString *reportIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)forceUseLocalSpeak;
+ (BOOL)hasLanguageOtherThanCN:(id)a0;
+ (id)detectLanguageFromText:(id)a0;
+ (BOOL)checkUseLocalSpeaker:(id)a0;
+ (id)getNextRequestStr:(id)a0 offset:(int *)a1;

- (id)init;
- (void)dealloc;
- (BOOL)StartSpeakText:(id)a0;
- (void)PauseSpeak;
- (void)ResumeSpeak;
- (void)EndSpeak;
- (BOOL)IsPlaying;
- (void)onSpeakEndWithFinished:(BOOL)a0;
- (void)appendNextDataIfExist;
- (void)calculateBytesCount;
- (void)audioPlayerDidStartPlaying:(id)a0;
- (void)audioPlayerDidBlocked:(id)a0;
- (void)audioPlayerDidFinishPlaying:(id)a0;
- (void)audioPlayer:(id)a0 didFailWithError:(id)a1;
- (void)resourceLoader:(id)a0 failToGetPieceAtIndex:(unsigned int)a1;
- (void)resourceLoader:(id)a0 didGetPieceAtIndex:(unsigned int)a1;
- (void)timerCheckProgress;
- (unsigned int)findUtf16LengthWithUtf8BytesLength:(unsigned int)a0;
- (void)changePlayingTextToLinesIfNeed;
- (void)switchToLocalSpeaker;
- (void)speakNextBySynthesizer;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 utterance:(id)a2;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (void)startAudioSession;
- (void)addProximityMonitorIfNeed;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onProximityStateChangeToCloseEar;
- (void)onProximityStateChangeToAwayFromEar;
- (void).cxx_destruct;

@end
