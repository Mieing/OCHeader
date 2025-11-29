@class FWFInstanceManager;

@interface FWFPreferencesHostApiImpl : NSObject <FWFWKPreferencesHostApi>

@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithInstanceManager:(id)a0;
- (id)preferencesForIdentifier:(long long)a0;
- (void)createWithIdentifier:(long long)a0 error:(id *)a1;
- (void)createFromWebViewConfigurationWithIdentifier:(long long)a0 configurationIdentifier:(long long)a1 error:(id *)a2;
- (void)setJavaScriptEnabledForPreferencesWithIdentifier:(long long)a0 isEnabled:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
