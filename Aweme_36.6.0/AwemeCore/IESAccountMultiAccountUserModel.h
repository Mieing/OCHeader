@class NSString, IESAccountPassportCodeGenPassportUserInfoModel;

@interface IESAccountMultiAccountUserModel : AWEBaseDataModel

@property (retain, nonatomic) IESAccountPassportCodeGenPassportUserInfoModel *userInfoData;
@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *relationUserToken;
@property (nonatomic) BOOL isRelationUser;
@property (copy, nonatomic) NSString *mainAccountUerID;
@property (copy, nonatomic) NSString *VCDAccountUerID;
@property (copy, nonatomic) NSString *businessIdentityName;
@property (nonatomic) BOOL assistRegister;
@property (copy, nonatomic) NSString *safeMobile;
@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic) double lastUpdateTime;

- (id)secUserId;
- (id)accountCertInfo;
- (BOOL)isBusinessAccountOperator;
- (BOOL)isSecretAccount;
- (void).cxx_destruct;
- (id)userId;
- (id)name;

@end
