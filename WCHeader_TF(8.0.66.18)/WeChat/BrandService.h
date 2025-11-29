@class NSRegularExpression, NSMutableDictionary, NSDictionary, BrandLemmaTable, NSString;

@interface BrandService : MMUserService <IMMLanguageMgrExt, MMServiceProtocol>

@property (nonatomic) int agreementId;
@property (nonatomic) int wordAgreementId;
@property (retain) NSMutableDictionary *dictDomain;
@property (nonatomic) int domainAgreementId;
@property (retain, nonatomic) NSRegularExpression *domainRegex;
@property (retain, nonatomic) NSDictionary *domainKeyToListDict;
@property (retain, nonatomic) BrandLemmaTable *brandLemmaTable;
@property (nonatomic) unsigned int brandType;
@property (retain, nonatomic) NSString *sharedDomainDictPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)additionalUA;
+ (id)safeResolveURLString:(id)a0;
+ (id)replacePlaceHolder:(id)a0 withName:(id)a1 inWording:(id)a2;
+ (id)getDomainKey:(id)a0;
+ (unsigned int)getBrandType;
+ (BOOL)isOverseaAgent;
+ (BOOL)isOverseaWallet;

- (void)onServiceInit;
- (void)setUserAgreementId:(unsigned int)a0;
- (void)setWordingSettings:(id)a0;
- (void)setDomainSettings:(id)a0;
- (void)loadDomainDict;
- (void)updateDomainDict:(id)a0;
- (id)getRealDomain:(id)a0;
- (id)getBrandWordingForKey:(id)a0;
- (id)getBrandWordingForKey:(id)a0 brandType:(unsigned int)a1;
- (id)getBrandWordingForKey:(id)a0 brandType:(unsigned int)a1 locale:(id)a2;
- (id)getRealWording:(id)a0;
- (id)getRealWording:(id)a0 brandType:(unsigned int)a1;
- (id)getRealWording:(id)a0 locale:(id)a1;
- (id)getRealWording:(id)a0 brandType:(unsigned int)a1 locale:(id)a2;
- (id)resolveURLString:(id)a0;
- (id)domainDict;
- (void)initBrandLemmaTable;
- (void)onBrandTypeChange;
- (void)onLanguageChange;
- (void).cxx_destruct;

@end
