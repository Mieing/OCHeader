@class NSString, IESECGoodsDetailModel, IESECGoodsRecommendReasonModel;

@interface IESECFeedPromotionWrapperModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *promotionID;
@property (retain, nonatomic) IESECGoodsDetailModel *promotion;
@property (retain, nonatomic) IESECGoodsRecommendReasonModel *recommendModel;
@property (copy, nonatomic) NSString *recommendInfo;
@property (copy, nonatomic) NSString *scheme;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
