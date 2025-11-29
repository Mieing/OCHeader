@class NSString, SKBuiltinBuffer_t;

@interface AppMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int sdkVersion;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) SKBuiltinBuffer_t *thumb;
@property (nonatomic) int source;
@property (nonatomic) int remindId;
@property (retain, nonatomic) NSString *msgSource;
@property (retain, nonatomic) NSString *shareUrlOriginal;
@property (retain, nonatomic) NSString *shareUrlOpen;
@property (retain, nonatomic) NSString *jsAppId;

+ (void)initialize;

@end
