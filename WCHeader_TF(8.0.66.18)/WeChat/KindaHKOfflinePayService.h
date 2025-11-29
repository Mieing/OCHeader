@class NSString;

@interface KindaHKOfflinePayService : NSObject <MMKHKOfflinePayService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getDeviceid;
- (BOOL)setDeviceid:(id)a0;
- (id)getCertid;
- (BOOL)setCertid:(id)a0;
- (void)removeCertid;
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
- (void)openScanQrCodeView;
- (void)openHKFacingReceiveView;

@end
