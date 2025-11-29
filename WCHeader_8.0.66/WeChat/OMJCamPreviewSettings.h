@class OMJCaptureSession, OMJCamLyricsStyle;

@interface OMJCamPreviewSettings : NSObject

@property (readonly, nonatomic) unsigned long long dimensionLevel;
@property (nonatomic) BOOL shouldEnableImageSeqPrefetch;
@property (nonatomic) BOOL shouldUseEchoCancellation;
@property (retain, nonatomic) OMJCamLyricsStyle *defaultLyricsStyle;
@property (nonatomic) double aigcGeneratingTimeout;
@property (nonatomic) BOOL shouldUseAIGCBridgeService;
@property (retain, nonatomic) OMJCaptureSession *captureSession;
@property (nonatomic) float lensDirtyCheckThreshold;
@property (nonatomic) BOOL shouldEnableAsyncAIGC;
@property (nonatomic) BOOL shouldForceUseDimensionLevel;
@property (nonatomic) unsigned long long forceUsedDimensionLevel;
@property (nonatomic) BOOL shouldUseLongSide1920Policy;
@property (nonatomic) unsigned long long defaultAspectRatio;

- (id)initWithDimensionLevel:(unsigned long long)a0;
- (void).cxx_destruct;

@end
