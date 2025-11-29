@interface ASSSecureSdk : NSObject

+ (id)getTokenResult;
+ (id)getUtdid;
+ (void)initToken:(long long)a0 utdid:(id)a1 tid:(id)a2 callback:(id /* block */)a3;
+ (void)initToken:(long long)a0 parameters:(id)a1 callback:(id /* block */)a2;
+ (void)saveTrustData:(id)a0;
+ (id)loadTrustData;

@end
