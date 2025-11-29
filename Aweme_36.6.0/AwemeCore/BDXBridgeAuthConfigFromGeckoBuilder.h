@class NSString, NSArray;

@interface BDXBridgeAuthConfigFromGeckoBuilder : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *authDomain;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *extraChannels;
@property (copy, nonatomic) NSString *boeHostSuffix;
@property (nonatomic) long long delay;
@property (nonatomic) BOOL builtinAuthInfosEnabled;

- (void).cxx_destruct;

@end
