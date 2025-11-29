@class NSNumber, NSDictionary, NSString;

@interface BDMannorStyleTemplateModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *templateID;
@property (copy, nonatomic) NSDictionary *componentData;
@property (copy, nonatomic) NSDictionary *componentRelation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentDataJSONTransformer;
+ (id)componentRelationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
