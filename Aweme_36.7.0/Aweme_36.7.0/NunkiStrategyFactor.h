@class NSString, NSDictionary;

@interface NunkiStrategyFactor : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *factorName;
@property (copy, nonatomic) NSDictionary *factorQueryExt;
@property (retain, nonatomic) id factorValue;
@property (copy, nonatomic) NSString *factorType;
@property (copy, nonatomic) NSString *factorOP;
@property (nonatomic) unsigned long long factorCacheType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
