@class NSString;

@interface AWEDYVersionManagerModuleService : HTSService <AWEVersionManagerModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkAppNewVersion;
+ (BOOL)canAccessOuterTest;
+ (void)jumpToOuterTest;
+ (BOOL)shouldShowOuterTestYellowDot;
+ (void)clearCurrentRemind;
+ (BOOL)isFirstLaunchAfterUpdating;
+ (BOOL)isNewVersionAlertShowing;
+ (BOOL)isChannelTF;
+ (unsigned long long)coldLaunchTimes;
+ (double)appInstallTimestamp;
+ (BOOL)isChannelTest;
+ (BOOL)isChannelPP;
+ (BOOL)isChannelTestFlightOrAppStore;


@end
