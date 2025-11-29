@class NSString, CJPayAppUserInfo, CJPayUserInfoExtInfoModel, NSArray, CJPayUserInfoPassModel;

@interface CJPayUserInfo : JSONModel

@property (copy, nonatomic) NSString *authStatus;
@property (copy, nonatomic) NSString *authUrl;
@property (copy, nonatomic) NSString *lynxAuthUrl;
@property (copy, nonatomic) NSString *certificateNum;
@property (copy, nonatomic) NSString *certificateType;
@property (copy, nonatomic) NSString *mName;
@property (copy, nonatomic) NSString *mid;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *uidType;
@property (copy, nonatomic) NSString *jruid;
@property (copy, nonatomic) NSString *findPwdURL;
@property (copy, nonatomic) NSString *pwdStatus;
@property (copy, nonatomic) NSString *addPwdUrl;
@property (nonatomic) long long payIdState;
@property (nonatomic) BOOL isNewUser;
@property (copy, nonatomic) NSString *bindUrl;
@property (copy, nonatomic) NSString *decLiveUrl;
@property (copy, nonatomic) NSString *pwdCheckWay;
@property (copy, nonatomic) NSString *invokeWildCardPwdCheckWay;
@property (copy, nonatomic) NSString *accountMobile;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *uidMobileMask;
@property (retain, nonatomic) CJPayUserInfoExtInfoModel *extInfo;
@property (retain, nonatomic) CJPayUserInfoPassModel *passModel;
@property (nonatomic) BOOL redirectBind;
@property (nonatomic) BOOL needSetPwdAfterPay;
@property (copy, nonatomic) NSString *balanceAmount;
@property (nonatomic) BOOL needAuthGuide;
@property (nonatomic) BOOL payAfterUseActive;
@property (nonatomic) BOOL hasSignedCards;
@property (nonatomic) BOOL needCompleteUserInfo;
@property (copy, nonatomic) NSString *completeUrl;
@property (copy, nonatomic) NSString *completeLynxUrl;
@property (copy, nonatomic) NSString *completeHintTitle;
@property (copy, nonatomic) NSString *completeType;
@property (copy, nonatomic) NSString *completeRightText;
@property (copy, nonatomic) NSString *completeLeftText;
@property (nonatomic) long long completeOrderTimes;
@property (readonly, nonatomic) BOOL isNeedAddPwd;
@property (nonatomic) BOOL needShowUserInfo;
@property (copy, nonatomic) NSString *realNameAuthUrl;
@property (retain, nonatomic) CJPayAppUserInfo *appUserInfo;
@property (copy, nonatomic) NSArray *openedCheckWays;
@property (copy, nonatomic) NSString *chargeWithdrawStyle;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)getBioCheckWay;
- (BOOL)hasValidAuthStatus;
- (id)currentLoginUserInfo;
- (BOOL)isSetPwdProcess;
- (void).cxx_destruct;

@end
