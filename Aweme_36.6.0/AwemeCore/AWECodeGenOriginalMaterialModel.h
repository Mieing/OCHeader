@class NSString;

@interface AWECodeGenOriginalMaterialModel : AWEBaseDataModel

@property (nonatomic) int materialType;
@property (copy, nonatomic) NSString *materialId;
@property (nonatomic) int mvType;
@property (nonatomic) int aigcType;
@property (copy, nonatomic) NSString *memoryEffectId;
@property (copy, nonatomic) NSString *materialData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
