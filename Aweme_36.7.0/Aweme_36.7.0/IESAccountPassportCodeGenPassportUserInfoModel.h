@class NSString;

@interface IESAccountPassportCodeGenPassportUserInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *accountCertInfo;
@property (nonatomic) int passportEnterpriseUserType;
@property (nonatomic) int secret;
@property (nonatomic) int mplatformFollowersCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
