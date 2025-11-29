@class NSArray, NSNumber, AWEFavoritePOISelectorModel;

@interface AWEFavoritePOIListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *poiList;
@property (copy, nonatomic) NSArray *poiListNationwide;
@property (copy, nonatomic) NSArray *nearbyPoiList;
@property (copy, nonatomic) NSArray *recommendationPoiList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEFavoritePOISelectorModel *selector;

+ (id)poiListJSONTransformer;
+ (id)poiListNationwideJSONTransformer;
+ (id)nearbyPoiListJSONTransformer;
+ (id)recommendationPoiListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
