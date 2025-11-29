@class NSString;

@interface BDUGFlowCommonParamsModel : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *clientId;
@property (nonatomic) BOOL isLogin;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;
@property (nonatomic) long long reportThreshold;

- (void).cxx_destruct;

@end
