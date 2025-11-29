@interface SECKeyChainService : NSObject

- (id)fetchFromKeychain:(id)a0;
- (BOOL)saveToKeyChain:(id)a0 withValue:(id)a1;
- (BOOL)deleteKeyChainWithKey:(id)a0;

@end
