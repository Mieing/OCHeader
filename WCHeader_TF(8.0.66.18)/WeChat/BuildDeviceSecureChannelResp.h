@class ServerPSKHandShakeResp, ServerECDHHandShakeResp, ServerBaseHandShakeResp, BaseResponse;

@interface BuildDeviceSecureChannelResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ServerECDHHandShakeResp *ecdhResp;
@property (retain, nonatomic) ServerPSKHandShakeResp *pskResp;
@property (retain, nonatomic) ServerBaseHandShakeResp *handshakeBaseResp;
@property (nonatomic) unsigned int respHandshakeTypeFlag;

+ (void)initialize;

@end
