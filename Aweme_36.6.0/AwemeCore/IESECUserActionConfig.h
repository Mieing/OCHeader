@class NSNumber, NSString, NSArray;

@interface IESECUserActionConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *isAutoTrigger;
@property (nonatomic) long long life;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *rulesList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rulesListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
