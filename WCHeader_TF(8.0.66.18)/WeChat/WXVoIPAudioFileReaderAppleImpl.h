@class AVAssetReaderTrackOutput, NSString, AVAsset, AVAssetReader, WXVoIPAudioFileExtensionRepairer;
@protocol AudioFileReaderAppleImplDelegate;

@interface WXVoIPAudioFileReaderAppleImpl : NSObject {
    struct unique_ptr<wxvoipsdk::audio::SilkResampler, std::default_delete<wxvoipsdk::audio::SilkResampler>> { struct __compressed_pair<wxvoipsdk::audio::SilkResampler *, std::default_delete<wxvoipsdk::audio::SilkResampler>> { struct SilkResampler *__value_; } __ptr_; } _resampler;
    struct unique_ptr<wxvoipsdk::AudioFrame, std::default_delete<wxvoipsdk::AudioFrame>> { struct __compressed_pair<wxvoipsdk::AudioFrame *, std::default_delete<wxvoipsdk::AudioFrame>> { struct AudioFrame *__value_; } __ptr_; } _inputFrame;
    struct unique_ptr<wxvoipsdk::AudioFrame, std::default_delete<wxvoipsdk::AudioFrame>> { struct __compressed_pair<wxvoipsdk::AudioFrame *, std::default_delete<wxvoipsdk::AudioFrame>> { struct AudioFrame *__value_; } __ptr_; } _outFrame;
}

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVAssetReader *reader;
@property (retain, nonatomic) AVAssetReaderTrackOutput *readerOutput;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channels;
@property (nonatomic) BOOL isResampleInited;
@property (nonatomic) BOOL isReadingCompleted;
@property (nonatomic) BOOL isLocalAsset;
@property (nonatomic) long long totalBytesRead;
@property (nonatomic) long long totalDurationMs;
@property (nonatomic) long long startTimeMs;
@property (nonatomic) long long retryCount;
@property (readonly, nonatomic) void *resampler;
@property (readonly, nonatomic) struct AudioFrame { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned short x11; int x12; int x13; int x14; int x15; unsigned short x16; char *x17; int x18; int x19; BOOL x20; } *inputFrame;
@property (readonly, nonatomic) struct AudioFrame { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned short x11; int x12; int x13; int x14; int x15; unsigned short x16; char *x17; int x18; int x19; BOOL x20; } *outFrame;
@property (retain, nonatomic) WXVoIPAudioFileExtensionRepairer *fileRepairer;
@property (weak, nonatomic) id<AudioFileReaderAppleImplDelegate> delegate;

+ (BOOL)isNetStream:(id)a0;
+ (BOOL)isFileUrl:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)openFile:(id)a0;
- (BOOL)startReading:(id)a0 at:(long long)a1;
- (void)close;
- (void)decode;
- (void)setSampleRate:(int)a0 channels:(int)a1;
- (void)seekToTimestamp:(unsigned long long)a0;
- (long long)getDuration;
- (const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)getSampleBufferDescription:(struct opaqueCMSampleBuffer { } *)a0;
- (id)buildAssetFromUrl:(id)a0;
- (void)resampleAudioFrame:(struct AudioFrame { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned short x11; int x12; int x13; int x14; int x15; unsigned short x16; char *x17; int x18; int x19; BOOL x20; } *)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 description:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })durationOfAsset:(id)a0;
- (BOOL)setupAudioReaderWithAsset:(id)a0 fromStartTime:(long long)a1;
- (void)parseAudioBuffer:(struct opaqueCMSampleBuffer { } *)a0 description:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1;
- (long long)readLengthMs;
- (BOOL)isEndAtBeginning;
- (BOOL)retry;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
