@class MJAudioUnitRecorder;

@interface MJVoiceInputRecorderAU : MJVoiceInputRecorder

@property (retain, nonatomic) MJAudioUnitRecorder *recorder;

- (id)initWithSampleRate:(long long)a0;
- (BOOL)isRecordingImpl;
- (BOOL)startRecordImplWithOptions:(unsigned long long)a0;
- (void)stopRecordImpl;
- (BOOL)isBackingRecorderExist;
- (void)initBackingRecorder;
- (void)releaseBackingRecorder;
- (void).cxx_destruct;

@end
