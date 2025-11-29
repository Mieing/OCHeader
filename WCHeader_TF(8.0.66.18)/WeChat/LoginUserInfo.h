@class NSString, NSData;

@interface LoginUserInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *m_nsUserName;
@property (retain, nonatomic) NSString *m_nsLoginName;
@property (retain, nonatomic) NSString *m_nsAliasName;
@property (retain, nonatomic) NSString *m_nsNickName;
@property (nonatomic) unsigned long long m_ui64Uin;
@property (nonatomic) unsigned int m_uiBindAcountFlag;
@property (nonatomic) unsigned int m_uiLastLoginAcountType;
@property (retain, nonatomic) NSString *m_nsPhoneNumber;
@property (retain, nonatomic) NSString *m_nsNoPwdLoginTicket;
@property (nonatomic) BOOL m_bIsOpenVoicePrint;
@property (nonatomic) BOOL m_bIsOpenFace;
@property (retain, nonatomic) NSData *m_dtAutoAuthKey;
@property (retain, nonatomic) NSString *m_bindLoginUserName;
@property (retain, nonatomic) NSData *passkeyCredentialID;
@property (nonatomic) unsigned long long extStatus2;
@property (nonatomic) BOOL hasBindAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_nsUserName;
+ (void)PBArrayAdd_m_nsLoginName;
+ (void)PBArrayAdd_m_nsNickName;
+ (void)PBArrayAdd_m_ui64Uin;
+ (void)PBArrayAdd_m_uiBindAcountFlag;
+ (void)PBArrayAdd_m_uiLastLoginAcountType;
+ (void)PBArrayAdd_m_nsPhoneNumber;
+ (void)PBArrayAdd_m_nsNoPwdLoginTicket;
+ (void)PBArrayAdd_m_bIsOpenVoicePrint;
+ (void)PBArrayAdd_m_dtAutoAuthKey;
+ (void)PBArrayAdd_m_bindLoginUserName;
+ (void)PBArrayAdd_m_bIsOpenFace;
+ (void)PBArrayAdd_m_nsAliasName;
+ (void)PBArrayAdd_passkeyCredentialID;
+ (void)PBArrayAdd_extStatus2;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)hasBindAccount;
- (void)setHasBindAccount:(BOOL)a0;
- (id)getLastLoginName;
- (id)getLoginUserName;
- (BOOL)isPasskeyOpened;
- (void).cxx_destruct;

@end
