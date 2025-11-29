@class NSString;

@interface AffRoamNasDeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tcpIp;
@property (nonatomic) int tcpPort;
@property (retain, nonatomic) NSString *bindTicket;

+ (void)initialize;

@end
