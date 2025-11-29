@class WCPayQRCodeRewardPayControlLogic, NSString;

@interface ScanWXCodeRewardUrlPrefixHandler : ScanWXCodeUrlPrefixHandler <WCPayQRCodeRewardPayControlLogicDelegate>

@property (retain, nonatomic) WCPayQRCodeRewardPayControlLogic *qrcodeRewardPayerLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)reportCount;
- (void)handleUrl:(id)a0;
- (id)matchingPrefixArray;
- (void)onQRCodeRewardPayLogicStop;
- (char)QRCodeType;
- (void).cxx_destruct;

@end
