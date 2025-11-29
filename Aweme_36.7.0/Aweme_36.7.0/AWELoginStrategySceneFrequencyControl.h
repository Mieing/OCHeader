@class NSString;

@interface AWELoginStrategySceneFrequencyControl : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long rangeInterval;
@property (nonatomic) long long maxCount;
@property (copy, nonatomic) NSString *rangeType;
@property (nonatomic) long long maxTimeInRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
