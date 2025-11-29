@class NSString;

@interface AWESecWebViewAdapter : NSObject <BDWebSecSettingDelegate, SECForceHTTPSProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldForceHttpsForURL:(id)a0;
+ (BOOL)bdForceHttpsRequest;
+ (id)sharedDomains;
+ (id)sharedAdater;


@end
