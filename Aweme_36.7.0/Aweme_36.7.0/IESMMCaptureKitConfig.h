@class NSString, NSArray;

@interface IESMMCaptureKitConfig : NSObject

@property (retain, nonatomic) NSString *sessionPreset;
@property (nonatomic) BOOL enableDolbyVision;
@property (nonatomic) long long dolbyVisionCameraPreferResolution;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL customSwitchAnimation;
@property (nonatomic) unsigned long long pixelFormatType;
@property (nonatomic) unsigned long long minFrameRate;
@property (nonatomic) unsigned long long maxFrameRate;
@property (nonatomic) long long cameraOutputHighFrameRate;
@property (nonatomic) BOOL highFramerateEnable;
@property (nonatomic) struct CGPoint { double x; double y; } focusPointOfInterest;
@property (nonatomic) double preferredFrontZoomFactor;
@property (nonatomic) double preferredBackZoomFactor;
@property (nonatomic) double frontZoomFactor;
@property (nonatomic) double backZoomFactor;
@property (nonatomic) double maxZoomFactor;
@property (nonatomic) struct CGPoint { double x; double y; } exposurePointOfInterest;
@property (nonatomic) long long focusMode;
@property (nonatomic) long long exposureMode;
@property (nonatomic) long long whiteBalanceMode;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL torch;
@property (nonatomic) long long flashMode;
@property (nonatomic) BOOL frontCameraMirror;
@property (nonatomic) long long frontPreferredStabilizationMode;
@property (nonatomic) long long rearPreferredStabilizationMode;
@property (copy, nonatomic) NSArray *preferredFrontCameraDeviceTypes;
@property (copy, nonatomic) NSArray *preferredRearCameraDeviceTypes;
@property (nonatomic) BOOL enableExposureOptimize;
@property (nonatomic) BOOL enableDarkLightOptimize;
@property (nonatomic) double exposureBias;
@property (nonatomic) BOOL enableFaceDetectCompletely;
@property (nonatomic) unsigned long long dropFrameCount;
@property (nonatomic) unsigned long long cameraDropFrameCount;
@property (nonatomic) BOOL isCaptureStopAsync;
@property (nonatomic) BOOL noDropFirstStartCaptureFrame;
@property (nonatomic) BOOL retryWhenStartRunningFailed;
@property (nonatomic) BOOL startRunningWhenRuntimeError;
@property (nonatomic) BOOL enablePhotoOutput;
@property (nonatomic) BOOL useAudioNewFormat;
@property (nonatomic) BOOL enableFaceAE;
@property (nonatomic) BOOL multitaskingCameraAccessEnabled;

- (id)initWithLively;
- (void).cxx_destruct;
- (id)init;

@end
