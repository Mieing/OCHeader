@class NSString;

@interface DeviceNetworkCardInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ip;
@property (retain, nonatomic) NSString *mask;
@property (retain, nonatomic) NSString *dns;

+ (void)initialize;

@end
