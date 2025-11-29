@class NSString, AWEAwemeHotSearchTipModel, AWEPOIDouDiscountRankInfoModel;

@interface AWEPOIDouDiscountModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *douDiscountLabel;
@property (retain, nonatomic) AWEAwemeHotSearchTipModel *douDiscountTipModel;
@property (retain, nonatomic) AWEPOIDouDiscountRankInfoModel *douDiscountRankInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
