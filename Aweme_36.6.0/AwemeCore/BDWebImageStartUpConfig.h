@class NSString, NSArray;

@interface BDWebImageStartUpConfig : NSObject

@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) NSString *sdkVersion;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *devicePlatform;
@property (readonly, nonatomic) NSString *deviceBrand;
@property (readonly, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) unsigned long long resolutionWidth;
@property (readonly, nonatomic) unsigned long long resolutionHeight;
@property (readonly, nonatomic) NSString *updateVersionCode;
@property (nonatomic) unsigned long long remoteConfigTimestamp;
@property (copy) NSString *appID;
@property (nonatomic) unsigned long long serviceVendor;
@property (copy) NSString *token;
@property (copy) NSArray *authCodes;
@property (nonatomic) unsigned long long userID;
@property (nonatomic) unsigned long long deviceID;
@property (copy) NSString *channel;
@property (nonatomic) BOOL isInBoe;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
