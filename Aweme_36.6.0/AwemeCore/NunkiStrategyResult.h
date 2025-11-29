@class NSString;

@interface NunkiStrategyResult : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) id resultValue;
@property (copy, nonatomic) NSString *resultType;
@property (copy, nonatomic) NSString *resultOP;
@property (nonatomic) NSString *scheduleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
