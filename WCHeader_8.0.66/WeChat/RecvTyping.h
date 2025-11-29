@class NSData;

@interface RecvTyping : WXPBGeneratedMessage

@property (nonatomic) unsigned int seq;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSData *sender;

+ (void)initialize;

@end
