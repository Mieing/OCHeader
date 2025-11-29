@class NSString;

@interface SendYoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int clientMsgId;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) unsigned int yoType;

+ (void)initialize;

@end
