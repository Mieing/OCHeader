@class NSString, AWEUserAccountCertInfoModel, AWEURLModel;

@interface AWELocalDBUserModel : AWELocalUserCenterBaseModel <WCTTableCoding, AWEUserNameProtocol>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *shortID;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (retain, nonatomic) AWEUserAccountCertInfoModel *accountCertInfo;
@property (copy, nonatomic) NSString *signature;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (copy, nonatomic) NSString *customVerifyInfo;
@property (copy, nonatomic) NSString *enterpriseVerifyInfo;
@property (nonatomic) unsigned long long verificationType;
@property (nonatomic) long long privateAccount;
@property (copy, nonatomic) NSString *mobileKey;
@property (nonatomic) long long gender;
@property (copy, nonatomic) NSString *alias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)modifyTime;
+ (const void *)accountCertInfo;
+ (const void *)privateAccount;
+ (const void *)followerStatus;
+ (const void *)customVerifyInfo;
+ (const void *)enterpriseVerifyInfo;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (id)avatarThumbJSONAdapter;
+ (id)accountCertInfoJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (const void *)mobileKey;
+ (id)followerStatusJSONTransformer;
+ (id)genderJSONTransformer;
+ (const void *)shortID;
+ (const void *)followStatus;
+ (const void *)secUserID;
+ (const void *)avatarThumb;
+ (const void *)nickname;
+ (const void *)userID;
+ (const void *)gender;
+ (const void *)updateTime;
+ (const void *)signature;
+ (const void *)isDeleted;
+ (const void *)uniqueID;
+ (const void *)alias;
+ (const void *)verificationType;
+ (id)JSONKeyPathsByPropertyKey;

- (id)userNameWithScene:(id)a0;
- (id)initWithAweUser:(id)a0;
- (id)aliasWithScene:(id)a0;
- (id)getIMUser;
- (id)getAweUser;
- (id)userPropertyDetail;
- (void).cxx_destruct;
- (id)displayName;
- (id)targetTable;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
