@interface ASSSecureOpenSdk : NSObject

+ (void)initToken:(id)a0 appKeyClient:(id)a1 parameters:(id)a2 callback:(id /* block */)a3;
+ (void)updateToken:(id)a0 appKeyClient:(id)a1 parameters:(id)a2 callback:(id /* block */)a3;
+ (void)setRpcConfiguration:(id)a0;
+ (id)getTokenResult;
+ (void)initToken:(id)a0 appKeyClient:(id)a1 callback:(id /* block */)a2;
+ (id)getExactID;
+ (void)setGatewayAddress:(id)a0;

@end
