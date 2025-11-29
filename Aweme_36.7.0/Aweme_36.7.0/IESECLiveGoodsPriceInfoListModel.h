@class NSArray;

@interface IESECLiveGoodsPriceInfoListModel : IESECLiveApiBaseModel

@property (retain, nonatomic) NSArray *priceInfos;

+ (id)priceInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
