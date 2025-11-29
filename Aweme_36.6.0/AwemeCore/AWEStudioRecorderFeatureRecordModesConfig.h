@class NSArray, NSNumber;
@protocol AWEStudioFeatureFrameRatioItemProtocol;

@interface AWEStudioRecorderFeatureRecordModesConfig : AWEStudioComposerBaseFeatureConfig

@property (retain, nonatomic) id<AWEStudioFeatureFrameRatioItemProtocol> ratioStatusItem;
@property (nonatomic) BOOL shouldUseCustomRecordConfig;
@property (nonatomic) BOOL disableSwipeGesture;
@property (retain, nonatomic) NSArray *modeArray;
@property (retain, nonatomic) NSNumber *landingModeID;
@property (retain, nonatomic) NSArray *showFrameCornerModes;
@property (nonatomic) BOOL disableSorting;
@property (retain, nonatomic) NSNumber *disablePhotoPressTapToVideo;
@property (copy, nonatomic) NSNumber *forceSupportMicrophoneItem;
@property (copy, nonatomic) NSNumber *forceShowMicrophoneItemWhenPermissionIsDenied;
@property (copy, nonatomic) id /* block */ captureTipForMode;

- (void).cxx_destruct;

@end
