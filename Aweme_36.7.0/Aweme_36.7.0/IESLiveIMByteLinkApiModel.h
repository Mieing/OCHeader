@class HTSLiveUplinkPacket;

@interface IESLiveIMByteLinkApiModel : NSObject

@property (retain, nonatomic) HTSLiveUplinkPacket *reqPacket;
@property (copy, nonatomic) id /* block */ callBack;
@property (nonatomic) double timeout;
@property (nonatomic) double createTime;
@property (nonatomic) BOOL disableResp;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isTimeout;

@end
