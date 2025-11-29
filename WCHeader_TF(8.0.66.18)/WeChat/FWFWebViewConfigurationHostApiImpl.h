@class FWFInstanceManager;
@protocol FlutterBinaryMessenger;

@interface FWFWebViewConfigurationHostApiImpl : NSObject <FWFWKWebViewConfigurationHostApi>

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (id)webViewConfigurationForIdentifier:(long long)a0;
- (void)createWithIdentifier:(long long)a0 error:(id *)a1;
- (void)createFromWebViewWithIdentifier:(long long)a0 webViewIdentifier:(long long)a1 error:(id *)a2;
- (void)setAllowsInlineMediaPlaybackForConfigurationWithIdentifier:(long long)a0 isAllowed:(BOOL)a1 error:(id *)a2;
- (void)setLimitsNavigationsToAppBoundDomainsForConfigurationWithIdentifier:(long long)a0 isLimited:(BOOL)a1 error:(id *)a2;
- (void)setMediaTypesRequiresUserActionForConfigurationWithIdentifier:(long long)a0 forTypes:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
