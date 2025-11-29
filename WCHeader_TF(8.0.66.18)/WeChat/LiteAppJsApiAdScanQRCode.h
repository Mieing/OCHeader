@class NSString;

@interface LiteAppJsApiAdScanQRCode : LiteAppJsApiAdBase

@property (retain, nonatomic) NSString *qrUrl;
@property (retain, nonatomic) NSString *qrExtInfo;

- (void)doAdInvokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)scanQRCode:(id)a0 qrExtInfo:(id)a1;
- (void)onUpdateQrCode:(id)a0 componentId:(id)a1 snsId:(id)a2;
- (void).cxx_destruct;

@end
