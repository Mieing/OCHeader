@class NSString, GetQRCodeInfoLogic;

@interface LiteAppJsApiFetchQRCodeInfo : LiteAppJsApi <GetQRCodeInfoLogicDelegate>

@property (retain, nonatomic) GetQRCodeInfoLogic *qrCodeInfoLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (id)scanQRCodeLogic;
- (id)getQRCodeInfoLogic;
- (void)onGetQRCodeInfoResultFailure:(unsigned int)a0;
- (void)onGetQRCodeInfoResultSuccess:(unsigned int)a0 qrCodeInfoItem:(id)a1;
- (void).cxx_destruct;

@end
