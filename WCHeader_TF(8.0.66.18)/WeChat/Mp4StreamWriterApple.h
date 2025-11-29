@class NSString, AVAssetWriterInput, NSDictionary, NSDate, NSOperationQueue, AVAssetWriter;

@interface Mp4StreamWriterApple : NSObject {
    NSString *_outputFilePath;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInput *_audioWriterInput;
    NSDictionary *_audioOutputSettings;
    BOOL _startedSession;
    struct opaqueCMFormatDescription { } *_videoFormatDescription;
    struct opaqueCMFormatDescription { } *_audioFormatDescription;
    struct VideoMetadata { struct CopyOnWriteBuffer { struct scoped_refptr<lite_base::RefCountedData<liteav::BufferT<unsigned char>>> { void *ptr_; } buffer_; unsigned long long offset_; unsigned long long size_; } pps; struct CopyOnWriteBuffer { struct scoped_refptr<lite_base::RefCountedData<liteav::BufferT<unsigned char>>> { void *ptr_; } buffer_; unsigned long long offset_; unsigned long long size_; } sps; struct CopyOnWriteBuffer { struct scoped_refptr<lite_base::RefCountedData<liteav::BufferT<unsigned char>>> { void *ptr_; } buffer_; unsigned long long offset_; unsigned long long size_; } vps; int codec; unsigned int width; unsigned int height; int rotation; } _video_metadata;
    BOOL _haveWrittenFirstAudioFrame;
    unsigned long long _totalWrittenBytes;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastFramePTS;
    struct queue<std::unique_ptr<liteav::audio::AudioFrame>, std::deque<std::unique_ptr<liteav::audio::AudioFrame>>> { struct deque<std::unique_ptr<liteav::audio::AudioFrame>, std::allocator<std::unique_ptr<liteav::audio::AudioFrame>>> { struct __split_buffer<std::unique_ptr<liteav::audio::AudioFrame> *, std::allocator<std::unique_ptr<liteav::audio::AudioFrame> *>> { void **__first_; void **__begin_; void **__end_; struct __compressed_pair<std::unique_ptr<liteav::audio::AudioFrame> **, std::allocator<std::unique_ptr<liteav::audio::AudioFrame> *>> { void **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<std::unique_ptr<liteav::audio::AudioFrame>>> { unsigned long long __value_; } __size_; } c; } _audio_frame_queue;
    struct queue<std::unique_ptr<liteav::video::VideoFrame>, std::deque<std::unique_ptr<liteav::video::VideoFrame>>> { struct deque<std::unique_ptr<liteav::video::VideoFrame>, std::allocator<std::unique_ptr<liteav::video::VideoFrame>>> { struct __split_buffer<std::unique_ptr<liteav::video::VideoFrame> *, std::allocator<std::unique_ptr<liteav::video::VideoFrame> *>> { void **__first_; void **__begin_; void **__end_; struct __compressed_pair<std::unique_ptr<liteav::video::VideoFrame> **, std::allocator<std::unique_ptr<liteav::video::VideoFrame> *>> { void **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<std::unique_ptr<liteav::video::VideoFrame>>> { unsigned long long __value_; } __size_; } c; } _video_frame_queue;
    NSDate *_stopTime;
    id /* block */ _waitForFinishingWritingCallback;
    BOOL _didCallStop;
    BOOL _isAudioFinished;
    BOOL _isVideoFinished;
    long long _lastVideoDurationMs;
    NSOperationQueue *_operationQueue;
}

- (id)init;
- (void)dealloc;
- (void)setOuputFilePath:(const void *)a0;
- (void)setAudioMetadata:(const struct AudioMetadata { int x0; int x1; int x2; } *)a0;
- (id)esdsDataWithAudioMetadata:(const struct AudioMetadata { int x0; int x1; int x2; } *)a0;
- (id)audioExtraDataWithChannels:(long long)a0 sampleRate:(long long)a1;
- (id)putDescWithTag:(char)a0 size:(unsigned int)a1;
- (unsigned char)getSampleRateIndex:(unsigned int)a0;
- (void)setVideoMetadata:(const void *)a0;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (BOOL)setUpWriter;
- (int)startWriting;
- (void)writeFrameLoop;
- (long long)stopWriting;
- (void)finishWritingWithBlock:(id /* block */)a0;
- (int)enqueueAudioFrame:(struct unique_ptr<liteav::audio::AudioFrame, std::default_delete<liteav::audio::AudioFrame>> { struct __compressed_pair<liteav::audio::AudioFrame *, std::default_delete<liteav::audio::AudioFrame>> { struct AudioFrame *x0; } x0; })a0;
- (int)enqueueVideoFrame:(struct unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>> { struct __compressed_pair<liteav::video::VideoFrame *, std::default_delete<liteav::video::VideoFrame>> { struct VideoFrame *x0; } x0; })a0;
- (int)writeAudioFrame:(struct unique_ptr<liteav::audio::AudioFrame, std::default_delete<liteav::audio::AudioFrame>> { struct __compressed_pair<liteav::audio::AudioFrame *, std::default_delete<liteav::audio::AudioFrame>> { struct AudioFrame *x0; } x0; })a0;
- (BOOL)writeAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)writeVideoFrame:(struct unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>> { struct __compressed_pair<liteav::video::VideoFrame *, std::default_delete<liteav::video::VideoFrame>> { struct VideoFrame *x0; } x0; })a0 duration:(long long)a1;
- (BOOL)writeVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)logWriterStatus;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
