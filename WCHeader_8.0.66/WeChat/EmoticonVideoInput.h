@class AVAssetReaderTrackOutput, AVAsset, AVAssetReader, NSURL, NSObject;
@protocol OS_dispatch_queue, EmoticonVideoInputDelegate;

@interface EmoticonVideoInput : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVAssetReader *assetReader;
@property (retain, nonatomic) AVAssetReaderTrackOutput *trackOutput;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } totalDuration;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *inputQueue;
@property (weak, nonatomic) id<EmoticonVideoInputDelegate> delegate;
@property (nonatomic) BOOL restartWhenCompleted;

- (id)initWithFilePath:(id)a0 inputQueue:(id)a1;
- (BOOL)beginReading;
- (void)reset;
- (void)readNextVideoFrame;
- (void)readNextVideoFrameWithSkipFrame:(long long)a0;
- (void)readVideoFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct opaqueCMSampleBuffer { } *)getVideoFrameSyncAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)destorySampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void).cxx_destruct;

@end
