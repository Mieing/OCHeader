@class NSMutableDictionary;

@interface WebviewAuthorizationCache : NSObject {
    NSMutableDictionary *_dicScope2ApiInfo;
}

- (id)init;
- (void)addScopeInfoList:(id)a0;
- (void)addScopeInfo:(id)a0 forScope:(id)a1;
- (void)removeScopeInfoForScope:(id)a0;
- (id)getScopeInfoForScope:(id)a0;
- (BOOL)isExistAuthInfoForScope:(id)a0;
- (BOOL)isNOUseScope:(id)a0;
- (BOOL)isAuthorizedScope:(id)a0;
- (BOOL)isExistAuthInfoForApi:(id)a0 inScope:(id)a1;
- (BOOL)isAuthorizedApi:(id)a0 inScope:(id)a1;
- (void).cxx_destruct;

@end
