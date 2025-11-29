@class NSString, NSArray;

@interface AWECodeGenRecommendEffectInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *creativeObjectType;
@property (copy, nonatomic) NSArray *outputResourceTypeArray;
@property (copy, nonatomic) NSString *aigcType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
