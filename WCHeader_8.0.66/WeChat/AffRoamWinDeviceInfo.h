@class NSString;

@interface AffRoamWinDeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tcpIp;
@property (nonatomic) int tcpPort;
@property (retain, nonatomic) NSString *bindTicket;
@property (nonatomic) int usbmuxdPort;

+ (void)initialize;

@end
