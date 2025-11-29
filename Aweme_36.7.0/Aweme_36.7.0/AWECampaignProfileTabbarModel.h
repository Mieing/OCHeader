@class NSDictionary, AWECampaignTabbarBubbleModel, NSString;

@interface AWECampaignProfileTabbarModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWECampaignTabbarBubbleModel *tabbarBubbleModel;
@property (nonatomic) BOOL isReady;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabbarBubbleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
