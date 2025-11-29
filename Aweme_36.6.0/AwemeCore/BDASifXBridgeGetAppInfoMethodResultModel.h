@class NSNumber, NSString;

@interface BDASifXBridgeGetAppInfoMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *innerAppName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *netType;
@property (copy, nonatomic) NSString *device_model;
@property (copy, nonatomic) NSString *device_platform;
@property (copy, nonatomic) NSString *device_id;
@property (copy, nonatomic) NSString *device_type;
@property (copy, nonatomic) NSString *os_version;
@property (copy, nonatomic) NSString *version_code;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *user_id;
@property (retain, nonatomic) NSNumber *statusBarHeight;
@property (copy, nonatomic) NSString *idfa;
@property (copy, nonatomic) NSString *install_id;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
