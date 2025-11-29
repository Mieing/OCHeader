@interface BDPGamePermissionNetwork

+ (void /* unknown type, empty encoding */)initialize;
+ (void)fetchAuthRecord:(id)a0 params:(id)a1 scopes:(id)a2 completion:(id /* block */)a3;
+ (void)fetchNoAdsStatusRecordWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchSaveUserScopeAuthRecord:(id)a0 params:(id)a1 completion:(id /* block */)a2;

@end
