@protocol SimpleRecordBufferDelegate;

@interface MJAudioUnitRecorder : NSObject

@property BOOL isRunning;
@property (nonatomic) struct OpaqueAudioComponentInstance { } *audioUnit;
@property (weak, nonatomic) id<SimpleRecordBufferDelegate> delegate;

- (id)init;
- (BOOL)startRecordWithVoiceProcessingIOEnabled:(BOOL)a0;
- (void)stopRecord;
- (BOOL)isRecording;
- (BOOL)setupAudioUnitWithVoiceProcessingIOEnabled:(BOOL)a0;
- (void)releaseAudioUint;
- (float)calculatePowerForData:(void *)a0 size:(unsigned int)a1;
- (void).cxx_destruct;

@end
