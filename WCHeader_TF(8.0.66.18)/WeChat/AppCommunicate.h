@interface AppCommunicate : NSObject

+ (id)getDataPasteboardName;
+ (id)getDataPasteboard;
+ (id)propertyListForAllApp:(unsigned long long *)a0 orginTextLenPtr:(unsigned long long *)a1;
+ (id)propertyListForAppID:(id)a0 dataLenPtr:(unsigned long long *)a1 orginTextLenPtr:(unsigned long long *)a2;
+ (BOOL)setPropertyList:(id)a0 forAppID:(id)a1 dataLenPtr:(unsigned long long *)a2 orginTextLenPtr:(unsigned long long *)a3 canReadPasteBoard:(BOOL)a4;
+ (BOOL)setAppCommunicateData:(id)a0 forAppID:(id)a1;
+ (id)appCommunicateDataForAppID:(id)a0;
+ (id)processPropertyList:(id)a0;
+ (id)appCommunicateDataForString:(id)a0;
+ (id)appCommunicateDataForDic:(id)a0;

@end
