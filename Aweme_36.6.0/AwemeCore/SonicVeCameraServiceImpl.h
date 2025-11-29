@class NSString;

@interface SonicVeCameraServiceImpl : NSObject <BDPSonicAppServiceMessage, SonicVeCameraService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)setupCustomRegisterService:(id)a0 uniqueID:(id)a1;

- (id)getSonicVeCameraWithPageID:(int)a0 callback:(id)a1;

@end
