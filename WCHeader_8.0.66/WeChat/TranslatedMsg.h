@class NSString, SKBuiltinBuffer_t;

@interface TranslatedMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned int clientMsgId;
@property (retain, nonatomic) NSString *translatedText;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *brandWording;
@property (retain, nonatomic) SKBuiltinBuffer_t *cookie;
@property (nonatomic) int canReTrans;

+ (void)initialize;

@end
