@class NSDictionary, NSString;

@interface IESECListKitFeedExtraModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *sliceConfigs;
@property (copy, nonatomic) NSString *postBack;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *reservedSectionIDs;
@property (copy, nonatomic) NSString *sectionExtras;
@property (nonatomic) long long couponPlanId;
@property (copy, nonatomic) NSString *couponPanelData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sliceConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
