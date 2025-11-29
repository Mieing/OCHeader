@class NSString;

@interface AffRoamMacDeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tcpIp;
@property (nonatomic) int tcpPort;
@property (nonatomic) int usbmuxdPort;
@property (retain, nonatomic) NSString *bindTicket;

+ (void)initialize;

@end
