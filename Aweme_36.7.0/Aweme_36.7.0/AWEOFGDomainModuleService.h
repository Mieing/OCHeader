@class NSDictionary, NSURL, NSString;

@interface AWEOFGDomainModuleService : HTSService <AWEOFGDomainModuleService, AWEAppAwemeSettingMessage>

@property (retain, nonatomic) NSDictionary *firstPartyDomainList;
@property (retain, nonatomic) NSDictionary *firstPartyBlockDomainList;
@property (retain, nonatomic) NSDictionary *secondPartyDomainList;
@property (retain, nonatomic) NSURL *lastURL;
@property (nonatomic) unsigned long long lastParty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)awemeSettingDidChange;
- (void)initServiceData;
- (unsigned long long)getDomainPartyForURL:(id)a0;
- (void)loadInnerConfigIfNeed;
- (unsigned long long)getDomainPartyForDomain:(id)a0 path:(id)a1;
- (void)trackEvent:(id)a0 url:(id)a1 duration:(double)a2 party:(unsigned long long)a3;
- (BOOL)hasUpperDomain:(id)a0;
- (id)getUpperDomain:(id)a0;
- (void)updateDomainListIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
