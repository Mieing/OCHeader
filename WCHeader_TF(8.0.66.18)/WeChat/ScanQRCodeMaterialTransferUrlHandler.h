@interface ScanQRCodeMaterialTransferUrlHandler : ScanQRCodeTransferUrlHandler

- (void)dealloc;
- (void)reportCount;
- (void)handleUrl:(id)a0;
- (id)matchingPrefix;
- (id)matchingPrefixes;
- (char)QRCodeType;

@end
