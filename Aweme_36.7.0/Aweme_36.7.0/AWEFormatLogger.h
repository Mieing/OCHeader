@interface AWEFormatLogger : NSObject

+ (void)logWithInstanceName:(id)a0 level:(long long)a1 moduleName:(id)a2 subModuleName:(id)a3 where:(id)a4 what:(id)a5 extra:(id)a6;
+ (void)logWithLevel:(long long)a0 moduleName:(id)a1 subModuleName:(id)a2 where:(id)a3 what:(id)a4 extra:(id)a5;
+ (void)logWithInstanceName:(id)a0 level:(long long)a1 moduleName:(id)a2 subModuleName:(id)a3 linkIDs:(id)a4 eventType:(id)a5 where:(id)a6 what:(id)a7 who:(id)a8 extra:(id)a9;
+ (void)logWithLevel:(long long)a0 moduleName:(id)a1 subModuleName:(id)a2 linkIDs:(id)a3 eventType:(id)a4 where:(id)a5 what:(id)a6 who:(id)a7 extra:(id)a8;
+ (id)formatMessageWithLinkIDs:(id)a0 eventType:(id)a1 where:(id)a2 what:(id)a3 who:(id)a4 extra:(id)a5;
+ (void)logWithInstanceName:(id)a0 level:(long long)a1 moduleName:(id)a2 subModuleName:(id)a3 message:(id)a4;
+ (id)jsonStringFromValidDictionary:(id)a0;
+ (id)convertToJSONCompatible:(id)a0;
+ (id)jsonStringFromDictionary:(id)a0;

@end
