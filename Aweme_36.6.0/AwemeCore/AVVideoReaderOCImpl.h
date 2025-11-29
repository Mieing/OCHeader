@class AVAsset, AVAssetReader, NSError, AVAssetReaderOutput, NSObject;
@protocol OS_dispatch_queue;

@interface AVVideoReaderOCImpl : IESMMObject {
    id /* block */ _retainBlock;
}

@property (retain, nonatomic) NSError *readerError;
@property (retain, nonatomic) AVAsset *srcAsset;
@property (retain, nonatomic) AVAssetReader *reader;
@property (retain, nonatomic) AVAssetReaderOutput *videoOutput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoDecodeQueue;
@property (nonatomic) struct opaqueCMSampleBuffer { } *lastSampleBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } latestVideoSampleTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property (nonatomic) BOOL needReencode;
@property (nonatomic) int decodePixelFmt;
@property (nonatomic) BOOL isFullRange;
@property (nonatomic) BOOL reachedEOF;
@property (nonatomic) unsigned long long compressType;

- (BOOL)openReader;
- (unsigned int)getCompressPixelFormatWithType:(unsigned long long)a0 originFormat:(unsigned int)a1;
- (BOOL)initVideoReader:(id)a0;
- (int)seekFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)closeReader;
- (id)initWithAVAsset:(void *)a0 needReencode:(BOOL)a1 pixFmt:(int)a2 isFullRange:(BOOL)a3 pixelBufferCompressType:(unsigned long long)a4;
- (BOOL)getMediaInfo:(unsigned int)a0 info:(void *)a1 codecID:(unsigned int *)a2;
- (id)getMetaData;
- (unsigned int)getStreamCount;
- (BOOL)readerStatusFailed;
- (void).cxx_destruct;
- (int)setStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (BOOL)atEOF;

@end
