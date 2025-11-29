@class NSString;

@interface VoipCSAddr : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ip;
@property (nonatomic) int port;

+ (void)initialize;

@end
