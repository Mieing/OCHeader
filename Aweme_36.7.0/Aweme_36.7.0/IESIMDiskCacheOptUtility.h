@class IESIMDiskSpaceStatus, IESIMDiskOptConfig;

@interface IESIMDiskCacheOptUtility : NSObject

@property (readonly, nonatomic) IESIMDiskOptConfig *config;
@property (retain) IESIMDiskSpaceStatus *diskStatus;
@property BOOL isCalculating;
@property (nonatomic) BOOL didReceiveFirstBecomeActive;

+ (id)imageCacheConfig;
+ (void)regularCalculateDiskSpaceIfNeeded;
+ (void)cleanAnimateEmojiResourceIfNeeded;
+ (id)p_config;
+ (void)calculateDiskSpaceIfNeeded;
+ (long long)currentDiskUserType;
+ (id)settingValueForKey:(id)a0;
+ (id)attachmentCleanConfig;
+ (id)avatarCacheConfig;
+ (BOOL)enable;
+ (id)sharedInstance;

- (void)didReceiveAWECleanCacheNotification;
- (void)didReceiveAppBecomeActiveNotification;
- (void).cxx_destruct;
- (id)init;

@end
