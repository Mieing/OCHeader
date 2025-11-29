@class NSString, WCFinderContact;

@interface WCFinderAuthInfo : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *realName;
@property (nonatomic) unsigned long long authIconType;
@property (retain, nonatomic) NSString *authProfession;
@property (retain, nonatomic) NSString *unauthProfession;
@property (retain, nonatomic) WCFinderContact *authGuarantor;
@property (copy, nonatomic) NSString *detailLink;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *authIconUrl;
@property (nonatomic) unsigned long long authVerifyIdentity;
@property (nonatomic) unsigned long long verifyStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_realName;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_authProfession;
+ (void)PBArrayAdd_authGuarantor;
+ (void)PBArrayAdd_authIconUrl;
+ (void)PBArrayAdd_authVerifyIdentity;
+ (void)PBArrayAdd_verifyStatus;
+ (void)PBArrayAdd_unauthProfession;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (id)finderAuthInfo:(id)a0;
+ (id)genFromBizAuthInfo:(id)a0;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)genFinderAuthInfo;
- (BOOL)hadCertified;
- (BOOL)hasGuarantor;
- (id)genAuthIconUrl;
- (unsigned long long)authVerifyIdentityType;
- (BOOL)hasAuthIconUrl;
- (BOOL)shouldDisplay;
- (id)displayText;
- (void).cxx_destruct;

@end
