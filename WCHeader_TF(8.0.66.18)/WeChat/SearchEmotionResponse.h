@class NSString, SKBuiltinBuffer_t, BaseResponse;

@interface SearchEmotionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *searchResult;
@property (retain, nonatomic) SKBuiltinBuffer_t *pageBuf;
@property (nonatomic) unsigned long long searchId;

+ (void)initialize;

@end
