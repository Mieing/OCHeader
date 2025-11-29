@class NSString, IsecGM;

@interface CJPayISecEngimaImpl : NSObject <CJPayEngimaProtocol>

@property (retain, nonatomic) IsecGM *engimaEngine;
@property (copy, nonatomic) NSString *customCert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getEngimaProtocolBy:(id)a0 useCert:(id)a1;
+ (id)getEngimaProtocolBy:(id)a0;
+ (id)oneKeyAssemble;
+ (BOOL)shouldOneKeyAssemble;
+ (id)globalSM4KeyData;

- (id)encryptWith:(id)a0 errorCode:(int *)a1;
- (id)encryptWithData:(id)a0 errorCode:(int *)a1;
- (id)decryptWith:(id)a0 errorCode:(int *)a1;
- (id)sm4Decrypt:(id)a0 key:(id)a1 errorCode:(int *)a2;
- (id)sm4Encrypt:(id)a0 key:(id)a1 errorCode:(int *)a2;
- (id)defaultToken;
- (id)p_customEncryptWith:(id)a0 errorCode:(int *)a1;
- (id)p_currentPayToken;
- (id)p_customDecryptWith:(id)a0 errorCode:(int *)a1;
- (id)p_customEncryptWithData:(id)a0 errorCode:(int *)a1;
- (void).cxx_destruct;

@end
