@interface BDPStarkBridge : NSObject

+ (id)shareInstance;

- (void)invoke:(id)a0 param:(id)a1 completion:(id /* block */)a2;
- (void)processMessage:(id)a0 message:(id)a1 param:(id)a2 completion:(id /* block */)a3;

@end
