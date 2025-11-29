@class NSString, NSArray, AWECodeGenUrlModel, AWECodeGenUgcTagsModel;

@interface AWECodeGenAigcInspriationModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *effectName;
@property (retain, nonatomic) AWECodeGenUrlModel *coverModel;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSArray *referenceResourceListModelArray;
@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *aigcType;
@property (copy, nonatomic) NSString *ugcVersion;
@property (retain, nonatomic) AWECodeGenUgcTagsModel *ugcTagsModel;
@property (copy, nonatomic) NSArray *recommendIdsArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
