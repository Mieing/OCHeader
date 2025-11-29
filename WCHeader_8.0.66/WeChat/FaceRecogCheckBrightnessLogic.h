@class CameraReflectDevice, NSString;
@protocol FaceRecogCheckBrightnessLogicDelegate;

@interface FaceRecogCheckBrightnessLogic : NSObject <CameraVideoDeviceDelegate>

@property (retain, nonatomic) CameraReflectDevice *lightDetector;
@property (weak, nonatomic) id<FaceRecogCheckBrightnessLogicDelegate> delegate;
@property (nonatomic) float lightThreshold;
@property (nonatomic) BOOL hasCheckBrightness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
