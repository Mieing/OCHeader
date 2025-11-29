@class NSArray, NSString;

@interface AWECampaignCapsuleGradientModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *gradientColors;
@property (copy, nonatomic) NSArray *gradientStart;
@property (copy, nonatomic) NSArray *gradientEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
