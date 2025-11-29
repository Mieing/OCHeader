@class NSMutableDictionary;

@interface AWEPzDomainManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *domainRegisterMap;
@property (retain, nonatomic) NSMutableDictionary *domainMap;

+ (id)sharedInstance;

- (id)generateEngineWithDomainName:(id)a0 config:(id)a1;
- (id)getAllRegisterDomains;
- (BOOL)isDomainRegister:(id)a0;
- (void)registerAllDomains;
- (void)registerDomainWithRegisterModel:(id)a0;
- (id)getDomainWithDomainName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
