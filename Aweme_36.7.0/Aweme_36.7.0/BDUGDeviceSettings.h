@interface BDUGDeviceSettings : NSObject

+ (id)schemeList;
+ (BOOL)useAppLocalSchemeList;
+ (BOOL)isEnableLaunchingReport;
+ (BOOL)useDateDayCompare;
+ (double)lastTimeInterval;
+ (id)settingsData;

@end
