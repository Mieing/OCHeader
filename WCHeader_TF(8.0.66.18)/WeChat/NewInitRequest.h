@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface NewInitRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) SKBuiltinBuffer_t *currentSynckey;
@property (retain, nonatomic) SKBuiltinBuffer_t *maxSynckey;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) SKBuiltinBuffer_t *syncUniqKeyBuf;

+ (void)initialize;

@end
