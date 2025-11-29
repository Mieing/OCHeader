@interface BDPLocationPermissionScopeUtil : NSObject

+ (BOOL)isBDPAuthorizedForUniqueID:(id)a0;
+ (BOOL)isAuthorizedForUniqueID:(id)a0;
+ (void)getAuthorizedForUniqueID:(id)a0 completion:(id /* block */)a1;

@end
