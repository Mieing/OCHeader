@class AWEDoubleColumnSearchMerchandiseQueryModel, AWESearchPOIFilterControlInfoModel, AWEDoubleColumnSearchMerchandiseUpdateQueryModel;
@protocol AWESearchPOIFilterCardViewDelegate;

@interface AWESearchPOIFilterCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseQueryModel *queryInfo;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseUpdateQueryModel *updateQuery;
@property (retain, nonatomic) AWESearchPOIFilterControlInfoModel *controllerInfoModel;
@property (nonatomic) double awesearch_poi_normalFilter_heightCache;
@property (nonatomic) double awesearch_poi_filterHeightCache;
@property (weak, nonatomic) id<AWESearchPOIFilterCardViewDelegate> cardDelegate;
@property (nonatomic) double quickFilterContentOffSetX;

+ (id)updateQueryJSONTransformer;
+ (id)queryInfoJSONTransformer;
+ (id)controllerInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
