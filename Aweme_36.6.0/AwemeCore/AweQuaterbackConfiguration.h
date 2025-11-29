@class NSString;

@interface AweQuaterbackConfiguration : NSObject

@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *installId;
@property (nonatomic) BOOL debug;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) id /* block */ getDeviceIdBlock;
@property (copy, nonatomic) id /* block */ getInstallIdBlock;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *appBuildVersion;
@property (nonatomic) long long distArea;
@property (copy, nonatomic) NSString *domainName;
@property (copy, nonatomic) id /* block */ commonNetworkParamsBlock;
@property (copy, nonatomic) id /* block */ isWifiNetworkBlock;
@property (nonatomic) BOOL enableEnterForegroundRequest;

- (void).cxx_destruct;
- (id)init;

@end
