@class NSString, NSNumber;

@interface BDAPUAppInfoMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *innerAppName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *devicePlatform;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *versionCode;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *idfa;
@property (copy, nonatomic) NSString *installID;
@property (retain, nonatomic) NSNumber *statusBarHeight;
@property (copy, nonatomic) NSString *netType;
@property (copy, nonatomic) NSString *carrier;
@property (copy, nonatomic) NSString *appTheme;
@property (retain, nonatomic) NSNumber *isTeenMode;
@property (retain, nonatomic) NSNumber *ironManSupported;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
