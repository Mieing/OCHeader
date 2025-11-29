@class NSString;

@interface AiChatOpenInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int aiChatOpen;
@property (nonatomic) unsigned int pollInterval;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSString *stringBizuin;

+ (void)initialize;

@end
