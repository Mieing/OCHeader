@interface ITMDeviceThreshold : NSObject

@property (nonatomic) float memory;
@property (nonatomic) float temp;
@property (nonatomic) float battery;
@property (nonatomic) float cpuUsage;
@property (nonatomic) float cpuProcessUsage;
@property (nonatomic) float memoryUsage;

- (struct shared_ptr<ILASDK::DeviceInfo> { struct DeviceInfo *x0; struct __shared_weak_count *x1; })deviceInfoCPP;

@end
