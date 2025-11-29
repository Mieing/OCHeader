@interface LynxSettingsConfig : NSObject

+ (id)deviceModelString;
+ (BOOL)enabled;
+ (id)settingsURL;
+ (void)fetchSettings:(id /* block */)a0;
+ (BOOL)isNewUser;

@end
