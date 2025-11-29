@class AVAssetReaderVideoCompositionOutput, NSURL, AVAssetWriterInput, NSDictionary, AVAssetReaderOutput, AVAssetWriter, NSObject, AVAsset, AVMutableVideoComposition, AVVideoComposition, NSString, AVAssetWriterInputPixelBufferAdaptor, AVVideoCompositionCoreAnimationTool, NSError, AVAssetReader;
@protocol OS_dispatch_queue;

@interface SightAssetExportSession : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (retain, nonatomic) AVAssetReader *reader;
@property (retain, nonatomic) AVAssetReaderVideoCompositionOutput *videoOutput;
@property (retain, nonatomic) AVAssetReaderOutput *audioOutput;
@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) AVAssetWriterInput *videoInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *videoPixelBufferAdaptor;
@property (retain, nonatomic) AVAssetWriterInput *audioInput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic) double videoDuration;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTimeStamp;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTimeStamp;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } adjustTimeRange;
@property (nonatomic) BOOL hasBegan;
@property (nonatomic) BOOL hasAppSuspend;
@property (nonatomic) BOOL failAtVideoTrack;
@property (nonatomic) BOOL failAtAudioTrack;
@property (retain, nonatomic) NSDictionary *inputVideoSettings;
@property (retain, nonatomic) NSDictionary *videoSettings;
@property (retain, nonatomic) NSDictionary *audioSettings;
@property (nonatomic) float frameRate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropFrame;
@property (retain, nonatomic) NSString *outputFileType;
@property (retain, nonatomic) NSURL *outputURL;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) float scaleFactor;
@property (nonatomic) int adaptiveBitrateUp;
@property (nonatomic) int adaptiveBitrateDown;
@property (nonatomic) int resolutionAdjust;
@property (retain, nonatomic) NSDictionary *extraVideoInfo;
@property (retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;
@property (retain, nonatomic) AVMutableVideoComposition *dynamicVideoComposition;
@property (copy, nonatomic) id /* block */ videoProgressHandler;
@property (copy, nonatomic) id /* block */ audioProgressHandler;

- (id)initWithAsset:(id)a0;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)stopExport;
- (BOOL)encodeSamplesFromReaderOutput:(id)a0 toWriterInput:(id)a1;
- (void)cancel;
- (void)finish;
- (void)complete;
- (void)failWithErrorText:(id)a0;
- (void)failWithError:(id)a0;
- (id)processAudioTracks:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)onAppWillSuspend:(id)a0;
- (void).cxx_destruct;

@end
