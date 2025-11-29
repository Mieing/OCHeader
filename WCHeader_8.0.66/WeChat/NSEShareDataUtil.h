@interface NSEShareDataUtil : NSObject

+ (id)appGroupID;
+ (id)containerURL;
+ (id)userDefaults;
+ (void)saveCurrentSpeechConfigId:(id)a0;
+ (void)saveCurrentUsername:(id)a0;
+ (id)getObjectForKey:(id)a0;
+ (id)getNSEAppGroupRootDir;
+ (id)getPathOfSpeechPosDir;
+ (BOOL)syncUserDefaultData;
+ (id)libaryPath;
+ (id)getPathOfSoundsLibary;
+ (void)saveCurrentSpeechConfig:(id)a0;
+ (void)clearSynthesizeSoundData;
+ (id)documentPath;
+ (id)logFolderPath;
+ (id)logFilePath;
+ (id)getPathOfIDKeyReportDataDir;
+ (id)getAllExtIdKeyReportFiles;
+ (void)handleShareExtIdKeyReportAfterAppActive;
+ (void)clearAllExtIdKeyReportFiles;
+ (id)getCurrentConfig;

@end
