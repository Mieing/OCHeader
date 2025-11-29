@interface AWENewVersionAlertUtils : NSObject

+ (id)mainStorage;
+ (BOOL)isFirstLaunchAfterUpdating;
+ (BOOL)isChannelTF;
+ (unsigned long long)coldLaunchTimes;
+ (double)appInstallTimestamp;
+ (BOOL)isChannelTest;
+ (BOOL)isChannelPP;
+ (BOOL)isChannelTestFlightOrAppStore;
+ (void)recordDidFinishLaunch;
+ (BOOL)isChannelTestFlight;
+ (BOOL)isChannelTFOnline;
+ (BOOL)isChannelAppStore;
+ (double)appRequestNewVerisonTimeStamp;
+ (void)recordRequestNewVersionTimestamp;
+ (void)doNotRemindNewVersionUntilUpgrade;
+ (BOOL)appShouldRemindNewVersion;

@end
