@interface APaySecurity : NSObject

+ (id)sharedSecurity;

- (id)encryptData:(id)a0 withInfo:(struct APTaskInfoData { unsigned char x0[30]; })a1;
- (id)decryptData:(id)a0 withInfo:(struct APTaskInfoData { unsigned char x0[30]; })a1;
- (void)savePublicKey:(id)a0;
- (id)publicKey;

@end
