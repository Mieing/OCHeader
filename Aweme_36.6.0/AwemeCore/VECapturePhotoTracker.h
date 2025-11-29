@class NSString, NSDictionary;

@interface VECapturePhotoTracker : NSObject

@property (nonatomic) long long captureMode;
@property (nonatomic) BOOL enableEffect;
@property (nonatomic) long long flashMode;
@property (nonatomic) struct CGSize { double width; double height; } cameraPhotoSize;
@property (nonatomic) struct CGSize { double width; double height; } photoSize;
@property (nonatomic) float iso;
@property (nonatomic) long long exposureDuration;
@property (nonatomic) long long previewAvgExposureDuration;
@property (nonatomic) BOOL isAdjustingFocus;
@property (nonatomic) BOOL isAdjustingExposure;
@property (nonatomic) BOOL isAdjustingWhiteBalance;
@property (nonatomic) double captureStart;
@property (nonatomic) double captureEnd;
@property (nonatomic) double processStart;
@property (nonatomic) double processEnd;
@property (nonatomic) double totalStart;
@property (nonatomic) double totalEnd;
@property (nonatomic) long long photoQualityMode;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL flashEnabled;
@property (nonatomic) BOOL redEyeReductionEnabled;
@property (nonatomic) BOOL stillImageStabilizationEnabled;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } photoProcessingTimeRange;
@property (nonatomic) BOOL virtualDeviceFusionEnabled;
@property (nonatomic) BOOL dualCameraFusionEnabled;
@property (nonatomic) BOOL contentAwareDistortionCorrectionEnabled;
@property (nonatomic) NSString *sourceDeviceType;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSDictionary *metaData;
@property (readonly, nonatomic) unsigned long long captureCost;
@property (readonly, nonatomic) unsigned long long processCost;
@property (readonly, nonatomic) unsigned long long totalCost;

- (void).cxx_destruct;
- (id)convertToDictionary;

@end
