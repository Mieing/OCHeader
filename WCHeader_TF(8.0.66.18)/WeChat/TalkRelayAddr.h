@class NSString;

@interface TalkRelayAddr : WXPBGeneratedMessage

@property (nonatomic) unsigned int ip;
@property (nonatomic) unsigned int port;
@property (retain, nonatomic) NSString *ipStr;

+ (void)initialize;

@end
