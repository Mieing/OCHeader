@class NSString, NSArray, IESIMCodeGenQualityReceptionStaticModel;

@interface IESIMCodeGenGetConsultingStatisticResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSString *showText;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *tipText;
@property (copy, nonatomic) NSArray *itemListModelArray;
@property (retain, nonatomic) IESIMCodeGenQualityReceptionStaticModel *qualityReceptionStaticModel;
@property (copy, nonatomic) NSArray *guideInfoListModelArray;
@property (nonatomic) long long reachPlanStatus;
@property (copy, nonatomic) NSArray *msgTabTitleInfoModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
