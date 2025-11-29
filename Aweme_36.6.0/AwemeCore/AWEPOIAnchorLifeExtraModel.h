@class AWEPOIAnchorVisitHistory, AWEPOIAnchorTagRateAggInfo, NSString, AWEPOIAnchorBubbleModel;

@interface AWEPOIAnchorLifeExtraModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIAnchorTagRateAggInfo *tagRateAggInfo;
@property (retain, nonatomic) AWEPOIAnchorBubbleModel *bubble;
@property (retain, nonatomic) AWEPOIAnchorVisitHistory *visitHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
