@class CJPaySafeManager;

@interface CJPaySafeUtil : NSObject

@property (copy, nonatomic) CJPaySafeManager *safeManager;

+ (id)objEncryptField:(id)a0 engimaEngine:(id)a1;
+ (id)objEncryptPWD:(id)a0 engimaEngine:(id)a1;
+ (id)objDecryptContentFromH5:(id)a0 engimaEngine:(id)a1;
+ (id)encryptField:(id)a0;
+ (id)encryptPWD:(id)a0;
+ (id)encryptContentFromH5:(id)a0 token:(id)a1;
+ (id)encryptContentFromH5:(id)a0;
+ (id)decryptContentFromH5:(id)a0;
+ (void)objEncryptField:(id)a0 engimaEngine:(id)a1 completion:(id /* block */)a2;
+ (id)encryptPWD:(id)a0 serialNumber:(id)a1;
+ (void)encryptPWD:(id)a0 serialNumber:(id)a1 completion:(id /* block */)a2;
+ (id)encryptPWD:(id)a0 serialNumber:(id)a1 engimaEngine:(id)a2;
+ (void)encryptPWD:(id)a0 serialNumber:(id)a1 engimaEngine:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;

@end
