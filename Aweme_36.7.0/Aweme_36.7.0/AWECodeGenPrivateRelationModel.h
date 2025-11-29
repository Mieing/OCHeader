@interface AWECodeGenPrivateRelationModel : AWEBaseDataModel

@property (nonatomic) long long relationType;
@property (nonatomic) int relationValue;

+ (id)JSONKeyPathsByPropertyKey;

@end
