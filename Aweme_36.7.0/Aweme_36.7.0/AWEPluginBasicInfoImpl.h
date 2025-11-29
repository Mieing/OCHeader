@class NSString;

@interface AWEPluginBasicInfoImpl : NSObject <BDPBasicInfoPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (BOOL)isRV;
- (id)bdp_appId;
- (id)bdp_deviceIdWithAppID:(id)a0;
- (id)bdp_registerApplicationInfo;
- (id)bdp_installIdWithAppID:(id)a0;
- (BOOL)bdp_isAweType;
- (id)jumpScene;
- (id)appInfo;

@end
