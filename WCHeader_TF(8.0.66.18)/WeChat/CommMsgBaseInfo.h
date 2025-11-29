@class NSString;

@interface CommMsgBaseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int dateTime;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int funcFlag;
@property (retain, nonatomic) NSString *uniqueId;

+ (void)initialize;

@end
