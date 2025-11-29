@class NSString, NSArray, NSDictionary;

@interface LiveCameraConfig : NSObject

@property (retain, nonatomic) NSString *sessionPreset;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) unsigned int pixelFormatType;
@property (nonatomic) unsigned long long minFrameRate;
@property (nonatomic) unsigned long long maxFrameRate;
@property (nonatomic) BOOL noDropFirstStartCaptureFrame;
@property (nonatomic) long long dropFrameCount;
@property (nonatomic) BOOL enableFaceAE;
@property (nonatomic) BOOL enableExposureOptimize;
@property (nonatomic) BOOL enableDarkLightOptimize;
@property (nonatomic) BOOL frontCameraMirror;
@property (copy, nonatomic) NSArray *preferredFrontCameraDeviceTypes;
@property (copy, nonatomic) NSArray *preferredRearCameraDeviceTypes;
@property (retain, nonatomic) NSDictionary *extParams;

- (void).cxx_destruct;
- (id)init;

@end
