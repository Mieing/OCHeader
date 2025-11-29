@class NSArray;
@protocol IESECGoodsDetailShopEntryModel;

@interface IESECShopInfoModel : NSObject

@property (retain, nonatomic) id<IESECGoodsDetailShopEntryModel> shopEntry;
@property (copy, nonatomic) NSArray *shopRecommendGoods;

- (void).cxx_destruct;

@end
