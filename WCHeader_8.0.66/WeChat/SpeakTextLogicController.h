@class NSString, SpeakTextLogicV2;
@protocol SpeakTextLogicControllerDelegate;

@interface SpeakTextLogicController : NSObject <SpeakTextDelegate, WCAudioModuleDelegate> {
    unsigned long long m_lastReceiveTimeMs;
    struct _NSRange { unsigned long long location; unsigned long long length; } m_lastReceiveRange;
    unsigned int m_lastReceiveCostTimeMs;
}

@property (retain, nonatomic) SpeakTextLogicV2 *speakLogic;
@property (weak, nonatomic) id<SpeakTextLogicControllerDelegate> delegate;
@property (retain, nonatomic) NSString *reportIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)newTTS;

- (id)init;
- (void)dealloc;
- (BOOL)StartSpeakText:(id)a0;
- (void)PauseSpeak;
- (void)ResumeSpeak;
- (void)EndSpeak;
- (BOOL)IsPlaying;
- (unsigned int)currentSpeakIndex;
- (void)onSpeakStart:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 costTimeMs:(unsigned int)a1;
- (void)onSpeakLoading;
- (void)onSpeakStop;
- (void)onSpeakFail;
- (void)initSpeakTextLogic;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void).cxx_destruct;

@end
