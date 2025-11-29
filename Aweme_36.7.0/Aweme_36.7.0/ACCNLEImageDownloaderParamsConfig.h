@class NSString;

@interface ACCNLEImageDownloaderParamsConfig : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *appLanguage;
@property (copy, nonatomic) NSString *effectCacheDir;
@property (copy, nonatomic) NSString *effectHost;
@property (copy, nonatomic) NSString *modelCacheDir;
@property (copy, nonatomic) NSString *artistCacheDir;
@property (copy, nonatomic) NSString *artistHost;
@property (copy, nonatomic) NSString *imuseCacheDir;
@property (copy, nonatomic) NSString *imuseHost;
@property (copy, nonatomic) NSString *resolution;

- (void).cxx_destruct;

@end
