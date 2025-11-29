@class NSString, AWENearbyGrouponBubbleModelButton, NSDictionary, AWENearbyGrouponCommonFrequencyData, AWENearbyGrouponBubbleModelContent;

@interface AWENearbyGrouponBubbleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *style;
@property (nonatomic) unsigned long long bubbleCategory;
@property (nonatomic) double liveSeconds;
@property (retain, nonatomic) AWENearbyGrouponBubbleModelButton *button;
@property (copy, nonatomic) NSString *target;
@property (copy, nonatomic) NSString *guideElement;
@property (copy, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) AWENearbyGrouponBubbleModelContent *content;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWENearbyGrouponCommonFrequencyData *frequencyData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
