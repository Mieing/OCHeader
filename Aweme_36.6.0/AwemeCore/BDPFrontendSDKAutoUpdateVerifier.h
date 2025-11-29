@interface BDPFrontendSDKAutoUpdateVerifier : NSObject

+ (BOOL)checkSchemaValid:(id)a0;
+ (id)jointSDKUpdateSchemaInfo:(id)a0;
+ (id)jointSDKHotUpdateSchemaInfo:(id)a0;
+ (id)decryptData:(id)a0 publicKey:(id)a1 error:(id *)a2;

@end
