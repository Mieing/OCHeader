@interface IESGCPPrivacyConsentUtil : NSObject

+ (void)openSchemaWithSchema:(id)a0;
+ (void)checkConsentPrivacyAgreementWithCompletion:(id /* block */)a0;
+ (void)openPropUserProtocolPage;
+ (void)openPropPrivateProtocolPage;
+ (void)hideLandscapePanelsIfNeeded:(id /* block */)a0;

@end
