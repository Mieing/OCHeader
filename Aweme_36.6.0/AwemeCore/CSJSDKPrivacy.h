@class NSArray, NSDictionary, NSString, NSNumber;

@interface CSJSDKPrivacy : NSObject

@property (retain) NSDictionary *privacy;
@property long long ad_enable;
@property long long personalized_ad;
@property long long sladar_enable;
@property long long app_log_enable;
@property long long sec_enable;
@property (copy) NSArray *fields_allowed;
@property (retain) NSDictionary *capacityMethod;
@property (retain) NSNumber *longitude;
@property (retain) NSNumber *latitude;
@property (copy) NSString *customIdfaString;
@property double startDeviceTime;

+ (id)shareManager;
+ (long long)bu_AdEnable;
+ (BOOL)isUnionBundleId;
+ (void)bu_setTestLongitude:(id)a0;
+ (void)bu_setTestLatitude:(id)a0;
+ (id)bu_countryOrderNum;
+ (id)systemUpdateTime;
+ (BOOL)bu_fields_allowed:(id)a0;
+ (id)bu_getInformation:(id)a0;
+ (id)bu_getOriginalIDFA;
+ (void)checkSettingsForEnable:(id *)a0;
+ (id)_bu_getOriginalIDFA;
+ (id)md5String:(id)a0;
+ (long long)bu_personalized_ad;
+ (long long)bu_sladar_enable;
+ (long long)bu_app_log_enable;
+ (long long)bu_sec_enable;
+ (id)idfaString;
+ (id)getCarrierMCC;
+ (id)getCarrierMNC;
+ (id)getCurrentIMSI;
+ (id)getPhoneName;
+ (void)bu_setCustomIDFA:(id)a0;
+ (id)getDeviceStartTime;
+ (id)getDeviceRunTime;
+ (id)bu_skadNetwork_id_array;
+ (void)bu_setPrivacyInfo:(id)a0;
+ (id)bu_fields_allowed_array;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)latitude;
+ (id)longitude;

- (void)calculateDeviceStartTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)telephonyNetworkInfo;

@end
