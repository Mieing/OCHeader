@class NSMutableArray;

@interface GameMsgSecurityCheck : NSObject <PBMessageObserverDelegate> {
    NSMutableArray *_msgTask;
    NSMutableArray *_sigConf;
    BOOL _isFetchingConfig;
}

- (id)init;
- (unsigned int)getVerifyModel;
- (void)reportSecurityCheck:(id)a0 withError:(long long)a1;
- (void)reportSecurityCheck:(long long)a0 withDesc:(id)a1;
- (BOOL)checkIconSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)verifyMsgField:(id)a0;
- (void)checkMsgSecurity:(id)a0 completeBlock:(id /* block */)a1;
- (BOOL)checkSigVer:(id)a0;
- (void)requestSignatureConfig;
- (void)loadSignatureConfig;
- (void)saveSignatureConfig:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onGetReddotSignatureConf:(id)a0;
- (BOOL)checkMsgTask;
- (id)getConfigByVer:(int)a0;
- (BOOL)checkSignature:(id)a0;
- (id)encryptData:(id)a0;
- (id)decodeData:(id)a0;
- (id)getStringForPath:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 path:(id)a1;
- (id)HmacSha256:(id)a0 key:(id)a1;
- (void)refreshSignatureConfig;
- (void).cxx_destruct;

@end
