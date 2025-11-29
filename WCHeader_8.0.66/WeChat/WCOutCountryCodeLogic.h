@class NSLocale, NSString, Package, NSSet, WCOutCountryCodeWrap, NSMutableArray, NSDictionary;

@interface WCOutCountryCodeLogic : MMObject <MMPackageDownloadMgrExt> {
    WCOutCountryCodeWrap *m_defaultCountryCodeWrap;
    unsigned int m_lastUpdateTime;
    NSString *m_countryCodeConfig;
    Package *m_downloadingPackage;
    NSString *m_curLanguage;
    NSSet *m_restrictionSet;
    NSMutableArray *m_allCountryCodes;
    NSDictionary *m_countryCodesDic;
    NSLocale *m_curLocale;
}

@property (nonatomic) unsigned long long addressMgrId;
@property (readonly, nonatomic) NSString *defaultCoutryCode;

- (id)init;
- (id)getTopCountryCodeConfig;
- (id)getAllCountryCodes;
- (id)getCountryCodeWrapsFromCountryCodeList:(id)a0;
- (BOOL)isRestrictedCountryCode:(id)a0;
- (BOOL)isValidCountryCode:(id)a0;
- (unsigned int)countOfCountryCodeStartWith:(id)a0;
- (id)countryISOCodeForCountryCode:(id)a0;
- (id)countryCodeFromISOCountryCode:(id)a0;
- (void)checkUpdate;
- (void)configData;
- (void)configCountryCodeRestriction;
- (void)onPackageNeedUpdate:(id)a0 withPackIDs:(id)a1;
- (void)onPackageListUpdated:(id)a0;
- (void)onPackageDownloadProcessUpdated:(id)a0 downloadSize:(int)a1 totalSize:(int)a2;
- (void)onPackageDownloadFinish:(id)a0 package:(id)a1;
- (void)getAllCountryCode;
- (id)findCountryWrapFromISOCountryCode:(id)a0;
- (id)getCurCountryCode;
- (id)getCarrierCountryCode;
- (id)getLocaleCountryCode;
- (void).cxx_destruct;

@end
