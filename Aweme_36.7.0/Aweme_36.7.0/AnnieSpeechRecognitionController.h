@class AnnieSpeechRecognizer, NSString, NSObject;
@protocol OS_dispatch_queue, AnnieAudioRecorderProvider, IESHYHybridViewProtocol;

@interface AnnieSpeechRecognitionController : NSObject <AnnieAudioRecorderProviderDelegate, SAMICoreCallbackListener>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordSerailQueue;
@property (retain, nonatomic) id<AnnieAudioRecorderProvider> audioRecorder;
@property (retain, nonatomic) AnnieSpeechRecognizer *speechRecognizer;
@property (weak, nonatomic) id<IESHYHybridViewProtocol> hybridView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecord;
- (void)onMessageReceived:(long long)a0 withBlock:(id)a1;
- (void)audioRecorder:(id)a0 didReceivedAudioData:(struct AnnieAudioQueueInputData { void *x0; struct OpaqueAudioQueue *x1; struct AudioQueueBuffer *x2; struct AudioTimeStamp *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; } *)a1;
- (void)audioRecorderDidStop:(id)a0;
- (void)audioRecorderWithError:(id)a0;
- (void)stopRecognition;
- (void)setNetworkState;
- (void)_processRecognitionResult:(id)a0;
- (void)startRecognitionWithAppKey:(id)a0 sosSilenceTimeout:(id)a1 eosSilenceTimeout:(id)a2 sentenceMaxSeconds:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setAsrState:(id)a0;

@end
