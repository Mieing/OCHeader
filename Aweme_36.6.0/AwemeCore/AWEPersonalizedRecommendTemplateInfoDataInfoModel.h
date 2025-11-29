@class NSArray, NSString;

@interface AWEPersonalizedRecommendTemplateInfoDataInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *templateModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
