@class NSURL, NSString;

@interface SWTranscoding : NSObject {
    struct VideoTranscoding { struct TranscodingPrams { int outWidth; int outHeight; int outVideoBitrate; float outFrameRate; int outAudioBitrate; int outAudioSampling; int audiochannels; int cropLeft; int cropTop; int cropWidth; int cropHeight; int startTime; int endTime; int adaptiveBRUp; int adaptiveBRDown; BOOL useAudioSkipResamplingMode; int vcodec2Preset; int vbvBufferSize; float crf; int intraPeriod; } mTransParams; struct ReportStaticPrams { int errorCode; double decodeTime; double scaleTime; double encodeTime; double DSETime; double remuxTime; int videoFrames; int audioFrames; int newVideoFrames; BOOL skipAudioEncoding; int videoCodecID; int audioCodecID; double outVideoBitrate; } mStaticPrams; struct EncDecPrams { double duration; double startTime; double rate; double originalFrameRate; int frameDropInterval; int rotate; int outVideoBitrate; int decodeWidth; int decodeHeight; int cropLeft; int cropTop; int cropWidth; int cropHeight; double nowPts; double frameTimeInterval; BOOL skipAudioEncoding; struct WXAVRational { int num; int den; } audioTb; struct WXAVRational { int num; int den; } videoTb; double beginPtsVideo; double endPtsVideo; double beginPtsAudio; double endPtsAudio; BOOL useTimeCrop; BOOL useResCrop; } mEncDecPrams; struct VideoTranscodingImpl *mVideoranscodingImpl; } mVideoTranscoding;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSURL *inputURL;
@property (retain, nonatomic) NSURL *outputURL;
@property (nonatomic) int outWidth;
@property (nonatomic) int outHeight;
@property (nonatomic) float frameRate;
@property (nonatomic) int videoBitrate;
@property (nonatomic) int audioBitrate;
@property (nonatomic) int audioSampleRate;
@property (nonatomic) int audioChannel;
@property (readonly, nonatomic) int errorCode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropSize;
@property (retain, nonatomic) NSString *outputFileType;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) float scaleFactor;
@property (nonatomic) BOOL useNewScale;
@property (nonatomic) int adaptiveBitrateUp;
@property (nonatomic) int adaptiveBitrateDown;
@property (nonatomic) int resolutionAdjust;
@property (nonatomic) BOOL skipAudioResampling;
@property (nonatomic) int scene;
@property (nonatomic) BOOL useSoftwareDecode;
@property (nonatomic) int vcodec2Preset;
@property (nonatomic) float crf;
@property (nonatomic) int vbvBufferSize;
@property (nonatomic) int intraPeriod;
@property (copy, nonatomic) id /* block */ videoProgressHandler;

- (id)initWithURL:(id)a0 outputFile:(id)a1;
- (void)setTranscodingParams:(id)a0 Scene:(int)a1;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)stopEncoding;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
