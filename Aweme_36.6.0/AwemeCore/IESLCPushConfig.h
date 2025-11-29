@class NSString, NSDictionary, NSArray;

@interface IESLCPushConfig : NSObject

@property (nonatomic) int appId;
@property (nonatomic) int fpid;
@property (nonatomic) long long deviceId;
@property (nonatomic) long long installId;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSDictionary *customParams;
@property (copy, nonatomic) NSDictionary *customHeaders;
@property (readonly, copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL disableLongConnection;
@property (nonatomic) BOOL enableAppStateReport;
@property (copy, nonatomic) NSArray *uniqueServiceIdList;
@property (copy, nonatomic) NSString *privateProtocolUrl;
@property (nonatomic) unsigned long long transportType;

- (void).cxx_destruct;

@end
