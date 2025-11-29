@interface WCSiriDataUtil : MMObject

+ (id)userDefaults;
+ (id)appGroupID;
+ (id)containerURL;
+ (void)saveUsername:(id)a0;
+ (void)saveCryptUin:(unsigned long long)a0;
+ (void)saveAppVersion:(unsigned int)a0;
+ (void)saveDeviceID:(id)a0;
+ (void)saveDeviceType:(id)a0;
+ (void)saveHeadDeviceType:(unsigned short)a0;
+ (void)saveExtensionServerID:(id)a0;
+ (void)saveExtensionKey:(id)a0;
+ (void)saveShortHost:(id)a0;
+ (BOOL)syncUserDefaults;
+ (BOOL)clearAllValues;
+ (id)contactsFilePath;
+ (id)reportFolderPath;
+ (id)reportFilePath;
+ (id)avatarFolderPath;
+ (id)logFolderPath;

@end
