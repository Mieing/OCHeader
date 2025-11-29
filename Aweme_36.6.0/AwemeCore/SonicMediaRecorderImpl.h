@class AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInput, NSString, AVURLAsset, SonicMediaRecorderService, AVAssetWriter;
@protocol SonicMediaRecorderDelegate;

@interface SonicMediaRecorderImpl : NSObject {
    unsigned int video_width_;
    unsigned int video_height_;
    AVAssetWriter *asset_writer_;
    AVAssetWriterInput *video_input_;
    AVAssetWriterInput *audio_input_;
    AVAssetWriterInputPixelBufferAdaptor *video_buffer_;
    struct __CVBuffer { } *render_target_;
    AVURLAsset *av_asset_;
    double bits_per_pixel_;
    double duration_;
    NSString *local_path_;
    NSString *tt_path_;
    unsigned long long frames_;
    long long last_frame_time_;
    unsigned long long start_time_;
    unsigned long long paused_time_;
    unsigned long long last_pause_time_;
    BOOL running_;
    struct opaqueCMFormatDescription { } *audio_format_;
    SonicMediaRecorderService *recorder_service_;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } recorder_member_lock_;
    id<SonicMediaRecorderDelegate> listener_;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } total_audio_duration_time_;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } audio_start_time_;
    BOOL check_audio_timestamp_;
}

- (void)appendAudioSamples:(void *)a0 length:(int)a1;
- (id)initWithApp:(id)a0 Width:(unsigned int)a1 height:(unsigned int)a2 bitRate:(unsigned int)a3 gop:(unsigned int)a4 fps:(unsigned int)a5 delegate:(id)a6;
- (void)writeFrame;
- (unsigned long long)getMicroSecondTim;
- (void)appendZeroAudioData:(int)a0 audio_input:(id)a1;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)destroy;
- (double)duration;
- (unsigned int)height;
- (unsigned int)width;
- (id).cxx_construct;
- (struct __CVBuffer { } *)start;
- (void)resume;

@end
