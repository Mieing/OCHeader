@class NSString, NSArray, IESECListKitAPIConfig, IESECListKitExperimentConfig;

@interface IESECListKitBundleConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *minSupportAppVersion;
@property (retain, nonatomic) NSArray *preloadItems;
@property (retain, nonatomic) IESECListKitAPIConfig *apiConfig;
@property (retain, nonatomic) IESECListKitAPIConfig *categoryApiConfig;
@property (retain, nonatomic) IESECListKitExperimentConfig *experimentConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)apiConfigJSONTransformer;
+ (id)categoryApiConfigJSONTransformer;
+ (id)experimentConfigJSONTransformer;
+ (id)preloadItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
