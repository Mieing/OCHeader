@class NSDictionary, NSString, YataFeatureModel;

@interface YataDataItemModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *features;
@property (retain, nonatomic) NSDictionary *fields;
@property (retain, nonatomic) YataFeatureModel *feature;
@property (retain, nonatomic) NSDictionary *events;
@property (nonatomic) BOOL localDataPassiveChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)featuresJSONTransformer;
+ (id)eventsJSONTransformer;
+ (id)fieldsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)afterRenderEventList;
- (BOOL)isPlaceHolderTypeIgnore;
- (void)removeAfterRenderEventList;
- (BOOL)isDataRenderQualified;
- (BOOL)isDataMergeIncremental;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
