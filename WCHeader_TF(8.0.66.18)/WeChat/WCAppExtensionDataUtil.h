@interface WCAppExtensionDataUtil : NSObject

+ (void)setLocale:(id)a0;
+ (void)setBrandType:(unsigned int)a0;
+ (id)getLocalizationDirectoryPath;
+ (void)setDomainDict:(id)a0;
+ (id)domainDictPath;
+ (void)WCNotificationArrivalReport_saveResultInfo:(id)a0;
+ (id)WCNotificationArrivalReport_resultInfoArray;
+ (void)WCNotificationArrivalReport_clearAllResultInfo;
+ (id)appGroupID;
+ (id)userDefaults;
+ (BOOL)syncUserDefaults;
+ (id)containerURL;

@end
