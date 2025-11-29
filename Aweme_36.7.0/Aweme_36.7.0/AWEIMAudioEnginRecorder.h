@class NSString, AWEIMAudioPowerMeter, NSArray, NSURL, AVAudioFile, NSObject, AVAudioEngine, AVAudioFormat, NSMutableArray;
@protocol OS_dispatch_queue, AWEIMAudioRecorderDelegate, OS_dispatch_semaphore;

@interface AWEIMAudioEnginRecorder : NSObject <AWEIMAudioRecorderInterface>

@property (nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) double currentTime;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) AVAudioEngine *audioEngine;
@property (retain, nonatomic) AVAudioFile *recordedFile;
@property (retain, nonatomic) AVAudioFormat *inputFormat;
@property (retain, nonatomic) AWEIMAudioPowerMeter *voiceIOPowerMeter;
@property (retain, nonatomic) NSArray *levels;
@property (retain, nonatomic) NSMutableArray *processors;
@property (weak) id<AWEIMAudioRecorderDelegate> delegate;
@property (getter=isMeteringEnabled) BOOL meteringEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopWithAction:(unsigned long long)a0;
- (void)p_processBuffer:(id)a0 when:(id)a1 toFormat:(id)a2;
- (void)handleAudioEngineConfigurationChangeNoti:(id)a0;
- (float)peakPowerForChannel:(unsigned long long)a0;
- (void)updateMeters;
- (float)averagePowerForChannel:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)record;
- (void)dealloc;
- (id)initWithURL:(id)a0 settings:(id)a1 error:(id *)a2;
- (BOOL)deleteRecording;
- (void)addProcessor:(id)a0;

@end
