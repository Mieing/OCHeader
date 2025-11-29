@class BDXSecureSecLinkConfig, NSString;

@interface BDXSecureLinkHandler : NSObject <BDWebSecureLinkSettingDelegate, BDWebSecureLinkRequestSecureCheckDelegate>

@property (retain, nonatomic) BDXSecureSecLinkConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)obtain_verifyExtraInfo;
+ (void)enableSeckLinkWithConfig:(id)a0 webView:(id)a1 verifyScene:(id)a2;

@end
