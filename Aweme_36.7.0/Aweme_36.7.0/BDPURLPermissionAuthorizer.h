@interface BDPURLPermissionAuthorizer : NSObject

+ (long long)checkNetworkURL:(id)a0 authType:(long long)a1 uniqueID:(id)a2;
+ (long long)checkNetworkURL:(id)a0 authType:(long long)a1 pluginID:(id)a2 uniqueID:(id)a3;
+ (id)defaultSchemaSupportList:(id)a0;
+ (id)domainsListWithSchemaType:(long long)a0 uniqueID:(id)a1;
+ (id)domainsListWithAuthType:(long long)a0 uniqueID:(id)a1;
+ (id)domainsListWithAuthType:(long long)a0 uniqueID:(id)a1 pluginID:(id)a2;
+ (long long)p_checkAuthorizationTypeOfURL:(id)a0 authType:(long long)a1 uniqueID:(id)a2;
+ (long long)p_checkAuthorizationTypeOfURL:(id)a0 authType:(long long)a1 pluginID:(id)a2 uniqueID:(id)a3;
+ (BOOL)isWildcardDomainEnhanced:(id)a0 checkDomain:(id)a1;
+ (BOOL)isValidNetworkURL:(id)a0 authType:(long long)a1 uniqueID:(id)a2;
+ (long long)checkWebViewURL:(id)a0 uniqueID:(id)a1;
+ (long long)checkWebViewSubFrameURL:(id)a0 mainFrameURL:(id)a1 uniqueID:(id)a2;
+ (long long)checkWebViewRecorderURL:(id)a0 uniqueID:(id)a1;

@end
