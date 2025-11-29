@class NSString;

@interface VoipAddr : WXPBGeneratedMessage

@property (nonatomic) int ip;
@property (nonatomic) int port;
@property (retain, nonatomic) NSString *ipStr;

+ (void)initialize;

@end
