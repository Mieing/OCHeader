@class NSString, MMPageSheetAdapter, TenpayHKCertUtil, MMVoidBoolCallback;

@interface WCPayHKOfflinePayLogicMgr : MMUserService <MMWebPageSheetDelegate, MMServiceProtocol>

@property (retain, nonatomic) TenpayHKCertUtil *hkCertUtil;
@property (retain, nonatomic) NSString *mmkvID;
@property (retain, nonatomic) MMPageSheetAdapter *webPageAdapter;
@property (retain, nonatomic) MMVoidBoolCallback *webPageSheetCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reloadOfflineCertObj;
- (id)getDeviceId;
- (BOOL)setDeviceId:(id)a0;
- (id)getCertId;
- (BOOL)setCertId:(id)a0;
- (void)removeCertId;
- (BOOL)isCertExists:(id)a0;
- (id)getLastSelectedCardBindSerial;
- (void)setLastSelectedCardBindSerial:(id)a0;
- (id)getLastSelectedCVItemId;
- (void)setLastSelectedCVItemId:(id)a0;
- (void)setOfflinePayAckKey:(id)a0;
- (id)getOfflinePayAckKey;
- (id)getCftCertSign:(id)a0 message:(id)a1;
- (BOOL)deleteCftCert:(id)a0;
- (id)getCftCSR:(id)a0;
- (BOOL)importCftCert:(id)a0 crt:(id)a1;
- (id)decryptByCftCert:(id)a0 encstr:(id)a1;
- (id)genAlgoToken:(id)a0 type:(int)a1 uid:(int)a2 seed:(id)a3 seedTime:(long long)a4 currentTime:(long long)a5 baseStep:(long long)a6 timeStepSize:(int)a7;
- (id)encryptByAes:(id)a0 key:(id)a1 iv:(id)a2;
- (id)decryptByAes:(id)a0 key:(id)a1 iv:(id)a2;
- (id)sha256Hex:(id)a0;
- (void)openHalfPageWebViewImpl:(id)a0 callback:(id)a1;
- (void)webPageSheetWillDismiss:(id)a0;
- (void)openScanQrCodeView;
- (void)openHKFacingReceiveView;
- (void).cxx_destruct;

@end
