@protocol BUADServiceProvider;

@interface BUADServiceProviderEntry : BUADServiceBuildEntry {
    id<BUADServiceProvider> _provider;
}

- (id)buildObject:(id)a0;
- (id)extractObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)dealloc;

@end
