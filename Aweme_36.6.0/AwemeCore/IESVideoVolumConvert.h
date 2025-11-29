@class AVAssetReader, AVAssetReaderOutput, IESVideoVolumConvertConfig, NSObject;
@protocol OS_dispatch_queue;

@interface IESVideoVolumConvert : NSObject {
    struct WaveformVisualizer { unsigned long long x0; unsigned char x1; } *_waveform;
}

@property (retain, nonatomic) IESVideoVolumConvertConfig *config;
@property (retain, nonatomic) AVAssetReader *reader;
@property (retain, nonatomic) AVAssetReaderOutput *output;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL finished;
@property (nonatomic) double duration;
@property (nonatomic) long long maxFrameCount;

- (void)startProcess:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)initWithConfig:(id)a0 error:(id *)a1;

@end
