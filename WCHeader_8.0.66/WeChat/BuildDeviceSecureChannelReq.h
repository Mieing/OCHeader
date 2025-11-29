@class ClientECDHHandShakeReq, BaseRequest, ClientPSKHandShakeReq, ClientBaseHandShakeReq;

@interface BuildDeviceSecureChannelReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) ClientECDHHandShakeReq *ecdhReq;
@property (retain, nonatomic) ClientPSKHandShakeReq *pskReq;
@property (retain, nonatomic) ClientBaseHandShakeReq *handshakeBaseReq;
@property (nonatomic) unsigned int reqHandshakeTypeFlag;

+ (void)initialize;

@end
