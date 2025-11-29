@interface BDPUserInfoUtils : NSObject

+ (void)getUserOpenIDWithParams:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
+ (id)tryGetOpenIDFromLocalWithUniqueID:(id)a0;
+ (void)getUserOpenIDWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)getSessionWithParams:(id)a0 uniqueID:(id)a1;
+ (void)saveOpenIDToLocalWithUniqueID:(id)a0 value:(id)a1;
+ (id)getKeyOfOpenIDCacheWithUniqueID:(id)a0;

@end
