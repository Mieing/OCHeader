@class NSString;

@interface AWEPluginDeviceOrientationCustomImpl : NSObject <BDPDeviceOrientationPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (unsigned long long)bdp_supportOrientation;
- (void)bdp_setSupportOrientation:(unsigned long long)a0;
- (unsigned long long)bdp_supportOrientationsForWindow:(id)a0;

@end
