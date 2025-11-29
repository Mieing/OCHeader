@class NSString, FinderContact;

@interface FinderAuthInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *realName;
@property (nonatomic) unsigned int authIconType;
@property (retain, nonatomic) NSString *authProfession;
@property (retain, nonatomic) FinderContact *authGuarantor;
@property (retain, nonatomic) NSString *detailLink;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *authIconUrl;
@property (nonatomic) unsigned int customerType;
@property (nonatomic) unsigned int authVerifyIdentity;
@property (nonatomic) unsigned int verifyStatus;
@property (retain, nonatomic) NSString *unauthProfession;

+ (void)initialize;

- (void)setUnauthProfession:(id)a0;
- (id)unauthProfession;
- (void)setVerifyStatus:(unsigned int)a0;
- (unsigned int)verifyStatus;
- (void)setAuthVerifyIdentity:(unsigned int)a0;
- (unsigned int)authVerifyIdentity;
- (void)setCustomerType:(unsigned int)a0;
- (unsigned int)customerType;
- (void)setAuthIconUrl:(id)a0;
- (id)authIconUrl;
- (void)setAppName:(id)a0;
- (id)appName;
- (void)setDetailLink:(id)a0;
- (id)detailLink;
- (void)setAuthGuarantor:(id)a0;
- (id)authGuarantor;
- (void)setAuthProfession:(id)a0;
- (id)authProfession;
- (void)setAuthIconType:(unsigned int)a0;
- (unsigned int)authIconType;
- (void)setRealName:(id)a0;
- (id)realName;

@end
