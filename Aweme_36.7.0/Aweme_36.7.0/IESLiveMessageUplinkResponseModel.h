@class HTSLiveUplinkPacket;

@interface IESLiveMessageUplinkResponseModel : NSObject

@property (retain, nonatomic) HTSLiveUplinkPacket *reqPacket;
@property (retain, nonatomic) HTSLiveUplinkPacket *rspPacket;

- (void).cxx_destruct;

@end
