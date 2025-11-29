@interface HMDNetworkInjector : NSObject

@property (copy) id /* block */ injectedEncryptBlock;

+ (id)sharedInstance;

- (id /* block */)encryptBlock;
- (void)configEncryptBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
