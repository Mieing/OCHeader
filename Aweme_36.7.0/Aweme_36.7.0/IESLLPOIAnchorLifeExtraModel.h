@class NSString, IESLLPOIAnchorTagRateAggInfo, IESLLPOIAnchorBubbleModel, IESLLPOIAnchorVisitHistory;

@interface IESLLPOIAnchorLifeExtraModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLPOIAnchorTagRateAggInfo *tagRateAggInfo;
@property (retain, nonatomic) IESLLPOIAnchorBubbleModel *bubble;
@property (retain, nonatomic) IESLLPOIAnchorVisitHistory *visitHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
