@interface APDID : NSObject

+ (void)initToken:(id)a0 callback:(id /* block */)a1;
+ (void)updateToken:(id)a0 callback:(id /* block */)a1;
+ (id)getTokenResult;
+ (void)initToken:(id)a0 appKeyClient:(id)a1 sessionId:(id)a2 callback:(id /* block */)a3;
+ (void)initToken:(id)a0 appKeyClient:(id)a1 callback:(id /* block */)a2;
+ (id)getResultToken:(id)a0 appKeyClient:(id)a1;
+ (id)getResultToken;
+ (id)getTokenResult:(id)a0 appKeyClient:(id)a1;
+ (id)getToken;

@end
