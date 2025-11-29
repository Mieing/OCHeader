@class NSString, SKBuiltinBuffer_t;

@interface TranslateOrgMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned int clientMsgId;
@property (retain, nonatomic) NSString *textMsg;
@property (retain, nonatomic) NSString *chatRoomId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) SKBuiltinBuffer_t *cookie;
@property (retain, nonatomic) NSString *prefixContent;

+ (void)initialize;

@end
