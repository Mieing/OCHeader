@class NSString;

@interface IESECUserActionRule : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCycle;
@property (nonatomic) long long ruleId;
@property (nonatomic) long long condition;
@property (nonatomic) long long probability;
@property (readonly, copy, nonatomic) NSString *ruleIdStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
