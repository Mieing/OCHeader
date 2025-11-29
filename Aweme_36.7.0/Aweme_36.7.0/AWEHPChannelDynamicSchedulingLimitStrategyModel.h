@class NSString, NSDictionary;

@interface AWEHPChannelDynamicSchedulingLimitStrategyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long value;
@property (retain, nonatomic) NSDictionary *channelValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
