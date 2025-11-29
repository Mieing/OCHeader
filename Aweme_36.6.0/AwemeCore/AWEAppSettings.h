@interface AWEAppSettings : NSObject

+ (void)fetchSettings;
+ (id)bytedSettings;
+ (id)awemeSettings;
+ (void)fetchSettingsWithHeaders:(id)a0;
+ (void)fetchBytedSettingsWithHeaders:(id)a0;
+ (id)platformSettings;
+ (void)fetchShareSettings;
+ (void)fetchBytedSettings;
+ (id)localSettings;

@end
