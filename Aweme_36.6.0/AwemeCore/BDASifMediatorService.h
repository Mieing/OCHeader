@interface BDASifMediatorService : NSObject

+ (BOOL)trackAdEvent:(id)a0 tag:(id)a1 extra:(id)a2 adExtra:(id)a3;
+ (id)idfa;
+ (id)versionName;
+ (BOOL)monitorService:(id)a0 value:(id)a1 category:(id)a2 extra:(id)a3;
+ (id)connectMethodName;
+ (id)appProjName;
+ (BOOL)trackAlog:(id)a0;
+ (id)requestForJSONWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 callback:(id /* block */)a5;
+ (BOOL)performanceEvent:(id)a0 params:(id)a1;
+ (BOOL)trackURLs:(id)a0 label:(id)a1 cid:(id)a2 extraData:(id)a3 logExtra:(id)a4;
+ (BOOL)trackTeaAndSlardarEvent:(id)a0 value:(id)a1 category:(id)a2 extra:(id)a3;
+ (id)userID;
+ (id)appID;
+ (id)appName;
+ (id)deviceType;
+ (id)deviceID;
+ (id)sharedInstance;
+ (id)installID;
+ (id)sdkVersion;

@end
