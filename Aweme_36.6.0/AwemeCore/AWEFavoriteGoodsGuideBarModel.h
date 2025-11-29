@class AWEFavoriteGoodsGuideBottomNotiModel, AWEFavoriteGoodsGuideTopBarModel;

@interface AWEFavoriteGoodsGuideBarModel : AWEBaseApiModel

@property (retain, nonatomic) AWEFavoriteGoodsGuideTopBarModel *topBar;
@property (retain, nonatomic) AWEFavoriteGoodsGuideBottomNotiModel *bottomNoti;
@property (nonatomic) long long guideType;

+ (id)topBarJSONTransformer;
+ (id)bottomNotiJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
