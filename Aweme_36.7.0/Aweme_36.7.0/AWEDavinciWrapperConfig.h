@class NSString;

@interface AWEDavinciWrapperConfig : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *effectSDKVersion;
@property (copy, nonatomic) NSString *artistSDKVersion;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *cacheDir;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *artistHost;
@property (copy, nonatomic) NSString *mediaHost;
@property (copy, nonatomic) NSString *channel;

- (void).cxx_destruct;

@end
