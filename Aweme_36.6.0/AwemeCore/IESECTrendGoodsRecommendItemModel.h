@class IESECFeedPromotionWrapperModel, IESECTrendCardWrapperModel, NSString;
@protocol IESECTrendGoodsVideoCardModelProtocol;

@interface IESECTrendGoodsRecommendItemModel : IESECBaseApiModel

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) IESECFeedPromotionWrapperModel *productModel;
@property (retain, nonatomic) IESECTrendCardWrapperModel *trendCardsModel;
@property (retain, nonatomic) id<IESECTrendGoodsVideoCardModelProtocol> goodsVideoModel;
@property (nonatomic) long long videoCategory;
@property (copy, nonatomic) NSString *requestLogID;

+ (id)goodsVideoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
