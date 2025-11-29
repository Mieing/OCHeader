@class NSString;

@interface KindaOfflinePayService : NSObject <MMKOfflinePayService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)tsmModeEnable;
- (int)getCodever;
- (id)getDeviceid;
- (BOOL)setCodever:(int)a0;
- (BOOL)setDeviceid:(id)a0;
- (id)getCertid;
- (BOOL)setCertid:(id)a0;
- (BOOL)isCertExists:(id)a0;
- (id)getLastSelectedCardBindSerial;
- (id)getLastSelectedCardBankType;
- (id)getTokenPin;
- (void)setLastSelectedCardBindSerial:(id)a0 bankType:(id)a1;
- (BOOL)setTokenPin:(id)a0;
- (id)getCftCertSign:(id)a0 message:(id)a1;
- (void)cleanCftToken:(id)a0;
- (BOOL)deleteCftCert:(id)a0;
- (void)removeCertid;
- (id)getCftToken:(id)a0;
- (int)getRemainCftTokenNum:(id)a0;
- (BOOL)setCftTokenCode:(id)a0 certid:(id)a1;
- (long long)getLastTokenUpdateTs;
- (void)setLastTokenUpdateTs:(long long)a0;
- (int)getRegetTokenNum;
- (int)getTokenUpdateInterval;
- (void)setRegetTokenNum:(int)a0;
- (void)setTokenUpdateInterval:(int)a0;
- (BOOL)getOfflinePayHasSuccess;
- (void)setOfflinePayHasSuccess;
- (id)getCftCSR:(id)a0;
- (BOOL)importCftCert:(id)a0 crt:(id)a1;
- (id)decryptByCftCert:(id)a0 encstr:(id)a1;
- (void)setOfflineStateClose;
- (void)setOfflineStateOpen;
- (id)getOfflinePayAckKey;
- (void)setOfflinePayAckKey:(id)a0;
- (id)getCertCAVersion;
- (void)updateCert:(id)a0 rootCaChains:(id)a1;
- (BOOL)setKindaOfflinePayCertType:(int)a0;
- (int)getKindaOfflinePayCertType;
- (BOOL)setKindaOfflinePayCsrCertType:(int)a0;
- (int)getKindaOfflinePayCsrCertType;
- (id)getSignUserId;

@end
