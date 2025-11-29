@interface AppCommunicate : NSObject

+ (id)getDataPasteboard;
+ (id)propertyListForAllApp;
+ (BOOL)setPropertyList:(id)a0 forAppID:(id)a1 canReadPasteBoard:(BOOL)a2;
+ (id)propertyListForAppID:(id)a0;
+ (id)appCommunicateDataForDic:(id)a0;
+ (id)getDataPasteboardName;
+ (BOOL)setAppCommunicateData:(id)a0 forAppID:(id)a1 canReadPasteBoard:(BOOL)a2;
+ (id)appCommunicateDataForAppID:(id)a0;
+ (id)appCommunicateDataForString:(id)a0;

@end
