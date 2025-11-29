@class NSArray, NSString;

@interface AWESearchMerchandiseProductDoubleInfos : AWEBaseApiModel

@property (retain, nonatomic) NSArray *infosArray;
@property (nonatomic) long long pointType;
@property (copy, nonatomic) NSString *sellingPtInfo;

+ (id)infosArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
