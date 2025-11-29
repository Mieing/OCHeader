@class NSDictionary, NSString;

@interface SECRouterURLConfigProvider : NSObject <SECSourceURLConfigProvider>

@property (copy) NSDictionary *wholeConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadConfig;
- (id)constantsPool;
- (id)URLNormalizePolicy;
- (id)URLExpiryPolicy;
- (id)logFilters;
- (id)URLAssets;
- (void)updateNormalizeRules;
- (id)logGenerateFilters;
- (void).cxx_destruct;

@end
