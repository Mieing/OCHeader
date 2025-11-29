@class AVAssetReaderTrackOutput, AVAsset, AVAssetReader, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IESLiveAssetReaderOutput : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVAssetReader *reader;
@property (retain, nonatomic) AVAssetReader *depletedReader;
@property (retain, nonatomic) AVAssetReaderTrackOutput *output;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *readingQueue;
@property (retain, nonatomic) NSMutableArray *sampleBufferQueue;
@property (nonatomic) BOOL loop;
@property (nonatomic) unsigned long long loopSentinel;
@property (nonatomic) unsigned long long currentLoopCount;
@property (nonatomic) unsigned long long preferredFramesPerSecond;
@property (nonatomic) unsigned long long compatibility;
@property (nonatomic) BOOL enableReportReadingError;
@property (nonatomic) BOOL fixColorOffset;
@property (nonatomic) double frameDuration;
@property (nonatomic) double videoDuration;
@property (readonly, nonatomic) struct CGSize { double width; double height; } videoSize;
@property (copy, nonatomic) id /* block */ regenerateSuccessBlock;
@property (copy, nonatomic) id /* block */ startNewLoopBlock;

- (void)fillBufferQueueIfNeed;
- (BOOL)createNewReaderForLoop;
- (id)_createReaderOutputWithAsset:(id)a0 compatibility:(unsigned long long)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 compatibility:(unsigned long long)a1 enableReportReadingError:(BOOL)a2 error:(id *)a3 fixColorOffset:(BOOL)a4;
- (void)drainSampleBufferQueue;
- (id)copyNextFrame;
- (BOOL)hasNextSampleBuffer;
- (id)assetReaderError;
- (BOOL)regenerateReaderOutputWithDuration:(double)a0;
- (void)disableLoop;
- (void).cxx_destruct;
- (void)seekToTime:(double)a0;
- (void)dealloc;
- (void)enableLoop;

@end
