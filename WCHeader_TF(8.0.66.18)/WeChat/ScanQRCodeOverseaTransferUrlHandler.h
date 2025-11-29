@class NSString;

@interface ScanQRCodeOverseaTransferUrlHandler : ScanQRCodeUrlPrefixHandler <WCBaseControlMgrExt, WCPayLogicMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)reportCount;
- (void)handleUrl:(id)a0;
- (id)matchingPrefix;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;

@end
