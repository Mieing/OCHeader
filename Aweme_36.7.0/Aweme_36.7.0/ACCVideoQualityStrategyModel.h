@class NSDictionary, NSMutableSet, NSString;
@protocol ACCVideoQualityStrategyMatchRuleProtocol;

@interface ACCVideoQualityStrategyModel : NSObject

@property (retain, nonatomic) id<ACCVideoQualityStrategyMatchRuleProtocol> matchRule;
@property (copy, nonatomic) NSDictionary *result;
@property (retain, nonatomic) NSMutableSet *matchStages;
@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *payload;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (BOOL)isContainsStage:(id)a0;
- (id)videoQualitySettingForResult:(id)a0;
- (long long)indexForResult:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
