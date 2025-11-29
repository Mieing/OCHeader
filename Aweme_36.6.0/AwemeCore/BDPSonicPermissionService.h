@class NSString, BDPUniqueID;

@interface BDPSonicPermissionService : NSObject <BDPSonicAppServiceMessage, SonicPermissionService>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)setupCustomRegisterService:(id)a0 uniqueID:(id)a1;

- (void)requestPermissions:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (BOOL)requestGranted:(unsigned long long)a0;
- (BOOL)isDevicesOccupied:(unsigned long long)a0 pageID:(int)a1;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
