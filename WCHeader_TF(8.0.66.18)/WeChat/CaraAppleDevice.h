@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface CaraAppleDevice : NSObject <CaraNativeDeviceBase>

@property long long batteryState;
@property float batteryLevel;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *batteryTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (float)battery;
- (BOOL)isCharging;
- (int)networkType;
- (int)brand;
- (id)screenSize;
- (BOOL)isReachable;
- (void).cxx_destruct;

@end
