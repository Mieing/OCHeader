@class MMTimer, SimpleRecordState;

@interface SimpleAudioRecorder : NSObject

@property (retain, nonatomic) MMTimer *m_meterTimer;
@property (retain, nonatomic) SimpleRecordState *m_bufferState;
@property (nonatomic) BOOL forceToUseBuiltInMic;
@property (nonatomic) double checkMeterInterval;

+ (void)sprintRetCode:(int)a0;

- (void)dealloc;
- (id)init;
- (void)onMeterChange;
- (float)getPeakPower;
- (id)getState;
- (long long)RecordingTime;
- (BOOL)updateDataFormat;
- (void)clearQueue;
- (BOOL)updateQueue;
- (void)clearBuffer;
- (BOOL)updateBuffer;
- (BOOL)prepareRecord;
- (BOOL)audioQueueStart;
- (BOOL)audioQueueStop;
- (BOOL)record;
- (void)stop;
- (void)printRetCode:(int)a0;
- (void)selectBuiltInMic;
- (void).cxx_destruct;

@end
