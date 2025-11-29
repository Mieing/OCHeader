@class NSString;

@interface DAVAlgorithmResourceHandlerConfig : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *effectSDKVersion;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *appLanguage;
@property (copy, nonatomic) NSString *modelCacheDir;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *busiId;
@property (copy, nonatomic) NSString *status;

- (void).cxx_destruct;

@end
