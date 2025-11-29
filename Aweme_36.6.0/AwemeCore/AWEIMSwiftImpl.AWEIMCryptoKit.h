@interface AWEIMSwiftImpl.AWEIMCryptoKit : HTSService <IESIMCryptoKitServiceProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_useKeyCache;
    void /* unknown type, empty encoding */ $__lazy_storage_$_keyCache;
}

- (id)hexDataWithKey:(id)a0;
- (id)decryptAES256GCMWithData:(id)a0 key:(id)a1;
- (id)encryptAES256GCMWithData:(id)a0 key:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
