@interface CJPayAuthUtil : NSObject

+ (void)authWithJumpModel:(id)a0 fromVC:(id)a1 trackDelegate:(id)a2 completion:(id /* block */)a3;
+ (void)p_gotoAuthWithSchema:(id)a0 completion:(id /* block */)a1;
+ (void)p_authCallBackWithResponse:(id)a0 completion:(id /* block */)a1;
+ (void)authWithUserInfo:(id)a0 fromVC:(id)a1 trackDelegate:(id)a2 completion:(id /* block */)a3;

@end
