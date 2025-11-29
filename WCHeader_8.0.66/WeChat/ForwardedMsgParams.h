@class NSString;

@interface ForwardedMsgParams : WXPBGeneratedMessage

@property (nonatomic) int forwardMessageMsgType;
@property (retain, nonatomic) NSString *forwardMessageSource;

+ (void)initialize;

@end
