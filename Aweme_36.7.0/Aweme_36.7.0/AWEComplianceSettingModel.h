@class NSString, NSArray, AWETeenAbParamModel, AWECertificationModel, AWEMinorStatusModel, AWEUnloginTeenmodeModel, AWETeenRecommendModel, AWELegalEntityInfo;

@interface AWEComplianceSettingModel : AWEBaseApiModel <AWEComplianceModelProtocol>

@property (nonatomic) BOOL enableImpressum;
@property (copy, nonatomic) NSString *impressumUrl;
@property (retain, nonatomic) NSArray *blackList;
@property (nonatomic) long long TeenModeAlertCount;
@property (copy, nonatomic) NSString *teensModeAlertRedirectUrl;
@property (copy, nonatomic) NSString *aboutPrivacyPolicyUrl;
@property (nonatomic) BOOL policyNoticeEnable;
@property (nonatomic) BOOL forcePrivateAccount;
@property (nonatomic) BOOL isTeenProtector;
@property (retain) AWEMinorStatusModel *minorStatus;
@property (retain, nonatomic) AWETeenAbParamModel *teenAbParam;
@property (retain, nonatomic) AWELegalEntityInfo *legalEntityInfo;
@property (retain, nonatomic) AWEUnloginTeenmodeModel *didTeenStatusModel;
@property (nonatomic) long long parentalGuardianMode;
@property (nonatomic) BOOL parentalChildTeenMode;
@property (nonatomic) BOOL parentalGuardianOffline;
@property (retain, nonatomic) AWECertificationModel *certModel;
@property (nonatomic) long long businessErrorCode;
@property (retain, nonatomic) AWETeenRecommendModel *teenRecommend;
@property (nonatomic) BOOL isServerLogin;

+ (id)legalEntityInfoJSONTransformer;
+ (id)didTeenStatusModelJSONTransformer;
+ (id)minorStatusJSONTransformer;
+ (id)teenAbParamJSONTransformer;
+ (id)certModelJSONTransformer;
+ (id)teenRecommendJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEmptyOfTeensModeAlertRedirectUrl;
- (void).cxx_destruct;

@end
