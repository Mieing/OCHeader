@class IESECGoodsDetailMarketingActivityDataModel, IESECGoodsDetailContentDataModel;

@interface IESECGoodsDetailBaseInfoDataModel : IESECBaseApiModel

@property (retain, nonatomic) IESECGoodsDetailMarketingActivityDataModel *activityItemDataModel;
@property (retain, nonatomic) IESECGoodsDetailContentDataModel *baseInfoContentDataModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
