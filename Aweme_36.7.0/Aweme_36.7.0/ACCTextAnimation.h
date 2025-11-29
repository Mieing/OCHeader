@class NSString, ACCMaterialInfo;

@interface ACCTextAnimation : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) ACCMaterialInfo *materialInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)materialInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
