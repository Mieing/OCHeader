@class NSString, SECWebSecLinkParamsHandlerSettings;

@interface SECWebSecLinkParamsHandler : NSObject <BDWebSecureLinkRequestSecureCheckDelegate>

@property (retain, nonatomic) SECWebSecLinkParamsHandlerSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringParamsValue:(id)a0;

- (id)paramsWithWebView:(id)a0 url:(id)a1;
- (void).cxx_destruct;

@end
