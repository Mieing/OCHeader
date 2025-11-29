@class NSString, NSDictionary;
@protocol BDBDMonitorClass;

@interface AWECFEradicates : NSObject

@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *installId;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) id /* block */ getDeviceIdBlock;
@property (copy, nonatomic) id /* block */ getInstallIdBlock;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *appBuildVersion;
@property (nonatomic) BOOL enableEnterForegroundRequest;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) long long distArea;
@property (copy, nonatomic) NSString *domainName;
@property (copy, nonatomic) id /* block */ commonNetworkParamsBlock;
@property (readonly, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) id /* block */ isWifiNetworkBlock;
@property (retain, nonatomic) id<BDBDMonitorClass> monitor;

- (BOOL)isWifiReachable;
- (void).cxx_destruct;
- (id)init;

@end
