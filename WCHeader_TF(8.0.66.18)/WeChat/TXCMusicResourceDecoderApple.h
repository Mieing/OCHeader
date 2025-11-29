@class AVAssetReaderTrackOutput, NSString, AVAsset, AVAssetReader, TXCMusicResourceExtensionRepairer, TXCFixNoSuffixUrlLoader;
@protocol TXCMusicResourceDecoderAppleDelegate;

@interface TXCMusicResourceDecoderApple : NSObject {
    struct unique_ptr<liteav::audio::AudioResampleInterface, std::default_delete<liteav::audio::AudioResampleInterface>> { struct __compressed_pair<liteav::audio::AudioResampleInterface *, std::default_delete<liteav::audio::AudioResampleInterface>> { struct AudioResampleInterface *__value_; } __ptr_; } _resampler;
    struct unique_ptr<liteav::audio::AudioFrame, std::default_delete<liteav::audio::AudioFrame>> { struct __compressed_pair<liteav::audio::AudioFrame *, std::default_delete<liteav::audio::AudioFrame>> { struct AudioFrame *__value_; } __ptr_; } _inputFrame;
    struct unique_ptr<liteav::audio::AudioFrame, std::default_delete<liteav::audio::AudioFrame>> { struct __compressed_pair<liteav::audio::AudioFrame *, std::default_delete<liteav::audio::AudioFrame>> { struct AudioFrame *__value_; } __ptr_; } _outFrame;
}

@property (readonly, nonatomic) struct AudioResampleInterface { void /* function */ **x0; } *resampler;
@property (readonly, nonatomic) void *inputFrame;
@property (readonly, nonatomic) void *outFrame;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVAssetReader *reader;
@property (retain, nonatomic) AVAssetReaderTrackOutput *readerOutput;
@property (retain, nonatomic) TXCMusicResourceExtensionRepairer *fileRepairer;
@property (retain, nonatomic) TXCFixNoSuffixUrlLoader *fixNoSuffixUrlResLoader;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channels;
@property (nonatomic) BOOL isResampleInited;
@property (nonatomic) BOOL isReadingCompleted;
@property (nonatomic) BOOL isLocalAsset;
@property (nonatomic) long long totalBytesRead;
@property (nonatomic) long long totalDurationMs;
@property (nonatomic) long long startTimeMs;
@property (nonatomic) long long retryCount;
@property (weak, nonatomic) id<TXCMusicResourceDecoderAppleDelegate> delegate;

+ (BOOL)isNetStream:(id)a0;
+ (BOOL)isFileUrl:(id)a0;

- (id)init;
- (BOOL)openFile:(id)a0;
- (BOOL)startReading:(id)a0 at:(long long)a1;
- (void)close;
- (void)decode;
- (void)setSampleRate:(int)a0 channels:(int)a1;
- (void)seekToTimestamp:(unsigned long long)a0;
- (long long)getDuration;
- (const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)getSampleBufferDescription:(struct opaqueCMSampleBuffer { } *)a0;
- (id)buildAssetFromUrl:(id)a0;
- (void)resampleAudioFrame:(void *)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 description:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2;
- (BOOL)setupAudioReaderWithAsset:(id)a0 fromStartTime:(long long)a1;
- (void)parseAudioBuffer:(struct opaqueCMSampleBuffer { } *)a0 description:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1;
- (long long)readLengthMs;
- (BOOL)isEndAtBeginning;
- (BOOL)retry;
- (id)URLAssetFromUrlWithoutSuffix:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
