@class NSString;

@interface ACCVideoQualityStrategyMatchNumCompareRule : NSObject <ACCVideoQualityStrategyMatchRuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleName;

- (id)matchKey:(id)a0 inKeys:(id)a1;

@end
