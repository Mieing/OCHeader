@interface CAESCrypt : NSObject {
    struct _CCCryptor { } *m_cryptorRef;
}

+ (id)fastAESEncryptWithKey:(id)a0 Data:(id)a1;
+ (id)fastAESDecryptWithKey:(id)a0 Data:(id)a1;
+ (id)fastAESECBEncryptWithKey:(id)a0 Data:(id)a1 Final:(BOOL)a2;
+ (id)fastAESECBDecryptWithKey:(id)a0 Data:(id)a1 Final:(BOOL)a2;
+ (id)AESEncryptWithKey:(id)a0 Data:(id)a1;
+ (id)AESDecryptWithKey:(id)a0 Data:(id)a1;
+ (id)AESECBEncryptWithKey:(id)a0 Data:(id)a1 Final:(BOOL)a2;
+ (id)AESECBDecryptWithKey:(id)a0 Data:(id)a1 Final:(BOOL)a2;
+ (id)AESGCMEncryptWithKey:(id)a0 Data:(id)a1;
+ (id)AESGCMDecryptWithKey:(id)a0 Data:(id)a1;
+ (id)HKDFWithSalt:(id)a0 key:(id)a1 info:(id)a2 resultLen:(unsigned int)a3;

- (void)dealloc;
- (id)initCBCEncryptWithKey:(id)a0;
- (id)initCBCDecryptWithKey:(id)a0;
- (id)initECBEncryptWithKey:(id)a0;
- (id)initECBDecryptWithKey:(id)a0;
- (void)makeCryptWithOP:(unsigned int)a0 withMode:(unsigned int)a1 withKey:(id)a2;
- (id)cryptUpdateWithData:(id)a0 Final:(BOOL)a1;
- (id)encryptCBCWithData:(id)a0 Final:(BOOL)a1;
- (id)decryptCBCWithData:(id)a0 Final:(BOOL)a1;
- (id)encryptECBWithData:(id)a0 Final:(BOOL)a1;
- (id)decryptECBWithData:(id)a0 Final:(BOOL)a1;

@end
