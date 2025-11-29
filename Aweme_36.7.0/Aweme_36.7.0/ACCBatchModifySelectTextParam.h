@class NSString, ACCUpdateTextMaterialParam;

@interface ACCBatchModifySelectTextParam : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long start;
@property (nonatomic) long long length;
@property (retain, nonatomic) ACCUpdateTextMaterialParam *updateTextMaterialParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateTextMaterialParamJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
