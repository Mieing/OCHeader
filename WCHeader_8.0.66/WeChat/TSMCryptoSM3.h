@interface TSMCryptoSM3 : NSObject {
    void *_ctx;
    int _type;
}

+ (id)hash:(id)a0 error:(id *)a1;
+ (id)hmac:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)kdf:(id)a0 keylen:(unsigned int)a1 error:(id *)a2;

- (id)init;
- (id)initForHash:(id *)a0;
- (void)hashUpdate:(id)a0 error:(id *)a1;
- (id)hashFinal:(id *)a0;
- (id)initForHmac:(id)a0 error:(id *)a1;
- (void)hmacUpdate:(id)a0 error:(id *)a1;
- (id)hmacFinal:(id *)a0;

@end
