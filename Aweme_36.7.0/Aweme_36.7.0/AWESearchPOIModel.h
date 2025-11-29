@class NSArray, AWEPOIContentItemModel;

@interface AWESearchPOIModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPOIContentItemModel *poiModel;
@property (retain, nonatomic) NSArray *highlightPositionInfos;

+ (id)highlightPositionInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
