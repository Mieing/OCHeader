@class NSMutableDictionary;

@interface QFoundationDataSafetyRules : NSObject

@property (retain, nonatomic) NSMutableDictionary *domainRuleMaps;

- (id)init;
- (void)registerDomianRules:(id)a0;
- (void)unregisterDomianRules:(id)a0;
- (id)replaceOriginDomain:(id)a0;
- (void).cxx_destruct;

@end
