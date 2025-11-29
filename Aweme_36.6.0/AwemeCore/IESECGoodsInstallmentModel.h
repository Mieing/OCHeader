@class NSString, IESECGoodsInstallmentDiscountInfoModel, IESECGoodsInstallmentTermInfoModel, NSNumber, IESECGoodsInstallmentOpenInfoModel;

@interface IESECGoodsInstallmentModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *cacheInstallmentTrackerListString;
@property (retain, nonatomic) NSNumber *cacheInstallmentTrackerRecommendTermCount;
@property (retain, nonatomic) IESECGoodsInstallmentOpenInfoModel *openInfoModel;
@property (retain, nonatomic) IESECGoodsInstallmentDiscountInfoModel *discountModel;
@property (retain, nonatomic) IESECGoodsInstallmentTermInfoModel *termModel;

+ (id)JSONKeyPathsByPropertyKey;

- (id)installmentTrackerListString;
- (id)installmentVoucherListTrackerString;
- (id)installmentTrackerRecommendTermCount;
- (void).cxx_destruct;

@end
