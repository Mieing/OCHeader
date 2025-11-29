@class NSString, DigitalCertLocalConfig;

@interface WCPayDigitalCertMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSString *m_digitalCertNo;
@property (retain, nonatomic) DigitalCertLocalConfig *digitalCertLocalConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)onServiceInit;
- (int)getError;
- (id)getDigitalCertNo;
- (id)updateCurrentDeviceCertNoWithInfo:(id)a0;
- (void)updateWithTenPayResponseDic:(id)a0;
- (void)clearDigitalCert;
- (void)delCurrentDigitalCert;
- (void)clearDigitalCertLocalConfig;
- (int)currentType;
- (void)loadDigitalCertFromDisk;
- (void)updateDigitalLocalCertConfig:(id)a0 cert:(id)a1 encryptType:(int)a2;
- (id)makeCsr:(id)a0 commonName:(id)a1 encryptType:(int)a2 csrType:(int)a3;
- (BOOL)importCert:(id)a0 certId:(id)a1 encryptType:(int)a2;
- (id)certSign:(id)a0 message:(id)a1;
- (id)getUserIdData;
- (id)certDecrypt:(id)a0 cipher:(id)a1;
- (void)delCert:(id)a0;
- (BOOL)hasCert:(id)a0;
- (void).cxx_destruct;

@end
