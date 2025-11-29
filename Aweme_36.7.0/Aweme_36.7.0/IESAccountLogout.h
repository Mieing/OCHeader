@interface IESAccountLogout : NSObject

+ (void)handleResponseFilterSessionExpiredWithResponse:(id)a0 request:(id)a1;
+ (void)handleLostConnectionMessageWithDictionary:(id)a0;
+ (void)logoutCurrentUserWithScene:(long long)a0 extraParams:(id)a1;
+ (void)logoutCurrentUserWithScene:(long long)a0 extraParams:(id)a1 completion:(id /* block */)a2;

@end
