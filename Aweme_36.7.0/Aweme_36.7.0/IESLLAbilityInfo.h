@class NSString, NSNumber;

@interface IESLLAbilityInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *abilityKey;
@property (retain, nonatomic) NSNumber *support;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
