@interface TTAccountLogoutTask : NSObject

+ (id)requestLogoutWithScene:(long long)a0 completion:(id /* block */)a1;
+ (id)requestLogoutWithScene:(long long)a0 extraInfo:(id)a1 completion:(id /* block */)a2;
+ (id)requestLogoutPlatform:(id)a0 completion:(id /* block */)a1;
+ (id)requestLogoutWithScene:(long long)a0 param:(id)a1 completion:(id /* block */)a2;
+ (id)logoutFrom:(long long)a0;
+ (id /* block */)buildCallback:(long long)a0 from:(id)a1 params:(id)a2 logoutFromParams:(id)a3 completion:(id /* block */)a4;
+ (BOOL)isLocalLogoutScene:(long long)a0;

@end
