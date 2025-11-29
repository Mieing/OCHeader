@class NSData;

@interface SendTyping : WXPBGeneratedMessage

@property (nonatomic) unsigned int seq;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSData *receiver;
@property (retain, nonatomic) NSData *ticket;

+ (void)initialize;

@end
