@class NSArray, NSString;

@interface BDPRevisitGuidanceConditionResponseData : BDPBasePluginModel

@property (nonatomic) double guidanceInterval;
@property (nonatomic) double realTimeInterval;
@property (copy, nonatomic) NSArray *awardConditions;
@property (copy, nonatomic) NSString *bizExtra;
@property (nonatomic) long long remainCount;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
