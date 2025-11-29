@class NSString, NSURL;

@interface OIDExternalUserAgentIOSCustomBrowser : NSObject <OIDExternalUserAgent>

@property (readonly, nonatomic) id /* block */ URLTransformation;
@property (readonly, nonatomic) NSString *canOpenURLScheme;
@property (readonly, nonatomic) NSURL *appStoreURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)URLTransformationSchemeSubstitutionHTTPS:(id)a0 HTTP:(id)a1;
+ (id /* block */)URLTransformationSchemeConcatPrefix:(id)a0;
+ (id)CustomBrowserChrome;
+ (id)CustomBrowserFirefox;
+ (id)CustomBrowserOpera;
+ (id)CustomBrowserSafari;

- (BOOL)presentExternalUserAgentRequest:(id)a0 session:(id)a1;
- (void)dismissExternalUserAgentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithURLTransformation:(id /* block */)a0 canOpenURLScheme:(id)a1 appStoreURL:(id)a2;
- (id)initWithURLTransformation:(id /* block */)a0;
- (void).cxx_destruct;

@end
