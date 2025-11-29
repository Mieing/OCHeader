@class NSString, NSDictionary;

@interface CJStandardLogModel : NSObject

@property (nonatomic) long long logLevel;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSDictionary *custom;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;

+ (id)constructLogModelWithLogLevel:(long long)a0 msg:(id)a1 appId:(id)a2 merchantId:(id)a3;
+ (id)constructLogModelWithLogLevel:(long long)a0 msg:(id)a1 source:(id)a2 appId:(id)a3 merchantId:(id)a4;
+ (id)constructLogModelWithLogLevel:(long long)a0 msg:(id)a1 source:(id)a2 custom:(id)a3 appId:(id)a4 merchantId:(id)a5;
+ (id)constructLogModelWithLogLevel:(long long)a0 msg:(id)a1 source:(id)a2 custom:(id)a3 code:(id)a4 path:(id)a5 logId:(id)a6 appId:(id)a7 merchantId:(id)a8;
+ (id)constructLogModelWithLogLevel:(long long)a0 msg:(id)a1 source:(id)a2 code:(id)a3 path:(id)a4 logId:(id)a5 appId:(id)a6 merchantId:(id)a7;
+ (id)constructLogModelWithLogLevel:(long long)a0 msg:(id)a1 code:(id)a2 path:(id)a3 logId:(id)a4 appId:(id)a5 merchantId:(id)a6;

- (id)transformLog;
- (id)initWithLogModelWithLogLevel:(long long)a0 msg:(id)a1 source:(id)a2 custom:(id)a3 code:(id)a4 path:(id)a5 logId:(id)a6 appId:(id)a7 merchantId:(id)a8;
- (BOOL)isValidApiProperties;
- (BOOL)isValidMerchantProperties;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
