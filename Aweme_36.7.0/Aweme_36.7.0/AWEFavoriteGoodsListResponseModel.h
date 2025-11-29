@class NSArray, NSNumber, AWEFavoriteGoodsGuideBarModel;

@interface AWEFavoriteGoodsListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *goodsList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *total;
@property (retain, nonatomic) AWEFavoriteGoodsGuideBarModel *guideBar;

+ (id)goodsListJSONTransformer;
+ (id)guideBarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
