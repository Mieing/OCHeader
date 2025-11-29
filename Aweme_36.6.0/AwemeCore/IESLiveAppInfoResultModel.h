@class NSString, NSNumber;

@interface IESLiveAppInfoResultModel : IESLiveBridgeModel

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *netType;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *orientation;
@property (retain, nonatomic) NSNumber *screenHeight;
@property (retain, nonatomic) NSNumber *screenWidth;
@property (copy, nonatomic) NSString *ac;
@property (copy, nonatomic) NSString *version_code;
@property (copy, nonatomic) NSString *versionCode;
@property (copy, nonatomic) NSString *idfa;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSString *webcastSdkVersion;
@property (retain, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSString *webcastAppId;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *device_type;
@property (copy, nonatomic) NSString *os_version;
@property (copy, nonatomic) NSString *device_platform;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
