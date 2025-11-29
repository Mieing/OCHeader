@class NSString;

@interface CJPayPassExtModel : JSONModel

@property (copy, nonatomic) NSString *agreements;
@property (copy, nonatomic) NSString *authUidMaskMobile;
@property (copy, nonatomic) NSString *entrance;
@property (copy, nonatomic) NSString *isNeedAgreementUpgrade;
@property (copy, nonatomic) NSString *merchantAppId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *mobileAuthPageInfo;
@property (copy, nonatomic) NSString *pidMobile;
@property (copy, nonatomic) NSString *redirectUrl;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *upgradeAgreements;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *createEntranceTitle;
@property (copy, nonatomic) NSString *dataUserStatus;
@property (copy, nonatomic) NSString *isNeedCheck;
@property (copy, nonatomic) NSString *randomStr;
@property (copy, nonatomic) NSString *tagAid;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *upgradeIsNeedCheck;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
