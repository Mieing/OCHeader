@class DeviceCamera;

@interface DeviceVideoParam : WXPBGeneratedMessage

@property (nonatomic) unsigned int cameraNum;
@property (retain, nonatomic) DeviceCamera *frontCamera;
@property (retain, nonatomic) DeviceCamera *backCamera;
@property (nonatomic) unsigned int focusType;
@property (nonatomic) unsigned int fpsMin;
@property (nonatomic) unsigned int fpsMax;
@property (nonatomic) unsigned int supportHwenc;

+ (void)initialize;

@end
