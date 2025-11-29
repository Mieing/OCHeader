@class WCPayPayAuthNativeCgi, NSString;

@interface ScanQRCodeBizUrlHandler : ScanQRCodeUrlPrefixHandler <WCBaseControlMgrExt, WCPayPayAuthNativeCgiDelegate, MMUseCaseCallback>

@property (retain, nonatomic) WCPayPayAuthNativeCgi *m_payNativeCgi;
@property (nonatomic) unsigned int m_sourceType;
@property (retain, nonatomic) NSString *m_sourceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)reportCount;
- (void)handleUrl:(id)a0;
- (void)call:(id)a0;
- (id)matchingPrefix;
- (void)onWCPayPayAuthNativeCgiWithResp:(id)a0;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (char)QRCodeType;
- (void).cxx_destruct;

@end
