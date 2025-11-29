@class NSString;

@interface SafeDeviceData : NSCoder <PBCoding>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *deviceType;
@property (nonatomic) unsigned int lastTime;
@property (nonatomic) BOOL online;
@property (readonly, nonatomic) BOOL isCurrentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_uuid;
+ (void)PBArrayAdd_deviceType;
+ (void)PBArrayAdd_lastTime;
+ (void)PBArrayAdd_online;
+ (void)initialize;
+ (void)DelSafeDevice:(id)a0;
+ (void)UpdateSafeDevice:(id)a0 withName:(id)a1;
+ (void)SetSafeDeviceList:(id)a0;

@end
