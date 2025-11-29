@class NSError, NSString, NSArray, SpeechEngine, NSDictionary, NSObject, AWEIMAudioTranslatorConfig, NSMutableData, AVAudioFormat;
@protocol OS_dispatch_queue, AWEIMPCMAudioTranslatorDelegate, OS_dispatch_semaphore;

@interface AWEIMPCMAudioTranslator : NSObject <SpeechEngineDelegate, AWEIMAudioBufferProcessor, IESIMPCMAudioTranslatorProtocol>

@property (retain, nonatomic) AVAudioFormat *inputFormat;
@property (retain, nonatomic) AVAudioFormat *toFormat;
@property (nonatomic) unsigned long long int16Size;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long packageSize;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL isTranslating;
@property (nonatomic) BOOL processStopped;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSMutableData *pcmData;
@property (retain, nonatomic) SpeechEngine *engine;
@property (copy, nonatomic) NSString *timerToken;
@property (copy, nonatomic) NSDictionary *resultDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double startTime;
@property (retain, nonatomic) AWEIMAudioTranslatorConfig *config;
@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSArray *configList;
@property (weak, nonatomic) id<AWEIMPCMAudioTranslatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double currentTime;

- (void)stopRecord;
- (void)startRecord;
- (void)processWithBuffer:(id)a0;
- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)stopTranslator;
- (int)p_startEngine;
- (void)p_translate;
- (void)p_debugWithEngine:(id)a0;
- (int)p_setupAsrSDK;
- (void)p_speechDidStart;
- (void)p_speechDidStop;
- (void)p_handleRecordErrorResult:(id)a0;
- (void)p_handleRecordResult:(id)a0 isFinish:(BOOL)a1;
- (void)startTranslator;
- (id)initWithInputFormat:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
