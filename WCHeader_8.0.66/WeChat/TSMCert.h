@interface TSMCert : NSObject {
    void *_ctx;
}

+ (id)X509PEM2DER:(id)a0 error:(id *)a1;
+ (id)X509DER2PEM:(int)a0 der:(id)a1 error:(id *)a2;

- (id)init;
- (void)dealloc;
- (id)initCtx:(id *)a0;
- (void)setX509Item:(int)a0 pvalue:(void *)a1 ivalue:(int)a2 error:(id *)a3;
- (void)setX509CSRCommonItems:(id)a0 country:(id)a1 province:(id)a2 locality:(id)a3 organization:(id)a4 email:(id)a5 prikey:(id)a6 error:(id *)a7;
- (void)setX509CertCommonItems:(id)a0 capem:(id)a1 isca:(int)a2 serialnumber:(id)a3 prikey:(id)a4 validdays:(unsigned int)a5 error:(id *)a6;
- (void)clearX509Items:(id *)a0;
- (id)genX509SM2CSR:(id *)a0;
- (id)getX509SM2CSRItem:(id)a0 type:(int)a1 error:(id *)a2;
- (id)genX509SM2Cert:(id *)a0;
- (id)getX509SM2CertItem:(id)a0 type:(int)a1 error:(id *)a2;
- (BOOL)checkX509SM2CertRoot:(id)a0 error:(id *)a1;
- (BOOL)verifyX509SM2CertChain:(id)a0 capems:(id)a1 error:(id *)a2;

@end
