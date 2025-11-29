@class NSString, AWENearbyGrouponBubbleModel, AWEGrouponBubbleModel;

@interface AWENearbyC2TransformerGuideTipCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *nodeTag;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) AWENearbyGrouponBubbleModel *guideTips;
@property (retain, nonatomic) AWEGrouponBubbleModel *grouponGuideTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
