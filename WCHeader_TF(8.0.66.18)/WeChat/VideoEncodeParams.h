@class NSDictionary, WCColorProperties, AVVideoCompositionCoreAnimationTool;

@interface VideoEncodeParams : NSObject

@property (retain, nonatomic) WCColorProperties *originVideoColorPropertiesObj;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) double fps;
@property (nonatomic) float videoBitrate;
@property (nonatomic) float frameInterval;
@property (nonatomic) float audioBitrate;
@property (nonatomic) float audioSampleRate;
@property (nonatomic) int audioChannel;
@property (nonatomic) BOOL videoOnly;
@property (nonatomic) BOOL isEnableHardHEVCEncode;
@property (nonatomic) int adaptiveBitrateUp;
@property (nonatomic) int adaptiveBirateDown;
@property (nonatomic) int resolutionAdjust;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropFrame;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) float scaleFactor;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;
@property (nonatomic) BOOL isUseFFmpegHevcEncoding;
@property (copy, nonatomic) NSDictionary *colorProperties;
@property (copy, nonatomic) NSDictionary *originVideoColorProperties;
@property (copy, nonatomic) NSDictionary *colorRange;
@property (nonatomic) BOOL useAssetDurationForCompose;
@property (nonatomic) BOOL useHDRToSDR;
@property (nonatomic) BOOL HDRSwitch;
@property (nonatomic) BOOL originVideoIsHDR;
@property (nonatomic) int originalVideoHDRFormat;
@property (nonatomic) BOOL skipVideoCompress;
@property (nonatomic) int vcodec2Preset;
@property (nonatomic) float crf;
@property (nonatomic) int vbvBufferSize;
@property (nonatomic) int selectedKbpsLevel;
@property (nonatomic) BOOL fixesTransform;
@property (nonatomic) int enhancementMode;

- (void)adjustIfNeeded;
- (void)_adjustSizeToStandardForMoments;
- (double)_adjustedStandardLengthFromLength:(double)a0;
- (id)init;
- (void)dealloc;
- (void)guaranteeReleaseAnimationToolOnMainThread;
- (id)description;
- (id)colorPropertyDict;
- (id)colorPrimaries;
- (id)transferFunction;
- (id)YCbCrMatrix;
- (void)resetColorPropertiesToITUR709;
- (BOOL)shouldExportWithHDR;
- (void).cxx_destruct;

@end
