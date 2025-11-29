@class BaseRequest, SKBuiltinBuffer_t, NSString;

@interface GetEmotionListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *reqBuf;
@property (nonatomic) unsigned int reqType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int category;
@property (retain, nonatomic) SKBuiltinBuffer_t *emotionListBuf;
@property (retain, nonatomic) NSString *setKey;
@property (nonatomic) unsigned long long sessionId;

+ (void)initialize;

- (void)setSessionId:(unsigned long long)a0;
- (unsigned long long)sessionId;
- (void)setSetKey:(id)a0;
- (id)setKey;
- (void)setEmotionListBuf:(id)a0;
- (id)emotionListBuf;
- (void)setCategory:(unsigned int)a0;
- (unsigned int)category;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setReqType:(unsigned int)a0;
- (unsigned int)reqType;
- (void)setReqBuf:(id)a0;
- (id)reqBuf;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
