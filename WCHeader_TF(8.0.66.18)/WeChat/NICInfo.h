@class NSString;

@interface NICInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nicDeviceId;
@property (nonatomic) int nicRole;
@property (retain, nonatomic) NSString *nicIspInfo;
@property (nonatomic) int netType;
@property (retain, nonatomic) NSString *wanIp;

+ (void)initialize;

@end
