@interface AWESettingPreUploadManager : NSObject

+ (long long)isPreUploadSettingEnabled;
+ (void)fetchSettingsWithContext:(id)a0;
+ (void)updateSettingPreUploadStatus:(BOOL)a0 completion:(id /* block */)a1;
+ (void)saveWithEnablePreUpload:(long long)a0;

@end
