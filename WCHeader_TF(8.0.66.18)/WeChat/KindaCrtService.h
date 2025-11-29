@class NSString, MMVoidCallback, MMVoidStringCallback, WCPayGenDigitalCertCgi, WCPayDeleteDigitalCertCgi;

@interface KindaCrtService : NSObject <WCPayGenDigitalCertCgiDelegate, WCPayDeleteDigitalCertCgiDelegate, MMKCrtService>

@property (retain, nonatomic) WCPayGenDigitalCertCgi *m_genDigitalCertCgi;
@property (retain, nonatomic) MMVoidCallback *m_successCallback;
@property (retain, nonatomic) MMVoidStringCallback *m_failCallback;
@property (retain, nonatomic) WCPayDeleteDigitalCertCgi *m_deleteCertCgi;
@property (retain, nonatomic) MMVoidCallback *m_deleteSuccessCallback;
@property (retain, nonatomic) MMVoidStringCallback *m_deleteFailCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)updateCurrentDeviceCertNoWithInfo:(id)a0;
- (BOOL)hasCrt;
- (BOOL)isCrtExist:(id)a0;
- (id)getCrtNo;
- (id)sign:(id)a0 data:(id)a1;
- (void)startGenDigitalCrtImpl:(id)a0 successCallback:(id)a1 failCallback:(id)a2;
- (void)startDeleteDigitalCrtImpl:(id)a0 successCallback:(id)a1 failCallback:(id)a2;
- (void)delCert;
- (void)sendDeleteCertCgi:(id)a0;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)a0;
- (void)onWCPayDeleteDigitalCertCgiWithResp:(id)a0;
- (void)reportSignError:(int)a0;
- (void).cxx_destruct;

@end
