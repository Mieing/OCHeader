@class AWEStudioRecorderMiniFlowConfig, AWEStudioRecorderFeatureFilterConfig, AWEStudioRecorderFeatureCaptureConfig, NSNumber, AWEStudioRecorderFeatureRecordModesConfig, AWEStudioRecorderFeatureSpeedControlConfig, AWEStudioRecorderFeatureCountdownConfig, AWEStudioRecorderFeatureGestureConfig, AWEStudioRecorderFeatureBeautyConfig, AWEStudioRecorderFeatureHDPhotoConfig, AWEStudioComposerRecordLivePhotoFeature, AWEStudioRecorderFeaturePropConfig, AWEStudioRecorderFeatureToolBarConfig, AWEStudioRecorderFeatureTextModeConfig, AWEStudioRecorderFeatureAdvancedSettingsConfig, AWEStudioRecorderFeatureFlashConfig, AWEStudioRecorderFeatureLiveConfig, AWEStudioRecorderFeatureAlbumConfig, AWEStudioRecorderFeatureMusicConfig;

@interface AWEStudioComposerRecordPageConfig : AWEStudioComposerBasePageConfig

@property (nonatomic) BOOL forceCreateNewRecorder;
@property (retain, nonatomic) AWEStudioComposerRecordLivePhotoFeature *livePhotoConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureCaptureConfig *captureConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureGestureConfig *gestureConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureToolBarConfig *toolbarConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureSpeedControlConfig *speedControlConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureBeautyConfig *beautyConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureRecordModesConfig *recordModeConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureTextModeConfig *textModeConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureAdvancedSettingsConfig *advanceSettingsConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureFilterConfig *filterConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureLiveConfig *liveConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureAlbumConfig *albumConfig;
@property (retain, nonatomic) AWEStudioRecorderFeaturePropConfig *propConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureCountdownConfig *countdownConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureFlashConfig *flashConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureMusicConfig *musicConfig;
@property (retain, nonatomic) AWEStudioRecorderFeatureHDPhotoConfig *hdPhotoConfig;
@property (retain, nonatomic) AWEStudioRecorderMiniFlowConfig *miniFlowConfig;
@property (copy, nonatomic) NSNumber *animationDuration;
@property (copy, nonatomic) id /* block */ shouldFinishRecordComposerFlow;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
