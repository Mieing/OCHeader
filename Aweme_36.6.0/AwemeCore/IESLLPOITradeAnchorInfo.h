@class IESLLPOIItemAnchorContentModel, NSString, NSArray, NSDictionary, IESLLPOIAnchorLifeExtraModel, IESLLifeURLModel;

@interface IESLLPOITradeAnchorInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isEndMinorTagExpand;
@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *mpAppId;
@property (retain, nonatomic) IESLLifeURLModel *icon;
@property (retain, nonatomic) IESLLPOIItemAnchorContentModel *commentContent;
@property (retain, nonatomic) NSArray *minorTags;
@property (copy, nonatomic) NSDictionary *anchorSuffix;
@property (retain, nonatomic) NSArray *minorExtendActions;
@property (nonatomic) float minorExtendTime;
@property (copy, nonatomic) NSString *feedLogExtra;
@property (retain, nonatomic) IESLLPOIAnchorLifeExtraModel *lifeExtra;
@property (nonatomic) long long routeType;
@property (copy, nonatomic) NSString *secondActualShowText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)minorTagsJSONTransformer;
+ (id)commentContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
