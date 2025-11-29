@class WxSmCertUtil, NSString;

@interface WCPayOfflinePayTsmLogicMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WxSmCertUtil *smCertUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reloadOfflineTsmCertObj;
- (BOOL)isOfflinePayCertExists:(id)a0;
- (id)getTokenPrefix;
- (id)getTsmCertSign:(id)a0 message:(id)a1;
- (id)getTsmToken:(id)a0;
- (void)cleanTsmToken:(id)a0;
- (BOOL)deleteTsmCert:(id)a0;
- (int)getRemainTsmTokenCount:(id)a0;
- (BOOL)setTsmTokenCode:(id)a0 certId:(id)a1;
- (id)getTsmCSR:(id)a0;
- (BOOL)importTsmCert:(id)a0 crt:(id)a1;
- (id)decryptByTsmCert:(id)a0 message:(id)a1;
- (id)getTsmCertCAVersion;
- (void)updateTsmCertWithCAVersion:(id)a0 rootCaChains:(id)a1;
- (id)getTsmSignUserId;
- (void).cxx_destruct;

@end
