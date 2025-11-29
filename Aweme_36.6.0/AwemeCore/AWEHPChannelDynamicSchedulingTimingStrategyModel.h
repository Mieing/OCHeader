@class NSArray, NSString;

@interface AWEHPChannelDynamicSchedulingTimingStrategyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *channelLimitStrategyModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)channelLimitStrategyModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
