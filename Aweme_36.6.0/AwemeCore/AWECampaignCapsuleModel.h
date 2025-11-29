@class NSString, AWECampaignCapsuleGradientModel;

@interface AWECampaignCapsuleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *capsuleBGColor;
@property (copy, nonatomic) NSString *capsuleBoderColor;
@property (nonatomic) double capsuleBoderWidth;
@property (retain, nonatomic) AWECampaignCapsuleGradientModel *gradient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
