@interface BDPURLPermissionAuthorizerIG : NSObject

+ (long long)checkNetworkURL:(id)a0 authType:(long long)a1 uniqueID:(id)a2;
+ (id)defaultSchemaSupportList:(id)a0;
+ (id)domainsListWithAuthType:(long long)a0 uniqueID:(id)a1;
+ (long long)p_checkAuthorizationTypeOfURL:(id)a0 authType:(long long)a1 uniqueID:(id)a2;

@end
