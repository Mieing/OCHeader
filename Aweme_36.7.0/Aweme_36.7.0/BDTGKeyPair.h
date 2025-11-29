@interface BDTGKeyPair : NSObject

+ (id)csrWithPrivateKey:(struct __SecKey { } *)a0 keyType:(id)a1;
+ (struct __SecKey { } *)cachedReePrivateKeyInSandboxWithError:(id *)a0;
+ (struct __SecKey { } *)cachedPrivateKeyInKeyChainWithType:(id)a0 error:(id *)a1;
+ (id)tagForKeyType:(id)a0;
+ (struct __SecKey { } *)createReePrivateKeyWithError:(id *)a0;
+ (struct __SecKey { } *)createTeePrivateKeyWithError:(id *)a0;
+ (id)secKeyConfigForTee;
+ (struct __SecKey { } *)p_createPrivateKeyWithParams:(id)a0 error:(id *)a1;
+ (id)publicKeyBitsWithPublicKey:(struct __SecKey { } *)a0 error:(id *)a1;
+ (id)publicKeyBitsWithPrivateKey:(struct __SecKey { } *)a0 error:(id *)a1;
+ (id)createCSRWithPublicKeyBits:(id)a0 privateKey:(struct __SecKey { } *)a1 keyType:(id)a2;
+ (id)buildCSRInfoWithPublicKeyBits:(id)a0;
+ (id)createSignatureForData:(id)a0 privateKey:(struct __SecKey { } *)a1 keyType:(id)a2;
+ (id)buidCSRStringWithSignedCSR:(id)a0;
+ (id)buildPublicKeyInfo:(id)a0;
+ (id)p_createSignatureForData:(id)a0 privateKey:(struct __SecKey { } *)a1 error:(id *)a2;
+ (struct __SecKey { } *)publicKeyWithCert:(id)a0 error:(id *)a1;
+ (struct __SecCertificate { } *)certRefWithDecodedCertString:(id)a0 error:(id *)a1;
+ (struct __SecKey { } *)cachedPrivateKeyWithType:(id)a0 error:(id *)a1;
+ (struct __SecKey { } *)privateKeyWithType:(id)a0 error:(id *)a1;
+ (id)secKeyConfigForRee:(BOOL)a0;
+ (id)createSignatureForString:(id)a0 privateKey:(struct __SecKey { } *)a1 keyType:(id)a2;
+ (id)ecdhKeyWithServerCert:(id)a0 clientPrivateKey:(struct __SecKey { } *)a1 error:(id *)a2;
+ (id)privateKeyCreateLogForType:(id)a0;
+ (id)hmacForString:(id)a0 symmetricKey:(id)a1;
+ (id)serverCertSequenceNumberFromCert:(id)a0;

@end
