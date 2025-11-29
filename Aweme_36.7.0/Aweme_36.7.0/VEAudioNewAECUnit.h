@class NSData, NSMutableArray;

@interface VEAudioNewAECUnit : VEAudioBaseUnit {
    void *_handle;
    struct AudioBufferQueue { char *bufferData; unsigned int dataSize; } _outputBufferQuene;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _onStop;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isInProcess;
}

@property (retain, nonatomic) NSData *modelData;
@property (retain, nonatomic) NSMutableArray *sampleArray;
@property (nonatomic) BOOL needReuseBgm;
@property (nonatomic) BOOL needReinitWhenStart;

+ (id)modelName;

- (void)p_stopProcessor;
- (void)p_startProcessor;
- (void)p_onStopProcessor;
- (BOOL)processAudioSampleData:(id)a0;
- (void)p_destoryAudio;
- (void)p_initAudio;
- (id)p_processer:(id)a0 bgm:(id)a1 sampleCount:(int)a2 channel:(float)a3;
- (BOOL)setAudioConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
