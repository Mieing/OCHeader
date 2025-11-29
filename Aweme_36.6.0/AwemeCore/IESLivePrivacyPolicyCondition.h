@class NSArray;

@interface IESLivePrivacyPolicyCondition : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long logic;
@property (readonly, nonatomic) NSArray *children;

+ (id)conditionWithDictionary:(id)a0;
+ (id)conditionWithField:(id)a0 value:(id)a1;
+ (id)andConditionWithFieldConditions:(id)a0;
+ (id)orConditionWithFieldConditions:(id)a0;

- (id)initWithLogic:(unsigned long long)a0 children:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)evaluateWithContext:(id)a0;

@end
