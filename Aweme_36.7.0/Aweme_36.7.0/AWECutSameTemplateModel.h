@class NSArray, NSString;

@interface AWECutSameTemplateModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *fragments;
@property (copy, nonatomic) NSString *alignMode;
@property (copy, nonatomic) NSString *cutsameVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fragmentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
