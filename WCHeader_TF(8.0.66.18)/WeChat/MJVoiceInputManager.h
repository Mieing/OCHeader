@class MJAudioFileManager, NSString, NSMutableDictionary, MJVoiceInputProcessor, MJVoiceInputRecorder;
@protocol MJVoiceInputManagerDelegate;

@interface MJVoiceInputManager : NSObject <MJVoiceInputRecorderDelegate, MJVoiceInputProcessorDelegate, MJVoiceInputRecognizerDelegate>

@property (retain, nonatomic) NSMutableDictionary *entitiesByIdentifier;
@property (retain, nonatomic) NSString *currentIdentifier;
@property (nonatomic) long long recordingDurationLimit;
@property (nonatomic) BOOL isReachedRecordingDurationLimit;
@property (retain, nonatomic) NSString *reachRecordingDurationLimitToastText;
@property (nonatomic) long long sampleRate;
@property (retain, nonatomic) MJVoiceInputRecorder *recorder;
@property (retain, nonatomic) MJVoiceInputProcessor *processor;
@property (readonly, nonatomic) MJAudioFileManager *audioFileManager;
@property (weak, nonatomic) id<MJVoiceInputManagerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long recognitionState;
@property (readonly, nonatomic) BOOL isRecording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAudioFileManager:(id)a0 vocalAdjustmentCache:(id)a1;
- (void)dealloc;
- (id)entityWithIdentifier:(id)a0;
- (void)reset;
- (BOOL)startRecordingWithDurationLimit:(long long)a0 reachedLimitToastText:(id)a1 options:(unsigned long long)a2;
- (BOOL)startRecordingWithOptions:(unsigned long long)a0;
- (BOOL)stopRecording;
- (BOOL)cancelRecording;
- (BOOL)_stopRecording:(BOOL)a0;
- (void)onAudioBufferOutput:(id)a0;
- (void)onAudioBufferRecordEnd;
- (void)onLevelMeterPeakChange:(float)a0;
- (void)onVoiceInputDataSliceProcessed:(id)a0 sliceIndex:(unsigned int)a1 isEnd:(BOOL)a2;
- (void)onProcessedVoiceInputSavedAtPath:(id)a0 error:(id)a1;
- (void)onUpdateSentenceInfo:(unsigned int)a0;
- (void)audioDecibelDidUpdate:(const void *)a0;
- (void)onRecognitionResultUpdated:(id)a0 resultIndex:(unsigned int)a1 identifier:(id)a2 error:(id)a3;
- (void)onRecognitionFinishedWithResult:(id)a0 resultIndex:(unsigned int)a1 identifier:(id)a2 error:(id)a3;
- (void)onRecognitionStateUpdated:(unsigned long long)a0 identifier:(id)a1;
- (BOOL)checkCurrentEntity;
- (void).cxx_destruct;

@end
