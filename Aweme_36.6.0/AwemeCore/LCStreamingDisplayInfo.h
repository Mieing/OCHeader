@class NSString;

@interface LCStreamingDisplayInfo : NSObject

@property (nonatomic) long long audioCaptureType;
@property (nonatomic) BOOL videoMixOnClient;
@property (nonatomic) long long videobps;
@property (nonatomic) long long videofps;
@property (copy, nonatomic) NSString *streamingProtocol;
@property (copy, nonatomic) NSString *streamingName;
@property (copy, nonatomic) NSString *streamingEncodeQuality;
@property (nonatomic) long long networkQuality;
@property (nonatomic) long long audiobps;
@property (copy, nonatomic) NSString *audioEncode;
@property (nonatomic) long long audioStreamingSample;
@property (nonatomic) long long audioStreamingChannel;
@property (nonatomic) BOOL denoiseEnable;
@property (nonatomic) BOOL aecEnable;
@property (nonatomic) BOOL agcEnable;
@property (nonatomic) BOOL earMonitorEnable;
@property (copy, nonatomic) NSString *videoCaptureImageResolution;
@property (copy, nonatomic) NSString *previewImageResolution;
@property (copy, nonatomic) NSString *videoStreamingImageResolution;
@property (copy, nonatomic) NSString *rtcDownVideoFrameImageReolution;

+ (void)setisStreamingDisplayInfoEnable:(BOOL)a0;
+ (BOOL)isStreamingDisplayInfoEnable;
+ (id)showStreamingDisplayInfo;
+ (id)showInteractDisplayInfo;
+ (void)updateBoolStatusFromInputDict:(id)a0;
+ (void)updateImageResolutionFromVideoGraph:(id)a0;
+ (void)updateStreamingDisplayInfo:(id)a0;
+ (void)updateInteractDisplayInfo:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
