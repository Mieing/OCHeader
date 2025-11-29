@class NSString;

@interface AWENearbyResourceNativeFrequencyModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long freqRuleX;
@property (nonatomic) unsigned long long freqRuleY;
@property (copy, nonatomic) NSString *baseKey;
@property (copy, nonatomic) NSString *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
