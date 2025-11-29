@class NSString;

@interface AWEIMSkylightExitCondition : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long clickTimes;
@property (nonatomic) unsigned long long showDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;


@end
