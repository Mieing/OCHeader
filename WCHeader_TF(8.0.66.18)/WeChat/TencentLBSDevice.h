@class NSString;

@interface TencentLBSDevice : NSObject

@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSString *identifierForVendor;
@property (copy, nonatomic) NSString *identifierForIdentifier;
@property (copy, nonatomic) NSString *accessTokenMD5;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *appLabel;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *buildDate;
@property (nonatomic) BOOL canUseHttp;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *openid;

+ (id)currentDevice;

- (id)init;
- (void)updateIdfa:(id)a0;
- (void)getStoredId;
- (id)deviceModelName;
- (BOOL)supportATS;
- (void).cxx_destruct;

@end
