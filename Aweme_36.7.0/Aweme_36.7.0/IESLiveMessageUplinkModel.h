@class HTSLiveUplinkPacket;

@interface IESLiveMessageUplinkModel : NSObject

@property (retain, nonatomic) HTSLiveUplinkPacket *reqPacket;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long routeServiceId;
@property (nonatomic) double timeout;
@property (nonatomic) double createTime;

- (BOOL)isTimeoutRequest;
- (void).cxx_destruct;
- (id)init;

@end
