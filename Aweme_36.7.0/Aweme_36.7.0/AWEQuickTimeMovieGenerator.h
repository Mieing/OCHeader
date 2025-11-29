@class NSString, AVAssetReader, NSURL, AVURLAsset, AVAssetWriter, AVAssetReaderTrackOutput, NSObject, AVAssetWriterInput;
@protocol OS_dispatch_queue;

@interface AWEQuickTimeMovieGenerator : NSObject {
    NSString *kKeyContentIdentifier;
    NSString *kKeyStillImageTime;
    NSString *kKeySpaceQuickTimeMetadata;
}

@property (copy, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) AVURLAsset *asset;
@property (copy, nonatomic) NSString *mediaInputPath;
@property (nonatomic) double duration;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } dummyTimeRange;
@property (nonatomic) double progress;
@property (retain, nonatomic) AVAssetReader *reader;
@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) AVAssetWriterInput *videoInput;
@property (retain, nonatomic) AVAssetWriterInput *audioInput;
@property (retain, nonatomic) AVAssetReaderTrackOutput *videoOutput;
@property (retain, nonatomic) AVAssetReaderTrackOutput *audioOutput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *inputQueue;
@property (copy, nonatomic) id /* block */ withProgressBlock;

- (void)generateMovieInDestination:(id)a0 withAssetIdentifier:(id)a1 withProgress:(id /* block */)a2;
- (id)metadataForAssetIdentifier:(id)a0;
- (id)trackWithMediaType:(id)a0;
- (id)videoSettingsWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)metadataAdapter;
- (id)metadataForStillImageTime;
- (BOOL)encodeReadySamplesFromOutput:(id)a0 toInput:(id)a1;
- (void)complete;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)audioSettings;
- (void)finish;

@end
