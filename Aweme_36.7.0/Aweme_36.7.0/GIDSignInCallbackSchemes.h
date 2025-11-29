@class NSString;

@interface GIDSignInCallbackSchemes : NSObject {
    NSString *_clientIdentifier;
}

+ (id)relevantURLSchemes;

- (id)clientIdentifierScheme;
- (id)unsupportedSchemes;
- (id)allSchemes;
- (BOOL)URLSchemeIsCallbackScheme:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0;

@end
