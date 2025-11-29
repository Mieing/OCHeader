@class NSString, IESEffectModel, IESEffectSampleVideoModel;

@interface IESCategorySampleEffectModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) IESEffectModel *effect;
@property (copy, nonatomic) IESEffectSampleVideoModel *video;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
