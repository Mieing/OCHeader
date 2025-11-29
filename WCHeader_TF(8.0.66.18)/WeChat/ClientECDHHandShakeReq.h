@class NSData;

@interface ClientECDHHandShakeReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *device4WxappEcdhPubKey;
@property (retain, nonatomic) NSData *device4ServerEcdhPubKey;
@property (retain, nonatomic) NSData *wxapp4DeviceEcdhPubKey;
@property (retain, nonatomic) NSData *localBaseKey;

+ (void)initialize;

@end
