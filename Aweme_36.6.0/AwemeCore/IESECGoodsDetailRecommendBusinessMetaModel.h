@class IESECRecommendItemModel;

@interface IESECGoodsDetailRecommendBusinessMetaModel : NSObject

@property (retain, nonatomic) IESECRecommendItemModel *recommendItem;
@property (nonatomic) long long tapActionType;
@property (nonatomic) long long maskAppearType;
@property (nonatomic) BOOL openWithGoods;
@property (nonatomic) BOOL openWithGoodsImage;

- (void).cxx_destruct;

@end
