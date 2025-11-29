@class NSArray, NSString;

@interface AWEIMTextTriggerAnimationModel : MTLModel <BDModelCustom, MTLJSONSerializing>

@property (nonatomic) BOOL inAdvance;
@property (nonatomic) int total;
@property (copy, nonatomic) NSArray *keyword;
@property (copy, nonatomic) NSArray *info;
@property (copy, nonatomic) NSString *triggerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoJSONTransformer;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keywordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
