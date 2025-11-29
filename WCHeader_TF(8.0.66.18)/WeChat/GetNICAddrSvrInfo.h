@class NSString, VoipAddr;

@interface GetNICAddrSvrInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nicDeviceId;
@property (retain, nonatomic) VoipAddr *punchSvr;

+ (void)initialize;

@end
