@class NSArray, NSString;

@interface BDPRevisitRealTimeConditionResponseData : BDPBasePluginModel

@property (nonatomic) double nextRequestInterval;
@property (copy, nonatomic) NSArray *triggerCheck;
@property (copy, nonatomic) NSString *bizExtra;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
