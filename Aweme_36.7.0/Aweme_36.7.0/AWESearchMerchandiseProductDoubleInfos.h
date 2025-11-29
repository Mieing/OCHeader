@class NSArray;

@interface AWESearchMerchandiseProductDoubleInfos : AWEBaseApiModel

@property (retain, nonatomic) NSArray *infosArray;
@property (nonatomic) long long pointType;

+ (id)infosArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
