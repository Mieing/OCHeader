@interface WCPayFaceHBScanQRCodeHandler : ScanQRCodeUrlPrefixHandler

- (void)handleUrl:(id)a0;
- (id)matchingPrefix;
- (void)onScanQRCodeUrlPrefixHandlerEnd;
- (char)QRCodeType;

@end
