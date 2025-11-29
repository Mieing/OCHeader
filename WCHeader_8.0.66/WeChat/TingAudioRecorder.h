@class WABaseRecorder, NSString;
@protocol TingAudioRecorderDelegate;

@interface TingAudioRecorder : MMObject <WCAudioModuleDelegate, WARecorderDelegate>

@property (retain, nonatomic) WABaseRecorder *recorder;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) double minTime;
@property (nonatomic) double maxTime;
@property (nonatomic) unsigned long long recordStartTime;
@property (nonatomic) unsigned long long recordEndTime;
@property (weak, nonatomic) id<TingAudioRecorderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRecordMinTime:(double)a0 recordMaxTime:(double)a1;
- (unsigned int)startRecord;
- (void)stopRecord;
- (double)audioTime;
- (unsigned int)p_startRecorder;
- (unsigned int)p_startInternalRecorder;
- (void)stop;
- (id)createTempPath;
- (id)getTmpAudioFileName:(unsigned int)a0;
- (void)reset;
- (void)onRecorderDidRecordData:(id)a0 isLastFrame:(BOOL)a1;
- (void)onRecorderStateChange:(unsigned long long)a0 recorder:(id)a1 error:(id)a2;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void).cxx_destruct;

@end
