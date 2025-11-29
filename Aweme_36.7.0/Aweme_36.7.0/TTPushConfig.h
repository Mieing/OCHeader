@class NSString, NSDictionary, NSArray;

@interface TTPushConfig : NSObject

@property (nonatomic) int appId;
@property (nonatomic) int fpid;
@property (nonatomic) long long deviceId;
@property (nonatomic) int appVersion;
@property (nonatomic) long long installId;
@property (nonatomic) long long webId;
@property (nonatomic) int platform;
@property (nonatomic) int network;
@property (nonatomic) BOOL enableAppStateReport;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSDictionary *customParams;
@property (copy, nonatomic) NSDictionary *customHeaders;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSArray *uniqueServiceIdList;
@property (copy, nonatomic) NSString *privateProtocolUrl;
@property (nonatomic) unsigned long long transportType;

- (void).cxx_destruct;

@end
