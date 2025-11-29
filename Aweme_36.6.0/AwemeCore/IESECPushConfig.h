@class NSString, NSDictionary, NSArray;

@interface IESECPushConfig : NSObject

@property (nonatomic) int appId;
@property (nonatomic) int fpid;
@property (nonatomic) long long deviceId;
@property (nonatomic) long long installId;
@property (nonatomic) BOOL enableAppStateReport;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSDictionary *customHeaders;
@property (copy, nonatomic) NSDictionary *customParams;
@property (copy, nonatomic) NSArray *urls;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
