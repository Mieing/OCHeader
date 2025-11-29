@class AWESearchMerchandiseTextConfig;

@interface AWESearchMerchandisePriceUpperAreaInfo : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseTextConfig *info;

+ (id)infoJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
