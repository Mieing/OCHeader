@interface BDPBindingWifiModule : NSObject

+ (id)methodLookup;
+ (void)bootstrapLaunch;

- (id)getConnectedWifi;

@end
