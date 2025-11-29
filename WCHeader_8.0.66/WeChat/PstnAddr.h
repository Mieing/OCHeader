@class NSString;

@interface PstnAddr : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ip;
@property (nonatomic) int port;

+ (void)initialize;

@end
