@class NSString;

@interface AWEBackgroundLaunchConfig : NSObject <AWEBackgroundLaunchConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundLaunchSilentPushConfig;
+ (id)backgroundLaunchCloudkitConfig;
+ (id)backgroundLaunchBGDownloadConfig;
+ (id)backgroundLaunchBGFetchConfig;
+ (id)backgroundLaunchLocalPushConfig;
+ (id)backgroundLaunchConfig;
+ (long long)backgroundLaunchEnableVersion;
+ (id)bgfetchRequestWhiteList;
+ (BOOL)enableFilterLog;
+ (BOOL)interceptNetworkRequests;
+ (BOOL)enableTrackerReport;
+ (id)launchTaskToFirstFgList;
+ (BOOL)disableChangeLaunchType;


@end
