@class IESLLPOIContentItemModel, NSArray;

@interface IESLLSearchPOIModel : IESLLifeBaseApiModel

@property (retain, nonatomic) IESLLPOIContentItemModel *poiModel;
@property (retain, nonatomic) NSArray *highlightPositionInfos;

+ (id)highlightPositionInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
