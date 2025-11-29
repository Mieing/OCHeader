@class BaseRequest, SKBuiltinString_t, SKBuiltinBuffer_t;

@interface SearchContactRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinString_t *userName;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) SKBuiltinBuffer_t *reqBuf;
@property (nonatomic) unsigned int fromScene;
@property (nonatomic) unsigned int searchScene;
@property (nonatomic) BOOL includeIntelligence;

+ (void)initialize;

@end
