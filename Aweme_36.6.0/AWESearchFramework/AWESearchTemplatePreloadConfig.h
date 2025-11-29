@class NSArray, NSString;

@interface AWESearchTemplatePreloadConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *intermediate;
@property (retain, nonatomic) NSArray *mix;
@property (retain, nonatomic) NSArray *user;
@property (retain, nonatomic) NSArray *music;
@property (retain, nonatomic) NSArray *poi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userJSONTransformer;
+ (id)musicJSONTransformer;
+ (id)poiJSONTransformer;
+ (id)currentSearchTemplatePreloadConfig;
+ (id)preloadModelsWithType:(long long)a0;
+ (id)intermediateJSONTransformer;
+ (id)mixJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
