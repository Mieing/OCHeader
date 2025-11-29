@class NSString;

@interface AudioSource : NSObject <AudioCapturerDelegate> {
    void *_nativeAudioSource;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _audio_data_mutex;
}

@property (nonatomic) BOOL audioMute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAudioSourceNil;
- (id)initWithNativeAudioSource:(void *)a0;
- (void)setNativeAudioSource:(void *)a0;
- (void)capturer:(void *)a0 andNumberOfSample:(unsigned long long)a1 andBytesPerSample:(unsigned long long)a2 andNumberOfChannels:(unsigned long long)a3 andSampleRate:(unsigned int)a4 andTimestampUs:(long long)a5 andDelayMs:(int)a6;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
