@class AWEShopAssistModel;

@interface AWEShopAssistResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEShopAssistModel *shopAssistHint;

+ (id)shopAssistHintJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
