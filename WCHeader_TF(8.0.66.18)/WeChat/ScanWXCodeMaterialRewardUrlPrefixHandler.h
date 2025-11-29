@class WCPayQRCodeRewardPayControlLogic, WCPayScanMaterialRewardCodeCgi, NSString;

@interface ScanWXCodeMaterialRewardUrlPrefixHandler : ScanWXCodeUrlPrefixHandler <WCPayQRCodeRewardPayControlLogicDelegate, WCPayScanMaterialRewardCodeCgiDelegate, MMWebViewDelegate>

@property (retain, nonatomic) WCPayQRCodeRewardPayControlLogic *qrcodeRewardPayerLogic;
@property (retain, nonatomic) WCPayScanMaterialRewardCodeCgi *scanMaterialRewardCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)reportCount;
- (void)handleUrl:(id)a0;
- (void)onGetMaterialRewardCodeScanResp:(id)a0;
- (void)errorAlertViewClick;
- (id)matchingPrefixArray;
- (void)onQRCodeRewardPayLogicStop;
- (void)webViewReturn:(id)a0;
- (char)QRCodeType;
- (void).cxx_destruct;

@end
