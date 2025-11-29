@class NSString;

@interface WABluetoothMonitoredDevice : NSObject <PBCoding>

@property (copy, nonatomic) NSString *deviceUUID;
@property (copy, nonatomic) NSString *wechatToken;
@property (copy, nonatomic) NSString *envVersion;
@property (copy, nonatomic) NSString *entryPackage;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *extraData;
@property (nonatomic) double delayReconnectTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_deviceUUID;
+ (void)PBArrayAdd_wechatToken;
+ (void)PBArrayAdd_envVersion;
+ (void)PBArrayAdd_entryPackage;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_extraData;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
