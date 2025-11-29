@class NSString, NSArray, NSDate, DYPhoneNumberModel;

@interface DYLastLoginUserModel : MTLModel <AWEUserCombineLoginUser>

@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *UID;
@property (copy, nonatomic) NSString *secUID;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (nonatomic) BOOL isEmployee;
@property (nonatomic) unsigned long long enterpriseUserType;
@property (copy, nonatomic) NSString *businessIdentityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avatarUrls;
- (id)nickNameString;
- (BOOL)isSharedLogin;
- (id)initWithAwemeUser:(id)a0;
- (id)secUserID;
- (void).cxx_destruct;
- (id)phoneNumberString;

@end
