@interface BDPURLPermissionAuthorizer_HG : NSObject

+ (BOOL)checkAuthorizationURL:(id)a0 authType:(long long)a1 uniqueID:(id)a2 error:(id *)a3;
+ (id)defaultSchemaSupportList:(id)a0;
+ (id)domainsListWithAuthType:(long long)a0 uniqueID:(id)a1;

@end
