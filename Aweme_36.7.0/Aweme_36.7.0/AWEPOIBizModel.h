@class AWEPOIDouDiscountModel, AWEPOIServiceButtonModel, AWEPOISpuModel, AWEPOIAwemeTagRateInfoModel, AWEPOITradingModel, AWEPOIVideoDarenCardModel, AWEPOIAnchorReviewStatusModel, AWEPOIBubbleInItemDetailModel, NSString, AWEPOILynxModel, AWEPOINearbyRankEntryModel, AWEPOIAwemeTagRateModel, AWEPOICollectRuleModel, AWEPOINearbyMapEntryModel, AWEPOIDouDiscountItemCard, AWEPOINearbyHotRankPOI;

@interface AWEPOIBizModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOICollectRuleModel *showCollectRuleInfo;
@property (retain, nonatomic) AWEPOIServiceButtonModel *poiServiceButton;
@property (retain, nonatomic) AWEPOILynxModel *feedLynxData;
@property (retain, nonatomic) AWEPOISpuModel *spuInfo;
@property (retain, nonatomic) AWEPOIDouDiscountModel *douDiscountInfo;
@property (retain, nonatomic) AWEPOIAwemeTagRateModel *tagRateCard;
@property (retain, nonatomic) AWEPOIAwemeTagRateInfoModel *tagRateInfo;
@property (retain, nonatomic) AWEPOITradingModel *poiTrading;
@property (retain, nonatomic) AWEPOIBubbleInItemDetailModel *bubbleInDetail;
@property (retain, nonatomic) AWEPOINearbyRankEntryModel *nearbyRankEntry;
@property (nonatomic) BOOL showPOICollectElement;
@property (retain, nonatomic) AWEPOINearbyMapEntryModel *poiMapEntry;
@property (retain, nonatomic) AWEPOIAnchorReviewStatusModel *poiAnchorReviewStatus;
@property (retain, nonatomic) AWEPOIDouDiscountItemCard *douDiscountItemCard;
@property (nonatomic) BOOL showNewPOICollectElement;
@property (copy, nonatomic) NSString *showCollectRuleContent;
@property (retain, nonatomic) AWEPOIVideoDarenCardModel *darenCardModel;
@property (retain, nonatomic) AWEPOINearbyHotRankPOI *nearbyHotRankPOI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)poiAnchorReviewStatusContentJSONTransformer;
+ (id)darenCardModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)decodeValueForKey:(id)a0 withCoder:(id)a1 modelVersion:(unsigned long long)a2;

@end
