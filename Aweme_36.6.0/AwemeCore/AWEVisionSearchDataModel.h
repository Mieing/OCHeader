@class AWESearchMerchandiseResultModel, AWEAwemeModel;

@interface AWEVisionSearchDataModel : AWEBaseApiModel

@property (nonatomic) unsigned long long dataType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWESearchMerchandiseResultModel *goodsModel;

+ (id)awemeModelJSONTransformer;
+ (id)goodsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
