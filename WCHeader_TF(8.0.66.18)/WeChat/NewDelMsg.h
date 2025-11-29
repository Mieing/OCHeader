@class NSString;

@interface NewDelMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) int msgId;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) long long newMsgId;

+ (void)initialize;

@end
