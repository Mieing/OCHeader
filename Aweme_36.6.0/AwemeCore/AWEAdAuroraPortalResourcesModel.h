@class NSString, AWEURLModel;

@interface AWEAdAuroraPortalResourcesModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *ignitionUrl;
@property (retain, nonatomic) AWEURLModel *ignitionGlowingUrl;
@property (retain, nonatomic) AWEURLModel *shineUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ignitionUrlJSONTransformer;
+ (id)ignitionGlowingUrlJSONTransformer;
+ (id)shineUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
