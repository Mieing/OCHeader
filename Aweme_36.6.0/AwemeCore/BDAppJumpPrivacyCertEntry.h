@interface BDAppJumpPrivacyCertEntry : BDPrivacyCertEntry

+ (void)openURL:(id)a0 withCert:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
+ (BOOL)openURL:(id)a0 withCert:(id)a1 error:(id *)a2;
+ (id)initSKStoreWithCert:(id)a0 error:(id *)a1;
+ (BOOL)discardDeprecatedAPI;

@end
