@class NSNumber;
@protocol AWEStudioFeatureFrameRatioItemProtocol, AWEStudioFeatureCameraPositionItemProtocol;

@interface AWEStudioRecorderFeatureCaptureConfig : AWEStudioComposerBaseFeatureConfig

@property (retain, nonatomic) id<AWEStudioFeatureFrameRatioItemProtocol> ratioStatusItem;
@property (copy, nonatomic) NSNumber *previewModeType;
@property (retain, nonatomic) NSNumber *disableSyncRatioAutomatically;
@property (nonatomic) double frontCameraZoomFactor;
@property (nonatomic) double rearCameraZoomFactor;
@property (retain, nonatomic) id<AWEStudioFeatureCameraPositionItemProtocol> cameraPositionStatusItem;
@property (nonatomic) BOOL disableAutoSwitchToFrontCameraWhenApplyProp;
@property (retain, nonatomic) NSNumber *viewfinderCornerRadius;
@property (copy, nonatomic) id /* block */ previewCornerRadiusForRecordMode;
@property (copy, nonatomic) id /* block */ preloadCameraPreviewFrameForRecordMode;
@property (nonatomic) void *mainSessionCameraContext;
@property (nonatomic) BOOL usePreviousCamera;
@property (copy, nonatomic) NSNumber *customMaxRecordDuration;
@property (nonatomic) BOOL showsCameraSwapBarItem;
@property (copy, nonatomic) id /* block */ zoomButtonBottomOffsetToPreviewForMode;
@property (copy, nonatomic) id /* block */ zoomButtonBottomOffsetToSubmodeForMode;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
