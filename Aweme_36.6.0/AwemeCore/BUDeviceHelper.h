@interface BUDeviceHelper : NSObject

+ (id)bu_uuid;
+ (id)bu_device_state;
+ (id)getDevInfoByName:(char *)a0;
+ (id)freeDiskSpace;
+ (float)bu_OSVersionNumber;
+ (BOOL)is_screen_off;
+ (float)battery_remaining_pct;
+ (id)bu_buildVersionNumber;
+ (id)bu_platformString;
+ (id)bu_idfvString;
+ (long long)usedAPPMemory;
+ (long long)totolDeviceMemory;
+ (BOOL)lowEndMode;
+ (id)bu_platformTypeString;
+ (BOOL)bu_isJailBroken;
+ (id)model;
+ (id)systemVersion;
+ (id)platform;
+ (long long)batteryState;
+ (id)currentLanguage;
+ (unsigned long long)trackingAuthorizationStatus;
+ (id)runningProcesses;

@end
