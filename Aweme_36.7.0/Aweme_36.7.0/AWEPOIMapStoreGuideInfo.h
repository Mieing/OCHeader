@class NSString;

@interface AWEPOIMapStoreGuideInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *guideImageUrl;
@property (copy, nonatomic) NSString *directionIconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
