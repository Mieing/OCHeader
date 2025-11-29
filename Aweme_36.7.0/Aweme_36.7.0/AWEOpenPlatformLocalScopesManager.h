@interface AWEOpenPlatformLocalScopesManager : NSObject

+ (id)allLocalScopes;
+ (void)authScope:(id)a0 forClientKey:(id)a1;
+ (BOOL)checkScope:(id)a0 validPeriod:(long long)a1 forClientKey:(id)a2;
+ (void)reomoveScope:(id)a0 forClientKey:(id)a1;
+ (long long)getValidPeriodFromSettings;
+ (id)fetchValidPermissionsForCurrentUserWithClientKey:(id)a0 validPeriod:(long long)a1;
+ (id)storageKeyForClientKey:(id)a0;

@end
