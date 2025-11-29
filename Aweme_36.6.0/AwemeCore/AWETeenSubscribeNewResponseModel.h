@interface AWETeenSubscribeNewResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasNew;
@property (nonatomic) unsigned long long count;

+ (id)hasNewJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
