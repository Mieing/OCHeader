@interface AWECloudControlSyncManager : NSObject

+ (void)subscribeSettingsPush;
+ (int)byteSyncBusinessID;
+ (BOOL)isDisableByteSyncPushSettings;
+ (void)setup;

@end
