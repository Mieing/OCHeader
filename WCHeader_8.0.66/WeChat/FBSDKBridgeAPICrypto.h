@interface FBSDKBridgeAPICrypto : NSObject

+ (void)addCipherKeyToQueryParameters:(id)a0;
+ (id)decryptResponseForRequest:(id)a0 queryParameters:(id)a1 error:(id *)a2;
+ (void)reset;
+ (id)_cipherKey;
+ (id)_resetCipherKey;

@end
