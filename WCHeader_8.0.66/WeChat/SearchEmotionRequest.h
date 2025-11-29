@class NSString, SKBuiltinBuffer_t;

@interface SearchEmotionRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int reqType;
@property (retain, nonatomic) NSString *keyWord;
@property (retain, nonatomic) SKBuiltinBuffer_t *pageBuf;
@property (nonatomic) unsigned long long searchId;

+ (void)initialize;

@end
