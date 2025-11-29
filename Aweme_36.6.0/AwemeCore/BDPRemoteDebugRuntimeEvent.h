@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDPRemoteDebugRuntimeEvent : NSObject

@property (copy, nonatomic) NSString *target;
@property (copy, nonatomic) NSString *cursor;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *handlerName;
@property (retain, nonatomic) NSNumber *syncCallbackId;
@property (copy, nonatomic) NSString *script;
@property (copy, nonatomic) NSArray *args;
@property (retain, nonatomic) NSNumber *cdpID;
@property (copy, nonatomic) NSDictionary *result;
@property (copy, nonatomic) NSDictionary *panelParams;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *projectType;
@property (copy, nonatomic) NSString *CDPCommand;
@property (copy, nonatomic) NSString *renderType;
@property (copy, nonatomic) NSString *system;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *brand;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *nativeSDKVersion;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *wkGameWebviewIdentifier;
@property (copy, nonatomic) NSString *caseId;
@property (copy, nonatomic) NSString *caseName;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *libVersion;
@property (copy, nonatomic) NSString *devtoolsVersion;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *pageQuery;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSDictionary *entry;
@property (nonatomic) long long maxWaitTime;
@property (copy, nonatomic) NSArray *cleanCacheTypes;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy, nonatomic) NSString *pureReplayMessage;
@property (readonly, copy, nonatomic) NSString *JSONString;
@property (copy, nonatomic) NSString *htmlContent;
@property (retain, nonatomic) NSNumber *pageID;

+ (id)convertMessageToCDP:(id)a0;
+ (id)convertObjectToString:(id)a0;
+ (id)convertCDPToMessage:(id)a0 withUniqueTimeID:(id)a1;
+ (id)convertDomToMessage:(id)a0 withUniqueTimeID:(id)a1;
+ (id)convertJSValueToObject:(id)a0 error:(BOOL *)a1;
+ (id)JSONValueWithObject:(id)a0;
+ (BOOL)isValidJSONObject:(id)a0;

- (id)parseWithJSONString:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONString:(id)a0;

@end
