@class NSString, IESECGoodsDetailModel, IESECRecommendReasonModel;

@interface IESECRecommmendCommonPromotionWrapperModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pID;
@property (retain, nonatomic) IESECGoodsDetailModel *promotionInfo;
@property (copy, nonatomic) NSString *recommendInfo;
@property (retain, nonatomic) IESECRecommendReasonModel *recReason;
@property (nonatomic) BOOL isInLive;
@property (copy, nonatomic) NSString *coverTag;
@property (copy, nonatomic) NSString *discountContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasRecReason;
- (void).cxx_destruct;

@end
