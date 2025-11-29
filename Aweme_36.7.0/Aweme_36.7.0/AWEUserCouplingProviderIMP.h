@class NSString;

@interface AWEUserCouplingProviderIMP : NSObject <AWEUserCouplingProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hitRankWithStarID:(id)a0;
- (id)termsOfUseURL;
- (id)cookiesPolicyURL;
- (id)musicallyTermsOfUseUrl;
- (id)musicallyPrivacyPolicyUrl;
- (id)privacyPolicyURL;

@end
