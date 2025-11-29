@class NSString, NSDictionary;

@interface BDPLogTraceEvent : NSObject

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *stepName;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *platform;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSString *anchorId;
@property (retain, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *mpId;
@property (copy, nonatomic) NSString *mpName;
@property (copy, nonatomic) NSString *mpVersion;
@property (copy, nonatomic) NSString *jsLibVersion;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSDictionary *index;
@property (retain, nonatomic) NSDictionary *category;
@property (retain, nonatomic) NSDictionary *metric;
@property (retain, nonatomic) NSDictionary *extra;

- (id)finalIndexParams;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;

@end
