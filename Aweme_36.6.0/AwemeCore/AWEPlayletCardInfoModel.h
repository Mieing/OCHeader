@class NSArray, AWEPlayletInfoModel, AWECodeGenMoreRelatedInfoModel;

@interface AWEPlayletCardInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPlayletInfoModel *playletInfoModel;
@property (copy, nonatomic) NSArray *awemeModels;
@property (retain, nonatomic) AWECodeGenMoreRelatedInfoModel *moreRelatedInfoModel;
@property (copy, nonatomic) NSArray *relatedItemTagInfos;

+ (id)propertyToModelClassInArrayMap;
+ (id /* block */)isEqualBlock;
+ (id)playletInfoModelJSONTransformer;
+ (id)awemeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
