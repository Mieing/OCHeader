@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface ExchangeEmotionPackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *seriesId;
@property (nonatomic) unsigned int isAutomatic;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) SKBuiltinBuffer_t *token;

+ (void)initialize;

@end
