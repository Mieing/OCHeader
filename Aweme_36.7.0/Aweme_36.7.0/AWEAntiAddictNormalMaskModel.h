@class NSArray, NSString;

@interface AWEAntiAddictNormalMaskModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSArray *relaxDayMaterials;
@property (readonly, copy, nonatomic) NSArray *relaxNightMaterials;
@property (readonly, copy, nonatomic) NSArray *sleepMaterials;
@property (readonly, copy, nonatomic) NSArray *blockMaterials;
@property (readonly, copy, nonatomic) NSArray *blockNightMaterials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relaxDayMaterialsJSONTransformer;
+ (id)relaxNightMaterialsJSONTransformer;
+ (id)sleepMaterialsJSONTransformer;
+ (id)blockMaterialsJSONTransformer;
+ (id)blockNightMaterialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
