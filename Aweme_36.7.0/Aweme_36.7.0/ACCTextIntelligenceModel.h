@class NSString, NSArray, NSDictionary;

@interface ACCTextIntelligenceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *styleName;
@property (retain, nonatomic) NSArray *miniTemplate;
@property (retain, nonatomic) NSArray *miniDraft;
@property (retain, nonatomic) NSDictionary *miniDraftDependentEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)miniTemplateJSONTransformer;
+ (id)miniDraftJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
