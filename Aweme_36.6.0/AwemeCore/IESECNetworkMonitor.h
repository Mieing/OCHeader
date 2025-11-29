@class NSDictionary;

@interface IESECNetworkMonitor : NSObject

@property (copy, nonatomic) NSDictionary *config;

+ (id)sharedManager;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)iesec_registerTTResponseFilter;
- (BOOL)isPathAllowed:(id)a0;
- (id)findAPIConfigForPath:(id)a0;
- (id)scanJSON:(id)a0 valueCodeKeys:(id)a1 valueMsgKeys:(id)a2 nullKeys:(id)a3;
- (long long)firstNonZeroCodeFromDict:(id)a0;
- (id)firstNonStrFromDict:(id)a0;
- (id)findNullKeys:(id)a0;
- (id)makeParseError:(id)a0;
- (id)markAllNullKeysAsError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
