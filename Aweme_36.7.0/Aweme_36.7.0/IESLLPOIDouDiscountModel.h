@class NSString, IESLLAwemeHotSearchTipModel, IESLLPOIDouDiscountRankInfoModel;

@interface IESLLPOIDouDiscountModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *douDiscountLabel;
@property (retain, nonatomic) IESLLAwemeHotSearchTipModel *douDiscountTipModel;
@property (retain, nonatomic) IESLLPOIDouDiscountRankInfoModel *douDiscountRankInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
