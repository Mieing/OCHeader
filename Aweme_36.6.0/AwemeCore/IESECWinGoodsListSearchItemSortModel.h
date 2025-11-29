@class NSDictionary, NSArray;

@interface IESECWinGoodsListSearchItemSortModel : IESECWinGoodsListSearchItemBaseModel

@property (retain, nonatomic) NSDictionary *businessInfo;
@property (retain, nonatomic) NSArray *renderInfo;

+ (id)renderInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
