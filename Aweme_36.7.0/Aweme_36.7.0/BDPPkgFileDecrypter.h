@class NSString, NSData, NSArray;

@interface BDPPkgFileDecrypter : NSObject <BDPPkgFileDecryptionProtocol> {
    NSData *_keySeedData;
    NSArray *_textFileSubfixes;
}

@property (nonatomic) long long decryptDurationNS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decrypterWithKey:(id)a0;

- (void)decryptedMutableData:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)decryptFileWithName:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
