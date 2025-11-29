@class NSString, NSArray, NSDictionary, DYAAppUserInfoModel, NSNumber, DYAOperStaffAccountModel;

@interface DYAPassportAccountModel : DYAPassportResponseModel <DYARawDataProtocol, MTLJSONSerializing>

@property (copy, nonatomic) NSString *userIDStr;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) long long countryCode;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *sessionKey;
@property (nonatomic) BOOL isNewUser;
@property (nonatomic) long long userAuthStatus;
@property (nonatomic) long long appID;
@property (copy, nonatomic) NSArray *thirdConnects;
@property (nonatomic) long long recordStatus;
@property (nonatomic) BOOL isEmployee;
@property (nonatomic) unsigned long long enterpriseUserType;
@property (nonatomic) BOOL isSameUid;
@property (copy, nonatomic) NSString *safeMobile;
@property (nonatomic) long long safeMobileCountryCode;
@property (copy, nonatomic) NSString *email;
@property (nonatomic) long long vcdAccoutState;
@property (nonatomic) long long vcdRelationState;
@property (copy, nonatomic) NSArray *subAccounts;
@property (copy, nonatomic) NSString *smsCodeKey;
@property (retain, nonatomic) DYAAppUserInfoModel *appUserInfo;
@property (copy, nonatomic) NSString *relationUserToken;
@property (nonatomic) BOOL isRelationUser;
@property (copy, nonatomic) NSString *mainAccountUerID;
@property (copy, nonatomic) NSString *VCDAccountUerID;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL hasPassword;
@property (retain, nonatomic) NSNumber *needCheckBindStatus;
@property (nonatomic) BOOL needBindMobile;
@property (copy, nonatomic) NSArray *assistAccountInfo;
@property (copy, nonatomic) NSArray *allAccountInfo;
@property (copy, nonatomic) NSArray *operStaffAccountInfo;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSString *businessIdentityName;
@property (retain, nonatomic) DYAOperStaffAccountModel *operationalStaff;
@property (retain, nonatomic) NSDictionary *combineLoginMonitorInfo;
@property (copy, nonatomic) NSDictionary *redirectConfig;
@property (copy, nonatomic) NSString *liteUserString;
@property (copy, nonatomic) NSDictionary *rawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userIDJSONTransformer;
+ (id)thirdConnectsJSONTransformer;
+ (id)subAccountsJSONTransformer;
+ (id)appUserInfoJSONTransformer;
+ (id)assistAccountInfoJSONTransformer;
+ (id)allAccountInfoJSONTransformer;
+ (id)operStaffAccountInfoJSONTransformer;
+ (id)operationalStaffJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
