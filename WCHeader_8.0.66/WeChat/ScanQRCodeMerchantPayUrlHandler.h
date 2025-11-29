@interface ScanQRCodeMerchantPayUrlHandler : ScanQRCodeTransferUrlHandler

- (void)dealloc;
- (void)reportCount;
- (void)handleUrl:(id)a0;
- (id)matchingPrefix;
- (id)matchingPrefixes;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (char)QRCodeType;

@end
