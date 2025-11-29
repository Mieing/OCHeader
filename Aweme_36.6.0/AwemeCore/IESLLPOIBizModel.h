@class IESLLPOITradingModel, IESLLPOICollectRuleModel, IESLLPOIDouDiscountModel, IESLLPOIBubbleInItemDetailModel, IESLLPOINearbyMapEntryModel, IESLLPOIAwemeTagRateModel, IESLLPOIServiceButtonModel, IESLLPOISpuModel, NSString, IESLLPOIAwemeTagRateInfoModel, IESLLPOINearbyRankEntryModel, IESLLPOIAnchorReviewStatusModel, IESLLPOIDouDiscountItemCard, IESLLPOILynxModel;

@interface IESLLPOIBizModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLPOICollectRuleModel *showCollectRuleInfo;
@property (retain, nonatomic) IESLLPOIServiceButtonModel *poiServiceButton;
@property (retain, nonatomic) IESLLPOILynxModel *feedLynxData;
@property (retain, nonatomic) IESLLPOISpuModel *spuInfo;
@property (retain, nonatomic) IESLLPOIDouDiscountModel *douDiscountInfo;
@property (retain, nonatomic) IESLLPOIAwemeTagRateModel *tagRateCard;
@property (retain, nonatomic) IESLLPOIAwemeTagRateInfoModel *tagRateInfo;
@property (retain, nonatomic) IESLLPOITradingModel *poiTrading;
@property (retain, nonatomic) IESLLPOIBubbleInItemDetailModel *bubbleInDetail;
@property (retain, nonatomic) IESLLPOINearbyRankEntryModel *nearbyRankEntry;
@property (nonatomic) BOOL showPOICollectElement;
@property (retain, nonatomic) IESLLPOINearbyMapEntryModel *poiMapEntry;
@property (retain, nonatomic) IESLLPOIAnchorReviewStatusModel *poiAnchorReviewStatus;
@property (retain, nonatomic) IESLLPOIDouDiscountItemCard *douDiscountItemCard;
@property (nonatomic) BOOL showNewPOICollectElement;
@property (copy, nonatomic) NSString *showCollectRuleContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)poiAnchorReviewStatusContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)decodeValueForKey:(id)a0 withCoder:(id)a1 modelVersion:(unsigned long long)a2;

@end
