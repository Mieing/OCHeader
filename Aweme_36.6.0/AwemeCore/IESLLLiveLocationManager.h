@interface IESLLLiveLocationManager : NSObject

+ (void)requestLocationPermission;
+ (void)permissionChange:(BOOL)a0;
+ (void)openApplicationSettings;
+ (void)setup;
+ (void)setupIfNeeded;

@end
