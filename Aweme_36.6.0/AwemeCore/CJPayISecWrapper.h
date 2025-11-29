@class IsecGM;

@interface CJPayISecWrapper : NSObject

@property (retain, nonatomic) IsecGM *sec;

- (id)sm2EncryptMessage:(id)a0 withPublicKey:(id)a1 withDerEncode:(BOOL)a2 withError:(long long *)a3;
- (id)sm2SignMessage:(id)a0 withPrivateKey:(id)a1 withDerEncode:(BOOL)a2 withError:(long long *)a3;
- (BOOL)sm2VerifyMessage:(id)a0 withPublicKey:(id)a1 withSign:(id)a2 withError:(long long *)a3;
- (id)sm3DigestMessage:(id)a0 withError:(long long *)a1;
- (void).cxx_destruct;
- (id)init;

@end
