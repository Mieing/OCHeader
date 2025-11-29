@interface AWEUserBlockResponseModel : AWEBaseApiModel

@property (nonatomic) long long blockStatus;

+ (id)blockStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
