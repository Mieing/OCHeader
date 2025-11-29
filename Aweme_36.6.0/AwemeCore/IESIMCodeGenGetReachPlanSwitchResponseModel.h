@class NSString, NSArray;

@interface IESIMCodeGenGetReachPlanSwitchResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSArray *reachPlanDescListModelArray;
@property (copy, nonatomic) NSString *reachPlanAgreementLink;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
